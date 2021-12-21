//////////////////////////////////////////////////////////////////////////////////
//                                                                              //
// StyleAsCode exporter v1.2 - Style data exported as a values array            //
//                                                                              //
// USAGE: On init call: GuiLoadStyleLavanda();                                  //
//                                                                              //
// more info and bugs-report:  github.com/raysan5/raygui                        //
// feedback and support:       ray[at]raylibtech.com                            //
//                                                                              //
// Copyright (c) 2020-2022 raylib technologies (@raylibtech)                    //
//                                                                              //
//////////////////////////////////////////////////////////////////////////////////

#define LAVANDA_STYLE_PROPS_COUNT  15

// Custom style name: lavanda
static const GuiStyleProp lavandaStyleProps[LAVANDA_STYLE_PROPS_COUNT] = {
    { 0, 0, 0xab9bd3ff },    // DEFAULT_BORDER_COLOR_NORMAL 
    { 0, 1, 0x3e4350ff },    // DEFAULT_BASE_COLOR_NORMAL 
    { 0, 2, 0xdadaf4ff },    // DEFAULT_TEXT_COLOR_NORMAL 
    { 0, 3, 0xee84a0ff },    // DEFAULT_BORDER_COLOR_FOCUSED 
    { 0, 4, 0xf4b7c7ff },    // DEFAULT_BASE_COLOR_FOCUSED 
    { 0, 5, 0xb7657bff },    // DEFAULT_TEXT_COLOR_FOCUSED 
    { 0, 6, 0xd5c8dbff },    // DEFAULT_BORDER_COLOR_PRESSED 
    { 0, 7, 0x966ec0ff },    // DEFAULT_BASE_COLOR_PRESSED 
    { 0, 8, 0xd7ccf7ff },    // DEFAULT_TEXT_COLOR_PRESSED 
    { 0, 9, 0x8fa2bdff },    // DEFAULT_BORDER_COLOR_DISABLED 
    { 0, 10, 0x6b798dff },    // DEFAULT_BASE_COLOR_DISABLED 
    { 0, 11, 0x8292a9ff },    // DEFAULT_TEXT_COLOR_DISABLED 
    { 0, 16, 0x00000010 },    // DEFAULT_TEXT_SIZE 
    { 0, 18, 0x84adb7ff },    // DEFAULT_LINE_COLOR 
    { 0, 19, 0x5b5b81ff },    // DEFAULT_BACKGROUND_COLOR 
};

// WARNING: This style uses a custom font:  (size: 16, spacing: 1)

#define LAVANDA_COMPRESSED_DATA_SIZE 1317

// Font image pixels data compressed (DEFLATE)
// NOTE: Original pixel data simplified to GRAYSCALE
static unsigned char lavandaFontData[LAVANDA_COMPRESSED_DATA_SIZE] = { 0xed,
    0xdd, 0x4b, 0x96, 0xa3, 0x48, 0x0c, 0x05, 0x50, 0xf6, 0xbf, 0xe9, 0xd7, 0xa3, 0x3a, 0xdd, 0x7d, 0xaa, 0x0c, 0x21, 0x85,
    0xc0, 0x76, 0xd6, 0xcd, 0x3b, 0x4b, 0xff, 0x00, 0x11, 0x80, 0xcd, 0x13, 0xe4, 0x00, 0x00, 0xf8, 0x4d, 0xfe, 0xf8, 0x9f,
    0x9c, 0x3c, 0x37, 0xcb, 0xef, 0xf4, 0xeb, 0xff, 0xb9, 0x78, 0xc6, 0xff, 0x9f, 0xb5, 0xf6, 0xbe, 0x59, 0xfe, 0xfc, 0xce,
    0x23, 0xf9, 0xe3, 0xf4, 0x65, 0xe3, 0xf5, 0xaf, 0xde, 0xa1, 0xfe, 0xfc, 0x7f, 0xff, 0xbe, 0xa1, 0xfe, 0x59, 0x78, 0xe5,
    0xf9, 0xe3, 0xd9, 0x58, 0x27, 0xae, 0x96, 0x56, 0xca, 0x6b, 0xcc, 0xce, 0x52, 0x3d, 0x9b, 0xc6, 0xca, 0xf3, 0x27, 0xa6,
    0xb0, 0x5e, 0xff, 0x9c, 0x2e, 0xcb, 0xd7, 0xff, 0x3f, 0x5f, 0xa7, 0xee, 0xae, 0x7f, 0x67, 0x1c, 0xe5, 0xa6, 0xa5, 0x5a,
    0x1d, 0x6f, 0xd5, 0x39, 0x9d, 0x99, 0xd2, 0x4e, 0x95, 0x56, 0xd6, 0xee, 0x5c, 0xbc, 0x77, 0x06, 0xa6, 0xf9, 0xd5, 0xb4,
    0xdd, 0x3d, 0x8a, 0xd6, 0xd7, 0xd8, 0x8c, 0xcc, 0x51, 0x6e, 0x1c, 0xff, 0x53, 0x63, 0xf4, 0xcf, 0xaf, 0xbe, 0xda, 0x4b,
    0x64, 0xbc, 0xfe, 0x53, 0x6b, 0xff, 0x3b, 0xea, 0x9f, 0xdb, 0xa7, 0x3d, 0xcb, 0xcf, 0xbb, 0xda, 0x93, 0xe6, 0x72, 0x6a,
    0x73, 0x79, 0xe4, 0x96, 0x1b, 0xc6, 0xff, 0x27, 0x1c, 0x53, 0x7f, 0x7f, 0xfd, 0x8f, 0xc5, 0xad, 0xf8, 0xd1, 0x38, 0x0a,
    0xfc, 0x59, 0xf5, 0x3f, 0xaf, 0x70, 0xc6, 0xf6, 0xf2, 0x79, 0xcb, 0x7c, 0x75, 0xe6, 0xee, 0xbf, 0x8f, 0xa7, 0xf1, 0xea,
    0xbf, 0xb3, 0xfe, 0xd9, 0x18, 0x87, 0xcf, 0xef, 0x01, 0xf7, 0x8e, 0x49, 0x7e, 0xbd, 0x3a, 0x0f, 0xef, 0xff, 0x9f, 0xab,
    0x7f, 0xf5, 0xfb, 0xff, 0xd5, 0x77, 0xad, 0x6f, 0xf8, 0x25, 0xe9, 0x5d, 0x63, 0xec, 0x6f, 0x59, 0x0a, 0xea, 0xaf, 0xfe,
    0xd6, 0xb6, 0xcf, 0x3f, 0xf6, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb8, 0xeb, 0xcc, 0x44, 0x4e, 0x93, 0x5d, 0xd5, 0x44,
    0x6d, 0x8a, 0xd9, 0xc4, 0x5c, 0xa4, 0x3f, 0x76, 0x72, 0xf9, 0xb5, 0x6e, 0x80, 0xb4, 0xce, 0xd1, 0x1f, 0x5b, 0xe9, 0xb7,
    0xb4, 0xa6, 0x64, 0x32, 0xff, 0x9f, 0x91, 0xec, 0x69, 0x37, 0xe5, 0x96, 0xed, 0xf3, 0x63, 0xd5, 0x39, 0x4e, 0x23, 0xa9,
    0x7c, 0xbd, 0xf6, 0xf5, 0x3b, 0x23, 0x32, 0x94, 0xa8, 0x4d, 0xfb, 0xbc, 0x64, 0x46, 0x13, 0x86, 0x69, 0x7d, 0x4e, 0x6e,
    0x49, 0xd5, 0x64, 0x28, 0x87, 0xdf, 0x9b, 0xb7, 0xee, 0x5a, 0x95, 0xc6, 0x16, 0x70, 0xbe, 0xfe, 0x95, 0xed, 0x72, 0x7f,
    0xfa, 0x52, 0x3a, 0x6f, 0x9f, 0xdb, 0xc6, 0xff, 0xf5, 0x68, 0x4c, 0xb3, 0xc7, 0x21, 0xe5, 0x6d, 0x43, 0xca, 0xfd, 0x66,
    0xdd, 0xa4, 0x5d, 0x1a, 0x63, 0x3d, 0xe5, 0x8e, 0xb5, 0xab, 0x31, 0xb2, 0x3e, 0xe5, 0x19, 0x4a, 0x2b, 0x77, 0xfa, 0x44,
    0xd2, 0xe8, 0x24, 0xdb, 0x1d, 0xc9, 0xb9, 0x79, 0xfc, 0x5f, 0x1f, 0x33, 0xcc, 0x6c, 0x9d, 0x32, 0x32, 0xf5, 0x79, 0x5b,
    0x7a, 0x2c, 0xcd, 0x3d, 0xd8, 0x6e, 0x25, 0xf3, 0x48, 0xc6, 0x35, 0x83, 0x1d, 0x8b, 0xc7, 0x56, 0x0e, 0xfc, 0x73, 0x13,
    0xda, 0xaf, 0xb6, 0xff, 0x59, 0xcc, 0x9e, 0x7d, 0x5b, 0xfd, 0xbb, 0x3d, 0x7d, 0xdf, 0x5c, 0xff, 0x7a, 0x35, 0x56, 0xeb,
    0x5f, 0x3f, 0xe2, 0xc8, 0xc9, 0xde, 0x77, 0x3a, 0xe7, 0x98, 0x72, 0xe7, 0x7d, 0xe7, 0x3b, 0x63, 0x3e, 0xbe, 0xfa, 0xbb,
    0xdd, 0x56, 0x29, 0x1f, 0xdb, 0x9c, 0xf7, 0x46, 0xbf, 0x3e, 0x1a, 0x89, 0x84, 0xe9, 0x47, 0xfc, 0x46, 0x06, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xf0, 0x3d, 0xe7, 0x36, 0x53, 0xce, 0xdc, 0x4e, 0xa6, 0x99, 0xd3, 0xce, 0x22, 0x9f, 0xe7, 0x24,
    0x8f, 0x66, 0x96, 0xbf, 0xfe, 0xba, 0x9c, 0x5e, 0x21, 0x37, 0x23, 0xb9, 0x9e, 0x6c, 0x67, 0x1e, 0xb2, 0x9d, 0xcc, 0xbd,
    0xca, 0xc0, 0x74, 0xea, 0x9f, 0xa5, 0xb4, 0x43, 0x27, 0xa3, 0xd4, 0xc9, 0x29, 0x65, 0xe3, 0xda, 0x9b, 0x69, 0x27, 0xbd,
    0xd6, 0x52, 0x67, 0xb9, 0x31, 0xf9, 0x37, 0x51, 0xff, 0x34, 0xd2, 0xe2, 0x59, 0x4a, 0x5d, 0x77, 0x33, 0x79, 0xdd, 0x2c,
    0x57, 0xef, 0x0a, 0x83, 0xd9, 0x4a, 0xfa, 0x5d, 0x57, 0x20, 0x9b, 0xa3, 0x3f, 0xed, 0x8e, 0x88, 0xb5, 0xbc, 0x78, 0xb7,
    0x5b, 0x20, 0x0b, 0xa9, 0xff, 0x8c, 0x65, 0xf2, 0xf6, 0xb2, 0x7c, 0x79, 0x43, 0xfd, 0xe7, 0xba, 0x67, 0x2a, 0x57, 0x9a,
    0xad, 0xef, 0x2d, 0xf2, 0xe3, 0xeb, 0x7f, 0xd7, 0xf6, 0x7f, 0x25, 0x9f, 0x9b, 0x5b, 0xb2, 0xad, 0x95, 0xf1, 0x9f, 0xa5,
    0x34, 0xeb, 0x6c, 0xfd, 0x8f, 0xa5, 0x24, 0x6c, 0x4e, 0xf3, 0xfc, 0xf5, 0xd7, 0x65, 0x34, 0xdf, 0x9c, 0x66, 0x06, 0xfb,
    0xba, 0x2b, 0xe1, 0xf9, 0xfa, 0x1f, 0x37, 0x74, 0x33, 0x66, 0xe4, 0xe8, 0x68, 0x6e, 0xff, 0x9f, 0x46, 0x15, 0x3f, 0xb9,
    0xfe, 0x53, 0xc7, 0xff, 0x69, 0xcf, 0xc5, 0x5a, 0x0f, 0xec, 0xd9, 0x27, 0xce, 0xf5, 0x5d, 0x75, 0xe7, 0x23, 0x1b, 0x09,
    0xf2, 0x34, 0xfa, 0x03, 0xa6, 0x3a, 0xa7, 0xd7, 0xfa, 0xbf, 0xb3, 0xdc, 0x85, 0x79, 0xf5, 0x3e, 0x29, 0xa7, 0xd9, 0xbb,
    0xf5, 0xef, 0xf5, 0x28, 0xac, 0xce, 0xc7, 0xd1, 0xc8, 0xf9, 0xf7, 0x7e, 0x7f, 0x59, 0x79, 0xcf, 0xdc, 0xdc, 0x0d, 0xf1,
    0x99, 0x57, 0x4f, 0xcf, 0x6d, 0x7d, 0x0f, 0x9f, 0x94, 0xf4, 0x7f, 0x67, 0xfd, 0x3f, 0xb1, 0x03, 0x4b, 0xb7, 0x07, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xcc, 0xe7, 0x7f, 0x5e, 0x27, 0x03, 0x2b, 0xd7, 0xdc, 0xef, 0xdf, 0x5f, 0xa0, 0xf6, 0x19,
    0xd3, 0xe7, 0xe4, 0x6b, 0x29, 0x8a, 0x34, 0xce, 0x69, 0xaf, 0x7e, 0xe6, 0xfe, 0xd9, 0xd2, 0xfd, 0xfc, 0xc9, 0xde, 0x14,
    0x55, 0x93, 0xf6, 0xc7, 0x58, 0xfa, 0xb2, 0x97, 0xc9, 0xa9, 0x65, 0xca, 0x52, 0xba, 0x66, 0x79, 0xde, 0x70, 0xb6, 0xfc,
    0xe7, 0xd4, 0xbf, 0x9a, 0xbe, 0x4a, 0x2b, 0xb1, 0x56, 0xad, 0x73, 0xe5, 0x93, 0x33, 0xb2, 0x5c, 0xab, 0x99, 0xe0, 0x5e,
    0xa6, 0x35, 0x03, 0x15, 0x38, 0x6e, 0xba, 0x23, 0xc8, 0xfa, 0x3e, 0x26, 0xad, 0xed, 0x70, 0x4a, 0x5b, 0xff, 0xea, 0xd6,
    0x62, 0xa2, 0xfe, 0xb9, 0x35, 0xff, 0x77, 0x6f, 0xfd, 0x9f, 0xca, 0xb0, 0xd5, 0xfb, 0x5b, 0xfa, 0x6b, 0xcc, 0xea, 0xf6,
    0x3f, 0x23, 0xe3, 0x3f, 0x83, 0xf9, 0xdf, 0x6c, 0xde, 0x87, 0xe9, 0x1b, 0xeb, 0xbf, 0x73, 0x37, 0x97, 0x7b, 0xb6, 0xdc,
    0xb5, 0x7d, 0x70, 0xc6, 0xf6, 0xff, 0x19, 0x99, 0xdb, 0xe3, 0x8d, 0x57, 0x7e, 0x4f, 0xeb, 0x2e, 0x4b, 0x47, 0xb1, 0x23,
    0xae, 0x36, 0x52, 0xea, 0x77, 0x0b, 0xc9, 0x4d, 0x47, 0x4f, 0xd9, 0xda, 0x43, 0x7f, 0x43, 0xfd, 0x3b, 0x47, 0x06, 0x47,
    0xfb, 0x9b, 0x41, 0xe5, 0x28, 0x79, 0xa6, 0xe3, 0x32, 0x37, 0xd6, 0x3f, 0x23, 0x9d, 0x81, 0x9f, 0x5b, 0xff, 0x27, 0xd6,
    0x9a, 0x99, 0x23, 0xdf, 0xce, 0x77, 0xd1, 0x89, 0x3b, 0xea, 0xa4, 0xf5, 0x6d, 0xf2, 0xb8, 0xed, 0xd7, 0x8a, 0xef, 0xcb,
    0xa3, 0x67, 0xf4, 0x91, 0xf9, 0xe5, 0x97, 0xc7, 0x96, 0xcc, 0xcf, 0xa9, 0xff, 0x33, 0x7d, 0x1d, 0xd3, 0x7b, 0xa2, 0x77,
    0xef, 0x53, 0x33, 0xb2, 0x07, 0x46, 0x97, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x50, 0x3b, 0x5f, 0x97, 0xad, 0x6c, 0x6c,
    0x2f, 0x8f, 0x34, 0x91, 0xcd, 0xe9, 0xa4, 0xbc, 0x8e, 0xf6, 0xd5, 0xf5, 0xbb, 0xb9, 0xc2, 0xf3, 0xf3, 0x63, 0x59, 0x3c,
    0x67, 0x56, 0xcf, 0x3a, 0x55, 0xd3, 0x23, 0xe7, 0x49, 0xd4, 0x94, 0x92, 0xa7, 0xb9, 0xbc, 0xce, 0x7b, 0xe5, 0x1a, 0xbd,
    0x6b, 0xd7, 0x61, 0xad, 0x64, 0xf3, 0x7b, 0x57, 0xd7, 0x4f, 0x2b, 0x25, 0x38, 0x99, 0x13, 0xdc, 0xc9, 0x7d, 0x5c, 0xad,
    0x5f, 0xb9, 0xe8, 0x5c, 0xc8, 0x48, 0xaa, 0xfd, 0x3a, 0x4f, 0x5d, 0xef, 0x0e, 0x9a, 0x4c, 0x5b, 0xed, 0xdc, 0x0d, 0x22,
    0x83, 0x3d, 0x0a, 0xf7, 0x65, 0x26, 0x26, 0xb7, 0xff, 0xfb, 0xcb, 0xb9, 0x92, 0x4b, 0xda, 0xdf, 0x52, 0xef, 0xd5, 0xff,
    0xfa, 0xde, 0x25, 0xf7, 0xf5, 0x28, 0x3d, 0x55, 0xff, 0xce, 0x52, 0xbb, 0xbf, 0xfe, 0xb5, 0x94, 0x74, 0x6f, 0x0c, 0x5f,
    0x5f, 0x5d, 0x3b, 0xc3, 0x69, 0xc7, 0x9f, 0x5d, 0xff, 0x6c, 0xec, 0x81, 0xf7, 0x32, 0xf8, 0x57, 0x5d, 0x0c, 0x4f, 0xd6,
    0x7f, 0xae, 0x47, 0x35, 0xb7, 0xf5, 0x0a, 0xf6, 0xeb, 0x7f, 0x14, 0xf7, 0xbf, 0xc7, 0xe2, 0x1d, 0x1c, 0x26, 0xba, 0x86,
    0xfb, 0xdb, 0xe3, 0xd9, 0x63, 0xbc, 0xfa, 0xb4, 0x3f, 0x3d, 0xfe, 0xe7, 0x33, 0xaa, 0x79, 0x2c, 0x83, 0x7a, 0x47, 0xcf,
    0x70, 0xef, 0x1a, 0xf2, 0x53, 0xd3, 0xfe, 0xde, 0xfa, 0x3f, 0x93, 0x50, 0xce, 0x1b, 0xeb, 0x3f, 0xff, 0x59, 0x69, 0xf7,
    0x15, 0xfc, 0xdc, 0xcc, 0x74, 0x3e, 0xa8, 0x6e, 0xdf, 0xb5, 0x8c, 0x64, 0xe6, 0xd5, 0x5f, 0xfd, 0xff, 0xde, 0x3c, 0x7f,
    0xa4, 0xfe, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0xed, 0x1f };

// Font characters rectangles data
static const Rectangle lavandaFontRecs[95] = {
    { 4, 4, 5 , 16 },
    { 17, 4, 1 , 9 },
    { 26, 4, 3 , 3 },
    { 37, 4, 7 , 8 },
    { 52, 4, 5 , 11 },
    { 65, 4, 10 , 8 },
    { 83, 4, 7 , 9 },
    { 98, 4, 1 , 3 },
    { 107, 4, 3 , 12 },
    { 118, 4, 3 , 12 },
    { 129, 4, 5 , 4 },
    { 142, 4, 5 , 5 },
    { 155, 4, 2 , 3 },
    { 165, 4, 3 , 1 },
    { 176, 4, 1 , 1 },
    { 185, 4, 4 , 12 },
    { 197, 4, 5 , 9 },
    { 210, 4, 3 , 9 },
    { 221, 4, 5 , 9 },
    { 234, 4, 5 , 9 },
    { 4, 28, 5 , 9 },
    { 17, 28, 5 , 9 },
    { 30, 28, 5 , 9 },
    { 43, 28, 5 , 9 },
    { 56, 28, 5 , 9 },
    { 69, 28, 5 , 9 },
    { 82, 28, 1 , 4 },
    { 91, 28, 2 , 6 },
    { 101, 28, 4 , 5 },
    { 113, 28, 4 , 3 },
    { 125, 28, 4 , 5 },
    { 137, 28, 5 , 9 },
    { 150, 28, 7 , 10 },
    { 165, 28, 7 , 9 },
    { 180, 28, 6 , 9 },
    { 194, 28, 5 , 9 },
    { 207, 28, 6 , 9 },
    { 221, 28, 5 , 9 },
    { 234, 28, 5 , 9 },
    { 4, 52, 6 , 9 },
    { 18, 52, 5 , 10 },
    { 31, 52, 1 , 9 },
    { 40, 52, 6 , 9 },
    { 54, 52, 6 , 9 },
    { 68, 52, 5 , 9 },
    { 81, 52, 8 , 11 },
    { 97, 52, 6 , 10 },
    { 111, 52, 7 , 9 },
    { 126, 52, 5 , 9 },
    { 139, 52, 7 , 11 },
    { 154, 52, 5 , 9 },
    { 167, 52, 6 , 9 },
    { 181, 52, 7 , 9 },
    { 196, 52, 6 , 9 },
    { 210, 52, 6 , 10 },
    { 224, 52, 9 , 10 },
    { 4, 76, 6 , 11 },
    { 18, 76, 5 , 10 },
    { 31, 76, 5 , 9 },
    { 44, 76, 3 , 12 },
    { 55, 76, 4 , 12 },
    { 67, 76, 3 , 12 },
    { 78, 76, 5 , 4 },
    { 91, 76, 6 , 1 },
    { 105, 76, 3 , 3 },
    { 116, 76, 6 , 7 },
    { 130, 76, 5 , 9 },
    { 143, 76, 4 , 7 },
    { 155, 76, 5 , 10 },
    { 168, 76, 4 , 7 },
    { 180, 76, 3 , 10 },
    { 191, 76, 4 , 11 },
    { 203, 76, 5 , 11 },
    { 216, 76, 1 , 9 },
    { 225, 76, 5 , 12 },
    { 238, 76, 5 , 9 },
    { 4, 100, 1 , 9 },
    { 13, 100, 8 , 9 },
    { 29, 100, 5 , 9 },
    { 42, 100, 4 , 7 },
    { 54, 100, 5 , 10 },
    { 67, 100, 5 , 10 },
    { 80, 100, 5 , 7 },
    { 93, 100, 5 , 7 },
    { 106, 100, 3 , 9 },
    { 117, 100, 5 , 7 },
    { 130, 100, 5 , 8 },
    { 143, 100, 9 , 8 },
    { 160, 100, 5 , 9 },
    { 173, 100, 6 , 9 },
    { 187, 100, 4 , 7 },
    { 199, 100, 5 , 12 },
    { 212, 100, 1 , 12 },
    { 221, 100, 5 , 12 },
    { 234, 100, 6 , 2 },
};

// Font characters info data
// NOTE: No chars.image data provided
static const GlyphInfo lavandaFontChars[95] = {
    { 32, 0, 12, 5, { 0 }},
    { 33, 0, 3, 2, { 0 }},
    { 34, 0, 3, 4, { 0 }},
    { 35, 0, 3, 8, { 0 }},
    { 36, 0, 2, 6, { 0 }},
    { 37, 0, 4, 11, { 0 }},
    { 38, 0, 3, 8, { 0 }},
    { 39, 0, 3, 2, { 0 }},
    { 40, 0, 2, 4, { 0 }},
    { 41, 0, 2, 4, { 0 }},
    { 42, 0, 3, 6, { 0 }},
    { 43, 0, 5, 6, { 0 }},
    { 44, 0, 10, 3, { 0 }},
    { 45, 0, 7, 4, { 0 }},
    { 46, 0, 11, 2, { 0 }},
    { 47, 0, 2, 5, { 0 }},
    { 48, 0, 3, 6, { 0 }},
    { 49, 0, 3, 4, { 0 }},
    { 50, 0, 3, 6, { 0 }},
    { 51, 0, 3, 6, { 0 }},
    { 52, 0, 3, 6, { 0 }},
    { 53, 0, 3, 6, { 0 }},
    { 54, 0, 3, 6, { 0 }},
    { 55, 0, 3, 6, { 0 }},
    { 56, 0, 3, 6, { 0 }},
    { 57, 0, 3, 6, { 0 }},
    { 58, 0, 7, 2, { 0 }},
    { 59, 0, 7, 3, { 0 }},
    { 60, 0, 5, 5, { 0 }},
    { 61, 0, 6, 5, { 0 }},
    { 62, 0, 5, 5, { 0 }},
    { 63, 0, 3, 6, { 0 }},
    { 64, 0, 4, 8, { 0 }},
    { 65, 0, 3, 8, { 0 }},
    { 66, 0, 3, 7, { 0 }},
    { 67, 0, 3, 6, { 0 }},
    { 68, 0, 3, 7, { 0 }},
    { 69, 0, 3, 6, { 0 }},
    { 70, 0, 3, 6, { 0 }},
    { 71, 0, 3, 7, { 0 }},
    { 72, 0, 2, 6, { 0 }},
    { 73, 0, 3, 2, { 0 }},
    { 74, 0, 3, 7, { 0 }},
    { 75, 0, 3, 7, { 0 }},
    { 76, 0, 3, 6, { 0 }},
    { 77, 0, 3, 9, { 0 }},
    { 78, 0, 2, 7, { 0 }},
    { 79, 0, 3, 8, { 0 }},
    { 80, 0, 3, 6, { 0 }},
    { 81, 0, 3, 8, { 0 }},
    { 82, 0, 3, 6, { 0 }},
    { 83, 0, 3, 7, { 0 }},
    { 84, 0, 3, 8, { 0 }},
    { 85, 0, 3, 7, { 0 }},
    { 86, 0, 2, 7, { 0 }},
    { 87, 0, 2, 10, { 0 }},
    { 88, 0, 3, 7, { 0 }},
    { 89, 0, 3, 6, { 0 }},
    { 90, 0, 3, 6, { 0 }},
    { 91, 0, 2, 4, { 0 }},
    { 92, 0, 2, 5, { 0 }},
    { 93, 0, 2, 4, { 0 }},
    { 94, 0, 3, 6, { 0 }},
    { 95, 0, 13, 7, { 0 }},
    { 96, 0, 3, 4, { 0 }},
    { 97, 0, 5, 7, { 0 }},
    { 98, 0, 3, 6, { 0 }},
    { 99, 0, 5, 5, { 0 }},
    { 100, 0, 2, 6, { 0 }},
    { 101, 0, 5, 5, { 0 }},
    { 102, 0, 2, 4, { 0 }},
    { 103, 0, 4, 5, { 0 }},
    { 104, 0, 3, 6, { 0 }},
    { 105, 0, 3, 2, { 0 }},
    { 106, -1, 3, 5, { 0 }},
    { 107, 0, 3, 6, { 0 }},
    { 108, 0, 3, 2, { 0 }},
    { 109, 0, 5, 9, { 0 }},
    { 110, 0, 5, 6, { 0 }},
    { 111, 0, 5, 5, { 0 }},
    { 112, 0, 5, 6, { 0 }},
    { 113, 0, 5, 6, { 0 }},
    { 114, 0, 5, 6, { 0 }},
    { 115, 0, 5, 6, { 0 }},
    { 116, 0, 3, 4, { 0 }},
    { 117, 0, 5, 6, { 0 }},
    { 118, 0, 4, 6, { 0 }},
    { 119, 0, 4, 10, { 0 }},
    { 120, 0, 5, 6, { 0 }},
    { 121, -1, 5, 6, { 0 }},
    { 122, 0, 5, 5, { 0 }},
    { 123, 0, 2, 6, { 0 }},
    { 124, 0, 2, 2, { 0 }},
    { 125, 0, 2, 6, { 0 }},
    { 126, 0, 7, 7, { 0 }},
};

// Style loading function: lavanda
static void GuiLoadStyleLavanda(void)
{
    // Load style properties provided
    // NOTE: Default properties are propagated
    for (int i = 0; i < LAVANDA_STYLE_PROPS_COUNT; i++)
    {
        GuiSetStyle(lavandaStyleProps[i].controlId, lavandaStyleProps[i].propertyId, lavandaStyleProps[i].propertyValue);
    }

    // Custom font loading
    // NOTE: Compressed font image data (DEFLATE), it requires DecompressData() function
    int lavandaFontDataSize = 0;
    unsigned char *data = DecompressData(lavandaFontData, LAVANDA_COMPRESSED_DATA_SIZE, &lavandaFontDataSize);
    Image imFont = { data, 256, 256, 1, 2 };

    Font font = { 0 };
    font.baseSize = 16;
    font.glyphCount = 95;

    // Load texture from image
    font.texture = LoadTextureFromImage(imFont);

    // Copy char recs data from global fontRecs
    // NOTE: Required to avoid issues if trying to free font
    font.recs = (Rectangle *)malloc(font.glyphCount*sizeof(Rectangle));
    memcpy(font.recs, lavandaFontRecs, font.glyphCount*sizeof(Rectangle));

    // Copy font char info data from global fontChars
    // NOTE: Required to avoid issues if trying to free font
    font.glyphs = (GlyphInfo *)malloc(font.glyphCount*sizeof(GlyphInfo));
    memcpy(font.glyphs, lavandaFontChars, font.glyphCount*sizeof(GlyphInfo));

    GuiSetFont(font);

    // Setup a white rectangle on the font to be used on shapes drawing,
    // this way we make sure all gui can be drawn on a single pass because no texture change is required
    // NOTE: Setting up this rectangle is a manual process (for the moment)
    Rectangle whiteChar = { 130, 5, 2, 2 };
    SetShapesTexture(font.texture, whiteChar);

    //-----------------------------------------------------------------

    // TODO: Custom user style setup: Set specific properties here (if required)
    // i.e. Controls specific BORDER_WIDTH, TEXT_PADDING, TEXT_ALIGNMENT
}
