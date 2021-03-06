#
# Copyright 2014-2015 Dario Manesku. All rights reserved.
# License: http://www.opensource.org/licenses/BSD-2-Clause
#

BGFX_DIR=../../../../bgfx
RUNTIME_DIR=../../../runtime
BUILD_DIR=../../../_build
SCRIPT_DIR=$(BGFX_DIR)/scripts

THISDIR:=$(SCRIPT_DIR)
include $(THISDIR)/tools.mk

VS_FLAGS+=-i $(THISDIR)../src/ --type vertex
FS_FLAGS+=-i $(THISDIR)../src/ --type fragment

VS_SOURCES=$(wildcard ../vs_*.sc)
FS_SOURCES=$(wildcard ../fs_*.sc)

VS_BIN = $(addsuffix .bin.h, $(basename $(VS_SOURCES)))
FS_BIN = $(addsuffix .bin.h, $(basename $(FS_SOURCES)))

DEST_DIR = /headers/

BIN = $(VS_BIN) $(FS_BIN)

SHADER_TMP = $(TEMP)/tmp

vs_%.bin.h : vs_%.sc
	@echo [$(<)]
	$(SILENT) $(SHADERC) $(VS_FLAGS) --platform linux                  -f $(<) -o $(SHADER_TMP) --bin2c $(basename $(<F))_glsl
	@cat $(SHADER_TMP) > $(addsuffix $(@F), $(addsuffix $(DEST_DIR), $(@D)))
	-$(SILENT) $(SHADERC) $(VS_FLAGS) --platform windows -p vs_3_0 -O 3 -f $(<) -o $(SHADER_TMP) --bin2c $(basename $(<F))_dx9
	-@cat $(SHADER_TMP) >> $(addsuffix $(@F), $(addsuffix $(DEST_DIR), $(@D)))
	-$(SILENT) $(SHADERC) $(VS_FLAGS) --platform windows -p vs_4_0 -O 3 -f $(<) -o $(SHADER_TMP) --bin2c $(basename $(<F))_dx11
	-@cat $(SHADER_TMP) >> $(addsuffix $(@F), $(addsuffix $(DEST_DIR), $(@D)))

fs_%.bin.h : fs_%.sc
	@echo [$(<)]
	$(SILENT) $(SHADERC) $(FS_FLAGS) --platform linux                  -f $(<) -o $(SHADER_TMP) --bin2c $(basename $(<F))_glsl
	@cat $(SHADER_TMP) > $(addsuffix $(@F), $(addsuffix $(DEST_DIR), $(@D)))
	-$(SILENT) $(SHADERC) $(FS_FLAGS) --platform windows -p ps_3_0 -O 3 -f $(<) -o $(SHADER_TMP) --bin2c $(basename $(<F))_dx9
	-@cat $(SHADER_TMP) >> $(addsuffix $(@F), $(addsuffix $(DEST_DIR), $(@D)))
	-$(SILENT) $(SHADERC) $(FS_FLAGS) --platform windows -p ps_4_0 -O 3 -f $(<) -o $(SHADER_TMP) --bin2c $(basename $(<F))_dx11
	-@cat $(SHADER_TMP) >> $(addsuffix $(@F), $(addsuffix $(DEST_DIR), $(@D)))

.PHONY: generate_headers
generate_headers:
	$(SILENT) gen_headers.sh

.PHONY: all
all: $(BIN) generate_headers

.PHONY: clean
clean:
	@echo Cleaning...
	@-rm -vf $(BIN)

.PHONY: rebuild
rebuild: clean all

rebuild:
	@make -s --no-print-directory clean all
