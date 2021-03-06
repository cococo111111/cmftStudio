static const uint8_t fs_sun_icon_glsl[732] =
{
	0x46, 0x53, 0x48, 0x03, 0x6f, 0x1e, 0x3e, 0x3c, 0x02, 0x00, 0x0a, 0x75, 0x5f, 0x75, 0x6e, 0x69, // FSH.o.><...u_uni
	0x66, 0x6f, 0x72, 0x6d, 0x73, 0x07, 0x38, 0x00, 0x00, 0x38, 0x00, 0x0a, 0x75, 0x5f, 0x74, 0x65, // forms.8..8..u_te
	0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0xab, 0x02, 0x00, 0x00, // xColor..........
	0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, // varying highp ve
	0x63, 0x32, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, // c2 v_texcoord0;.
	0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x75, // uniform vec4 u_u
	0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x73, 0x5b, 0x35, 0x36, 0x5d, 0x3b, 0x0a, 0x75, 0x6e, 0x69, // niforms[56];.uni
	0x66, 0x6f, 0x72, 0x6d, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x75, // form sampler2D u
	0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, // _texColor;.void 
	0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, // main ().{.  lowp
	0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, //  vec4 tmpvar_1;.
	0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x74, 0x65, 0x78, //   tmpvar_1 = tex
	0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x20, 0x28, 0x75, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, // ture2D (u_texCol
	0x6f, 0x72, 0x2c, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x29, // or, v_texcoord0)
	0x3b, 0x0a, 0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, // ;.  lowp float t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // mpvar_2;.  tmpva
	0x72, 0x5f, 0x32, 0x20, 0x3d, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, // r_2 = (tmpvar_1.
	0x78, 0x20, 0x2a, 0x20, 0x63, 0x6c, 0x61, 0x6d, 0x70, 0x20, 0x28, 0x75, 0x5f, 0x75, 0x6e, 0x69, // x * clamp (u_uni
	0x66, 0x6f, 0x72, 0x6d, 0x73, 0x5b, 0x32, 0x35, 0x5d, 0x2e, 0x77, 0x2c, 0x20, 0x30, 0x2e, 0x30, // forms[25].w, 0.0
	0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, // , 1.0));.  lowp 
	0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x3b, 0x0a, // float tmpvar_3;.
	0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x20, 0x3d, 0x20, 0x28, 0x28, 0x74, //   tmpvar_3 = ((t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x79, 0x20, 0x2a, 0x20, 0x63, 0x6c, 0x61, 0x6d, // mpvar_1.y * clam
	0x70, 0x20, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x28, 0x75, 0x5f, 0x75, 0x6e, 0x69, 0x66, 0x6f, // p (.    (u_unifo
	0x72, 0x6d, 0x73, 0x5b, 0x32, 0x35, 0x5d, 0x2e, 0x77, 0x20, 0x2d, 0x20, 0x31, 0x2e, 0x30, 0x29, // rms[25].w - 1.0)
	0x0a, 0x20, 0x20, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x35, 0x2e, 0x30, 0x29, 0x29, 0x20, // .  , 0.0, 5.0)) 
	0x2a, 0x20, 0x30, 0x2e, 0x32, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x76, // * 0.2);.  lowp v
	0x65, 0x63, 0x33, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x3b, 0x0a, 0x20, 0x20, // ec3 tmpvar_4;.  
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x20, 0x3d, 0x20, 0x28, 0x75, 0x5f, 0x75, 0x6e, // tmpvar_4 = (u_un
	0x69, 0x66, 0x6f, 0x72, 0x6d, 0x73, 0x5b, 0x32, 0x35, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x2a, // iforms[25].xyz *
	0x20, 0x28, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x20, 0x2b, 0x20, 0x74, 0x6d, //  ((tmpvar_2 + tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x29, 0x20, 0x2d, 0x20, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, // pvar_3) - (.    
	0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x7a, 0x20, 0x2a, 0x20, 0x38, 0x2e, // (tmpvar_1.z * 8.
	0x30, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, // 0).   * u_unifor
	0x6d, 0x73, 0x5b, 0x33, 0x33, 0x5d, 0x2e, 0x77, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x67, // ms[33].w)));.  g
	0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2e, 0x78, 0x79, 0x7a, 0x20, // l_FragColor.xyz 
	0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x3b, 0x0a, 0x20, 0x20, 0x6c, 0x6f, // = tmpvar_4;.  lo
	0x77, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // wp float tmpvar_
	0x35, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x20, 0x3d, 0x20, // 5;.  tmpvar_5 = 
	0x63, 0x6c, 0x61, 0x6d, 0x70, 0x20, 0x28, 0x28, 0x6d, 0x61, 0x78, 0x20, 0x28, 0x74, 0x6d, 0x70, // clamp ((max (tmp
	0x76, 0x61, 0x72, 0x5f, 0x32, 0x2c, 0x20, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x28, 0x74, 0x6d, 0x70, // var_2, .    (tmp
	0x76, 0x61, 0x72, 0x5f, 0x33, 0x20, 0x2d, 0x20, 0x30, 0x2e, 0x31, 0x29, 0x0a, 0x20, 0x20, 0x29, // var_3 - 0.1).  )
	0x20, 0x2b, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x7a, 0x29, 0x2c, 0x20, //  + tmpvar_1.z), 
	0x30, 0x2e, 0x30, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, // 0.0, 1.0);.  gl_
	0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x74, 0x6d, // FragColor.w = tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                         // pvar_5;.}...
};
static const uint8_t fs_sun_icon_dx9[558] =
{
	0x46, 0x53, 0x48, 0x03, 0x6f, 0x1e, 0x3e, 0x3c, 0x01, 0x00, 0x0a, 0x75, 0x5f, 0x75, 0x6e, 0x69, // FSH.o.><...u_uni
	0x66, 0x6f, 0x72, 0x6d, 0x73, 0x15, 0x38, 0x00, 0x00, 0x22, 0x00, 0x10, 0x02, 0x00, 0x03, 0xff, // forms.8.."......
	0xff, 0xfe, 0xff, 0x2e, 0x00, 0x43, 0x54, 0x41, 0x42, 0x1c, 0x00, 0x00, 0x00, 0x83, 0x00, 0x00, // .....CTAB.......
	0x00, 0x00, 0x03, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x81, 0x00, // ................
	0x00, 0x7c, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02, // .|...D..........
	0x00, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, // .P.......`......
	0x00, 0x22, 0x00, 0x00, 0x00, 0x6c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x74, // ."...l.......u_t
	0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x00, 0xab, 0x04, 0x00, 0x0c, 0x00, 0x01, 0x00, 0x01, // exColor.........
	0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x75, 0x6e, 0x69, 0x66, 0x6f, // .........u_unifo
	0x72, 0x6d, 0x73, 0x00, 0xab, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x04, 0x00, 0x38, 0x00, 0x00, // rms..........8..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, 0x63, 0x72, // .....ps_3_0.Micr
	0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, 0x53, // osoft (R) HLSL S
	0x68, 0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, 0x39, // hader Compiler 9
	0x2e, 0x32, 0x39, 0x2e, 0x39, 0x35, 0x32, 0x2e, 0x33, 0x31, 0x31, 0x31, 0x00, 0x51, 0x00, 0x00, // .29.952.3111.Q..
	0x05, 0x22, 0x00, 0x0f, 0xa0, 0x00, 0x00, 0x80, 0xbf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, // ."..............
	0x40, 0xcd, 0xcc, 0x4c, 0x3e, 0x51, 0x00, 0x00, 0x05, 0x23, 0x00, 0x0f, 0xa0, 0x00, 0x00, 0x00, // @..L>Q...#......
	0x41, 0xcd, 0xcc, 0x4c, 0x3e, 0xcd, 0xcc, 0xcc, 0xbd, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, // A..L>...........
	0x02, 0x05, 0x00, 0x00, 0x80, 0x00, 0x00, 0x03, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, // ................
	0x90, 0x00, 0x08, 0x0f, 0xa0, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x08, 0x80, 0x19, 0x00, 0xff, // ................
	0xa0, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0xff, 0x80, 0x22, 0x00, 0x00, // ............."..
	0xa0, 0x0b, 0x00, 0x00, 0x03, 0x01, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x80, 0x22, 0x00, 0x55, // .............".U
	0xa0, 0x0a, 0x00, 0x00, 0x03, 0x00, 0x00, 0x01, 0x80, 0x01, 0x00, 0x00, 0x80, 0x22, 0x00, 0xaa, // ............."..
	0xa0, 0x42, 0x00, 0x00, 0x03, 0x01, 0x00, 0x0f, 0x80, 0x00, 0x00, 0xe4, 0x90, 0x00, 0x08, 0xe4, // .B..............
	0xa0, 0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x55, // ...............U
	0x80, 0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x00, 0x80, 0x22, 0x00, 0xff, // ............."..
	0xa0, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x80, 0x23, 0x00, 0x55, // .............#.U
	0xa0, 0x23, 0x00, 0xaa, 0xa0, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x14, 0x80, 0x19, 0x00, 0xff, // .#..............
	0xa0, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x02, 0x80, 0x01, 0x00, 0x00, 0x80, 0x00, 0x00, 0xaa, // ................
	0x80, 0x00, 0x00, 0x55, 0x80, 0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x04, 0x80, 0x00, 0x00, 0xaa, // ...U............
	0x80, 0x01, 0x00, 0x00, 0x80, 0x0b, 0x00, 0x00, 0x03, 0x01, 0x00, 0x01, 0x80, 0x00, 0x00, 0xaa, // ................
	0x80, 0x00, 0x00, 0x00, 0x80, 0x02, 0x00, 0x00, 0x03, 0x00, 0x08, 0x18, 0x80, 0x01, 0x00, 0xaa, // ................
	0x80, 0x01, 0x00, 0x00, 0x80, 0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x01, 0x80, 0x01, 0x00, 0xaa, // ................
	0x80, 0x21, 0x00, 0xff, 0xa0, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, // .!..............
	0x80, 0x23, 0x00, 0x00, 0xa1, 0x00, 0x00, 0x55, 0x80, 0x05, 0x00, 0x00, 0x03, 0x00, 0x08, 0x07, // .#.....U........
	0x80, 0x00, 0x00, 0x00, 0x80, 0x19, 0x00, 0xe4, 0xa0, 0xff, 0xff, 0x00, 0x00, 0x00,             // ..............
};
static const uint8_t fs_sun_icon_dx11[777] =
{
	0x46, 0x53, 0x48, 0x03, 0x6f, 0x1e, 0x3e, 0x3c, 0x01, 0x00, 0x0a, 0x75, 0x5f, 0x75, 0x6e, 0x69, // FSH.o.><...u_uni
	0x66, 0x6f, 0x72, 0x6d, 0x73, 0x15, 0x38, 0x30, 0x0a, 0x38, 0x00, 0xe8, 0x02, 0x44, 0x58, 0x42, // forms.80.8...DXB
	0x43, 0x2a, 0x7a, 0x4b, 0x81, 0x49, 0x02, 0xb6, 0x69, 0x0b, 0x18, 0x91, 0xbc, 0xf0, 0xa7, 0x0b, // C*zK.I..i.......
	0x8e, 0x01, 0x00, 0x00, 0x00, 0xe8, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, // .............,..
	0x00, 0x84, 0x00, 0x00, 0x00, 0xb8, 0x00, 0x00, 0x00, 0x49, 0x53, 0x47, 0x4e, 0x50, 0x00, 0x00, // .........ISGNP..
	0x00, 0x02, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .........8......
	0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, // ................
	0x00, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // .D..............
	0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, // .........SV_POSI
	0x54, 0x49, 0x4f, 0x4e, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00, 0xab, 0xab, // TION.TEXCOORD...
	0xab, 0x4f, 0x53, 0x47, 0x4e, 0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, // .OSGN,..........
	0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // . ..............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x54, 0x41, 0x52, 0x47, // .........SV_TARG
	0x45, 0x54, 0x00, 0xab, 0xab, 0x53, 0x48, 0x44, 0x52, 0x28, 0x02, 0x00, 0x00, 0x40, 0x00, 0x00, // ET...SHDR(...@..
	0x00, 0x8a, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x04, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, // .....Y...F. ....
	0x00, 0xc5, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x03, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, // .....Z....`.....
	0x00, 0x58, 0x18, 0x00, 0x04, 0x00, 0x70, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0x55, 0x00, // .X....p......UU.
	0x00, 0x62, 0x10, 0x00, 0x03, 0x32, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, // .b...2.......e..
	0x03, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 0x02, 0x00, 0x00, // .. ......h......
	0x00, 0x00, 0x00, 0x00, 0x08, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x80, 0x20, // .............:. 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xbc, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x80, // ..........@.....
	0xbf, 0x34, 0x00, 0x00, 0x07, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, // .4..............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x33, 0x00, 0x00, // ......@......3..
	0x07, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0xa0, 0x40, 0x45, 0x00, 0x00, 0x09, 0xf2, 0x00, 0x10, // ..@.....@E......
	0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x7e, 0x10, // .....F.......F~.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, // ......`......8..
	0x07, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x1a, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x07, 0x22, 0x00, 0x10, // .........8..."..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, // ..............@.
	0x00, 0xcd, 0xcc, 0x4c, 0x3e, 0x32, 0x00, 0x00, 0x09, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, // ...L>2..........
	0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0xcd, 0xcc, 0x4c, // ..........@....L
	0x3e, 0x01, 0x40, 0x00, 0x00, 0xcd, 0xcc, 0xcc, 0xbd, 0x36, 0x20, 0x00, 0x06, 0x42, 0x00, 0x10, // >.@......6 ..B..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x80, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbc, 0x00, 0x00, // .....:. ........
	0x00, 0x32, 0x00, 0x00, 0x09, 0x22, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, // .2..."..........
	0x00, 0x01, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x10, // .....*..........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x07, 0x42, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, // .....8...B......
	0x00, 0x2a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, // .*..............
	0x00, 0x34, 0x00, 0x00, 0x07, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, // .4..............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, // .....*........ .
	0x07, 0x82, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, // .. ......*......
	0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x08, 0x12, 0x00, 0x10, // .........8......
	0x00, 0x00, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3a, 0x80, 0x20, // .....*.......:. 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xc4, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0x12, 0x00, 0x10, // .........2......
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x80, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .........A......
	0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x1a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, // ..@.....A.......
	0x00, 0x38, 0x00, 0x00, 0x08, 0x72, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x10, // .8...r .........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x82, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbc, 0x00, 0x00, // .....F. ........
	0x00, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x00, 0xb0, 0x0d,                                           // .>.......
};
