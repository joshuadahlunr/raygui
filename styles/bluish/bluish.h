//////////////////////////////////////////////////////////////////////////////////
//                                                                              //
// StyleAsCode exporter v1.2 - Style data exported as a values array            //
//                                                                              //
// USAGE: On init call: GuiLoadStyleBluish();                             //
//                                                                              //
// more info and bugs-report:  github.com/raysan5/raygui                        //
// feedback and support:       ray[at]raylibtech.com                            //
//                                                                              //
// Copyright (c) 2020-2022 raylib technologies (@raylibtech)                    //
//                                                                              //
//////////////////////////////////////////////////////////////////////////////////

#define BLUISH_STYLE_PROPS_COUNT  14

// Custom style name: bluish
static const GuiStyleProp bluishStyleProps[BLUISH_STYLE_PROPS_COUNT] = {
    { 0, 0, 0x5ca6a6ff },    // DEFAULT_BORDER_COLOR_NORMAL 
    { 0, 1, 0xb4e8f3ff },    // DEFAULT_BASE_COLOR_NORMAL 
    { 0, 2, 0x447e77ff },    // DEFAULT_TEXT_COLOR_NORMAL 
    { 0, 3, 0x5f8792ff },    // DEFAULT_BORDER_COLOR_FOCUSED 
    { 0, 4, 0xcdeff7ff },    // DEFAULT_BASE_COLOR_FOCUSED 
    { 0, 5, 0x4c6c74ff },    // DEFAULT_TEXT_COLOR_FOCUSED 
    { 0, 6, 0x3b5b5fff },    // DEFAULT_BORDER_COLOR_PRESSED 
    { 0, 7, 0xeaffffff },    // DEFAULT_BASE_COLOR_PRESSED 
    { 0, 8, 0x275057ff },    // DEFAULT_TEXT_COLOR_PRESSED 
    { 0, 9, 0x96aaacff },    // DEFAULT_BORDER_COLOR_DISABLED 
    { 0, 10, 0xc8d7d9ff },    // DEFAULT_BASE_COLOR_DISABLED 
    { 0, 11, 0x8c9c9eff },    // DEFAULT_TEXT_COLOR_DISABLED 
    { 0, 18, 0x84adb7ff },    // DEFAULT_LINE_COLOR 
    { 0, 19, 0xe8eef1ff },    // DEFAULT_BACKGROUND_COLOR 
};

// WARNING: This style uses a custom font:  (size: 10, spacing: 1)

#define BLUISH_COMPRESSED_DATA_SIZE 1423

// Font image pixels data compressed (DEFLATE)
// NOTE: Original pixel data simplified to GRAYSCALE
static unsigned char bluishFontData[BLUISH_COMPRESSED_DATA_SIZE] = { 0xed,
    0xdd, 0xd1, 0x72, 0x9b, 0x3a, 0x10, 0x00, 0x50, 0xc4, 0xff, 0x7f, 0x72, 0x41, 0x77, 0x1a, 0x3b, 0x99, 0xb9, 0x2d, 0x2b,
    0x58, 0x21, 0x08, 0x6d, 0x4f, 0xcf, 0xb4, 0x0f, 0x91, 0x51, 0x24, 0x2d, 0xe0, 0x34, 0x5a, 0x2f, 0x75, 0x02, 0x00, 0xf8,
    0xcd, 0x1c, 0x7c, 0x6d, 0x0e, 0x5f, 0x3d, 0x27, 0x7a, 0x7a, 0x7d, 0x7d, 0x6e, 0xb4, 0xe7, 0x7a, 0x9b, 0x13, 0x3d, 0xb4,
    0x5a, 0xda, 0x6d, 0xbf, 0x2a, 0x6f, 0x23, 0x56, 0x76, 0xfe, 0x5a, 0x8f, 0xed, 0x55, 0xca, 0xbc, 0x7e, 0x4e, 0xcd, 0x62,
    0x5b, 0x0d, 0xbe, 0xb6, 0x6e, 0xce, 0xb7, 0xd6, 0x12, 0xb4, 0xcc, 0xb5, 0x06, 0xe3, 0xa9, 0x1f, 0x47, 0x6d, 0xf7, 0xd8,
    0x3a, 0x6a, 0xeb, 0x7b, 0x2c, 0x1b, 0x7d, 0x2c, 0xe1, 0x59, 0xf1, 0xf3, 0x3b, 0x46, 0x2b, 0xb4, 0x06, 0xf1, 0xac, 0x9b,
    0xaf, 0x7d, 0x29, 0x87, 0x5e, 0xdd, 0xfa, 0x0e, 0xb5, 0x2e, 0x75, 0x79, 0xaf, 0xc7, 0xaf, 0xb3, 0xa8, 0xa9, 0xd7, 0xc7,
    0x2d, 0xe7, 0xe3, 0xbf, 0x7e, 0x8c, 0xa7, 0x6c, 0x5c, 0x07, 0x3f, 0xa3, 0xb5, 0x06, 0xf1, 0x8a, 0xc6, 0xf3, 0x5a, 0xb9,
    0xb2, 0xd9, 0x63, 0xeb, 0xa8, 0xe9, 0xf0, 0x6a, 0x6f, 0x1f, 0xff, 0x1a, 0xe9, 0xf6, 0x3c, 0xca, 0x47, 0xdb, 0xd6, 0xda,
    0x2d, 0x83, 0xee, 0xab, 0xd1, 0x7c, 0xa7, 0xe6, 0xb5, 0xb5, 0xbd, 0x0a, 0x6b, 0xaa, 0xe5, 0x7c, 0xfc, 0xe3, 0x33, 0xba,
    0xbe, 0xff, 0x46, 0x33, 0x5b, 0x82, 0xf1, 0x94, 0xa0, 0xa5, 0x7d, 0xd4, 0x99, 0xf8, 0x97, 0xf7, 0x48, 0xe7, 0xe0, 0x7a,
    0xae, 0xc1, 0x15, 0x7d, 0x65, 0xf4, 0xf3, 0xf1, 0x2f, 0xef, 0x73, 0xb5, 0x04, 0xef, 0x4a, 0xf7, 0xc6, 0xbf, 0xbc, 0xef,
    0xff, 0x73, 0x30, 0xfa, 0x12, 0x46, 0x3f, 0xbe, 0xdb, 0x66, 0xde, 0x57, 0x73, 0xd7, 0xff, 0x6b, 0x9d, 0xa3, 0x73, 0xeb,
    0xba, 0xd8, 0xb7, 0xe7, 0x9b, 0x8b, 0x7f, 0x0d, 0xdf, 0x79, 0x3e, 0xcf, 0xe2, 0xb3, 0xb3, 0x58, 0x07, 0x5d, 0xff, 0x6b,
    0x38, 0x9e, 0xf2, 0xbe, 0xff, 0x6f, 0xcf, 0x39, 0x73, 0x15, 0x66, 0xe2, 0xbf, 0x17, 0xe3, 0x2b, 0xaf, 0xfd, 0xb8, 0xef,
    0x7c, 0xfc, 0x5f, 0x3d, 0x6e, 0x7d, 0x97, 0xab, 0xcf, 0xe2, 0x29, 0xf5, 0xf3, 0x5f, 0x69, 0xfc, 0xcc, 0xf3, 0x79, 0xee,
    0x64, 0xe6, 0x37, 0x2a, 0xce, 0xf7, 0xab, 0xbb, 0x33, 0xc8, 0xc4, 0xbf, 0x84, 0xab, 0x5a, 0x6e, 0x7f, 0xff, 0x6f, 0xc5,
    0xbf, 0x35, 0xd2, 0x56, 0xfc, 0x73, 0xb3, 0xa8, 0xc9, 0x9f, 0xc1, 0x9f, 0x17, 0xff, 0xfa, 0xf5, 0xff, 0xa1, 0x63, 0x73,
    0x8b, 0x5e, 0xdf, 0xea, 0xe9, 0x7b, 0x66, 0xdd, 0x33, 0x9e, 0xa7, 0xcd, 0x82, 0x33, 0x7e, 0x74, 0xc4, 0xf1, 0x87, 0xd8,
    0x03, 0x00, 0x00, 0x00, 0x0c, 0xcb, 0xf2, 0x19, 0x95, 0x61, 0x32, 0xba, 0xe5, 0x5c, 0x56, 0x50, 0x9c, 0x9d, 0xd3, 0xca,
    0x48, 0x6a, 0x8f, 0xf2, 0xae, 0xf5, 0x98, 0x6e, 0xca, 0xf9, 0xa9, 0x1d, 0x19, 0x29, 0x77, 0xb5, 0x2c, 0x87, 0xb3, 0x30,
    0xb6, 0x77, 0x73, 0xe3, 0xec, 0x9c, 0x35, 0x58, 0xab, 0xbd, 0x51, 0xde, 0xb7, 0x1e, 0x73, 0xc7, 0xe8, 0x7a, 0x7e, 0x5b,
    0x5e, 0x77, 0x76, 0xe7, 0x96, 0x54, 0xcb, 0xba, 0xbb, 0xd7, 0x97, 0xcb, 0x7c, 0x39, 0xb7, 0xaf, 0xda, 0xca, 0xce, 0x8b,
    0xf2, 0x3f, 0x5a, 0xa3, 0x8c, 0xf2, 0x2a, 0x6a, 0xf7, 0xac, 0x97, 0xa1, 0xc7, 0x2c, 0x5d, 0xf1, 0x8f, 0x67, 0x15, 0xef,
    0xcd, 0xb7, 0xb3, 0x1e, 0xe3, 0xde, 0x72, 0x2d, 0xc7, 0xb3, 0x0f, 0xa2, 0x18, 0xc7, 0x39, 0x12, 0xd9, 0xdc, 0x99, 0xda,
    0xc8, 0xab, 0xd8, 0x9b, 0xdb, 0x92, 0xda, 0x9b, 0xac, 0x3b, 0x6b, 0x78, 0x3e, 0x5b, 0xe6, 0x58, 0x76, 0xc6, 0xda, 0x98,
    0x6f, 0x3b, 0xc3, 0x64, 0x4d, 0x1d, 0xb3, 0x0e, 0xc8, 0x57, 0xc9, 0x9e, 0x3d, 0xad, 0x3c, 0x9c, 0xb5, 0x11, 0xff, 0x39,
    0x39, 0xb7, 0x57, 0xcb, 0x9c, 0xda, 0x0b, 0xae, 0x3b, 0x6b, 0x78, 0x3e, 0x5b, 0xe6, 0xd8, 0xfa, 0x95, 0xee, 0x3b, 0xf6,
    0xa8, 0x63, 0xae, 0x3b, 0x03, 0x6a, 0xba, 0x9f, 0xfa, 0x75, 0xa6, 0x8e, 0xbc, 0xff, 0x97, 0x8e, 0x77, 0xe4, 0x72, 0x3a,
    0x57, 0xe3, 0xf8, 0x1d, 0xbb, 0x2f, 0xc3, 0x64, 0xd4, 0x31, 0xcf, 0xca, 0xdd, 0x28, 0x9d, 0x77, 0xec, 0x7b, 0x5a, 0xae,
    0x88, 0x7f, 0x6f, 0x86, 0xc9, 0x3a, 0xec, 0x98, 0xe9, 0xf6, 0x9c, 0x9e, 0x1a, 0x5e, 0xff, 0xad, 0xf5, 0x18, 0xb9, 0x86,
    0xad, 0x3c, 0xa0, 0xf6, 0x08, 0xfe, 0x05, 0x8b, 0xdf, 0xd9, 0x00, 0x00, 0x00, 0x00, 0x40, 0x22, 0xff, 0xa7, 0x9d, 0x7d,
    0x93, 0xcb, 0x50, 0x69, 0x67, 0xed, 0x64, 0x6b, 0xf4, 0xcc, 0xb7, 0x67, 0xdd, 0x8c, 0x6e, 0xe9, 0x59, 0x8b, 0xbd, 0x96,
    0xdc, 0x91, 0xfb, 0xbf, 0xef, 0x8e, 0x73, 0x4a, 0xa2, 0xdf, 0x6a, 0x2f, 0x1f, 0x47, 0x8d, 0xd9, 0xfd, 0xab, 0xbb, 0x23,
    0x7b, 0xfd, 0x3b, 0x3f, 0x30, 0x3f, 0xa9, 0x95, 0xb9, 0xf4, 0x39, 0xf2, 0x91, 0xbb, 0x85, 0xaf, 0x96, 0x65, 0x73, 0x2d,
    0x7a, 0xf7, 0xd0, 0x7a, 0xf2, 0x50, 0xda, 0xbb, 0x61, 0xe3, 0xe2, 0xdf, 0x3b, 0xe7, 0x7b, 0x5b, 0xb2, 0x75, 0x44, 0x9e,
    0x17, 0xff, 0x56, 0x96, 0xcf, 0xa8, 0xf8, 0x9f, 0xcb, 0x83, 0x19, 0x17, 0xff, 0x9e, 0x1c, 0xae, 0x78, 0xec, 0xad, 0x3c,
    0xa8, 0x3b, 0xe3, 0x1f, 0xd7, 0xd1, 0x3a, 0x12, 0xff, 0x7c, 0x96, 0x4f, 0x3e, 0xfe, 0xe7, 0xf2, 0x60, 0xc6, 0xc5, 0xbf,
    0x27, 0x87, 0x63, 0x6d, 0x54, 0x8b, 0x5a, 0xd3, 0xb5, 0x47, 0xea, 0x4e, 0x8e, 0xe1, 0xd2, 0x11, 0xff, 0x12, 0x8e, 0xf1,
    0x6c, 0xfe, 0x67, 0xe6, 0xfa, 0x2f, 0x97, 0xe5, 0xc1, 0x8c, 0xbd, 0xff, 0x8f, 0x5a, 0x87, 0xb2, 0x93, 0x7d, 0x58, 0x3a,
    0xb2, 0x45, 0xd6, 0xc1, 0x6b, 0x71, 0x2c, 0xdf, 0x61, 0x4c, 0xfc, 0x7b, 0xfa, 0x3a, 0x76, 0x4c, 0x36, 0xfe, 0xa5, 0x23,
    0xfe, 0x23, 0xc7, 0xde, 0x8e, 0x7f, 0x69, 0x64, 0x8b, 0xec, 0x1f, 0x33, 0x3a, 0xfe, 0xbd, 0x59, 0x2d, 0x65, 0x60, 0x5f,
    0x75, 0x70, 0xfc, 0xf3, 0x79, 0x32, 0x63, 0xc7, 0xde, 0x8e, 0x7f, 0xff, 0xe8, 0x5e, 0x7f, 0xe6, 0x0b, 0x72, 0xe8, 0x51,
    0x71, 0x06, 0x00, 0x00, 0x00, 0x00, 0xf5, 0x7f, 0xa6, 0xc6, 0x13, 0xa9, 0xda, 0x59, 0x46, 0xc7, 0xb3, 0x85, 0x3e, 0x33,
    0x28, 0xb6, 0xf3, 0x27, 0xc6, 0x54, 0xfa, 0xd9, 0x7f, 0x76, 0x57, 0xf6, 0xfb, 0x44, 0xab, 0xd5, 0x33, 0xb6, 0xab, 0x9f,
    0x71, 0x76, 0x2c, 0xcb, 0xa7, 0x95, 0xf7, 0x92, 0xfb, 0x0c, 0x6a, 0x54, 0x9b, 0x66, 0x0e, 0x2a, 0xdd, 0x64, 0x3f, 0xbb,
    0xdf, 0xaa, 0x55, 0x11, 0xf7, 0x33, 0xb2, 0x8a, 0x45, 0x0d, 0xcf, 0xd7, 0xda, 0x31, 0xb6, 0x25, 0xf8, 0x6a, 0xd4, 0xc7,
    0xdc, 0xfd, 0x49, 0xe9, 0xfe, 0x5a, 0x0e, 0x47, 0x6b, 0x2a, 0xc5, 0x3b, 0x86, 0xaf, 0xbd, 0xee, 0xec, 0x19, 0xb0, 0x86,
    0xd7, 0xd8, 0xf6, 0x58, 0xe7, 0x30, 0xbf, 0x65, 0x0a, 0x9f, 0x66, 0x96, 0xaf, 0x55, 0x53, 0x83, 0xa7, 0x86, 0xb5, 0xf7,
    0x8f, 0xa2, 0xb1, 0x45, 0x4f, 0x4b, 0x9a, 0x82, 0x3e, 0x96, 0xee, 0xcf, 0x84, 0xd7, 0x9d, 0xe7, 0x48, 0x65, 0x7a, 0x6e,
    0x9d, 0x01, 0xad, 0x27, 0xb9, 0x2d, 0x03, 0x9e, 0x55, 0x92, 0xaf, 0x55, 0xd3, 0xca, 0x3c, 0x68, 0xf7, 0x96, 0xad, 0xcd,
    0x12, 0x9f, 0x33, 0xb9, 0x3b, 0xc3, 0xa8, 0x0a, 0x33, 0xc7, 0xee, 0x9c, 0xa5, 0x31, 0xa3, 0x29, 0x7d, 0x06, 0x5c, 0xfb,
    0x24, 0x8f, 0xeb, 0x32, 0x0f, 0x8e, 0xce, 0x62, 0xf4, 0xce, 0xf2, 0xf1, 0xf8, 0x4f, 0xa7, 0x6a, 0x82, 0x94, 0xee, 0x5c,
    0x99, 0xdc, 0x19, 0x70, 0x75, 0xfc, 0xaf, 0xca, 0x3c, 0x18, 0x55, 0x81, 0x63, 0x7d, 0x68, 0xfc, 0xf7, 0xaa, 0xcd, 0xe4,
    0x63, 0x99, 0xcf, 0x18, 0x9d, 0xbe, 0xe5, 0xce, 0x30, 0xfa, 0x98, 0x29, 0xfd, 0x3f, 0x99, 0x67, 0xc4, 0xbf, 0xaf, 0x42,
    0x4d, 0x49, 0xd7, 0x12, 0xfa, 0xae, 0xf8, 0xe7, 0x9f, 0x23, 0xd5, 0x77, 0xcc, 0xf8, 0xdc, 0xcb, 0x3b, 0xe2, 0xcf, 0x9f,
    0x53, 0xf9, 0x68, 0x91, 0x9f, 0x04, 0x00, 0x00, 0x00, 0x40, 0x52, 0xf9, 0x9f, 0x4c, 0xf6, 0xca, 0xf7, 0xb7, 0xcc, 0x3b,
    0xbb, 0x5a, 0xa5, 0xbb, 0xa5, 0x0c, 0xeb, 0xb3, 0x95, 0x63, 0x74, 0xf6, 0x99, 0x67, 0x9f, 0x7d, 0x97, 0x01, 0x3b, 0xe7,
    0xaf, 0x7f, 0xe7, 0x41, 0x3b, 0xeb, 0xe3, 0x5b, 0xae, 0xff, 0x34, 0xff, 0x15, 0xf5, 0x06, 0x5a, 0x15, 0x22, 0xe6, 0xc3,
    0xb9, 0x15, 0x4b, 0xb8, 0xa7, 0xba, 0x36, 0x6a, 0x06, 0xe4, 0xf7, 0x20, 0xbe, 0xbf, 0xca, 0xce, 0x92, 0x7c, 0x0e, 0xd5,
    0x7c, 0x63, 0x8d, 0x8d, 0x75, 0x27, 0x1f, 0x26, 0x97, 0x43, 0x13, 0xd7, 0x50, 0x98, 0x52, 0xaf, 0x8d, 0x9e, 0x49, 0xf4,
    0x67, 0xc6, 0x7f, 0x4a, 0xe6, 0xf6, 0xad, 0x07, 0xea, 0x65, 0x8c, 0xaa, 0xb1, 0x51, 0x3a, 0x32, 0x7c, 0x4a, 0xe3, 0xf9,
    0x63, 0xb9, 0xf8, 0x47, 0x4f, 0xab, 0x5b, 0x4f, 0x3e, 0xf9, 0xe9, 0x9a, 0x2a, 0x1b, 0xe3, 0x9f, 0x60, 0x33, 0xae, 0x9a,
    0xc7, 0xf8, 0x1a, 0x1b, 0xad, 0x9d, 0xf2, 0x38, 0xaf, 0x32, 0x17, 0xff, 0xab, 0x6a, 0x3b, 0x5c, 0x53, 0x65, 0xa3, 0xb7,
    0x42, 0x48, 0x4f, 0x6e, 0x4f, 0x79, 0x48, 0x8d, 0x8d, 0x6c, 0x85, 0x90, 0xf3, 0xf7, 0xff, 0xe7, 0xee, 0x54, 0xdf, 0x53,
    0x67, 0xa3, 0x27, 0x4f, 0xe7, 0xaa, 0x9d, 0xf9, 0xfc, 0xee, 0x7c, 0x26, 0xb7, 0x52, 0x65, 0x97, 0x51, 0x79, 0x3a, 0x4f,
    0xf2, 0x94, 0x67, 0x9e, 0xf1, 0xa4, 0x73, 0xda, 0x1a, 0xfc, 0xdb, 0x59, 0x5e, 0xd6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x2f,
    0xf0, 0x1f };

// Font characters rectangles data
static const Rectangle bluishFontRecs[95] = {
    { 4, 4, 5 , 10 },
    { 17, 4, 2 , 8 },
    { 27, 4, 4 , 3 },
    { 39, 4, 6 , 8 },
    { 53, 4, 5 , 10 },
    { 66, 4, 6 , 8 },
    { 80, 4, 5 , 10 },
    { 93, 4, 2 , 3 },
    { 103, 4, 3 , 8 },
    { 114, 4, 3 , 8 },
    { 125, 4, 6 , 6 },
    { 139, 4, 6 , 6 },
    { 153, 4, 2 , 3 },
    { 163, 4, 5 , 2 },
    { 176, 4, 2 , 2 },
    { 186, 4, 6 , 8 },
    { 200, 4, 5 , 8 },
    { 213, 4, 3 , 8 },
    { 224, 4, 5 , 8 },
    { 237, 4, 5 , 8 },
    { 4, 22, 5 , 8 },
    { 17, 22, 5 , 8 },
    { 30, 22, 5 , 8 },
    { 43, 22, 5 , 8 },
    { 56, 22, 5 , 8 },
    { 69, 22, 5 , 8 },
    { 82, 22, 2 , 8 },
    { 92, 22, 2 , 9 },
    { 102, 22, 4 , 6 },
    { 114, 22, 5 , 4 },
    { 127, 22, 4 , 6 },
    { 139, 22, 5 , 8 },
    { 152, 22, 6 , 8 },
    { 166, 22, 5 , 8 },
    { 179, 22, 5 , 8 },
    { 192, 22, 5 , 8 },
    { 205, 22, 5 , 8 },
    { 218, 22, 5 , 8 },
    { 231, 22, 5 , 8 },
    { 4, 40, 5 , 8 },
    { 17, 40, 5 , 8 },
    { 30, 40, 4 , 8 },
    { 42, 40, 5 , 8 },
    { 55, 40, 5 , 8 },
    { 68, 40, 5 , 8 },
    { 81, 40, 8 , 8 },
    { 97, 40, 5 , 8 },
    { 110, 40, 5 , 8 },
    { 123, 40, 5 , 8 },
    { 136, 40, 5 , 9 },
    { 149, 40, 5 , 8 },
    { 162, 40, 5 , 8 },
    { 175, 40, 6 , 8 },
    { 189, 40, 5 , 8 },
    { 202, 40, 5 , 8 },
    { 215, 40, 8 , 8 },
    { 231, 40, 5 , 8 },
    { 4, 58, 5 , 8 },
    { 17, 58, 5 , 8 },
    { 30, 58, 3 , 8 },
    { 41, 58, 6 , 8 },
    { 55, 58, 3 , 8 },
    { 66, 58, 6 , 4 },
    { 80, 58, 5 , 1 },
    { 93, 58, 2 , 3 },
    { 103, 58, 5 , 6 },
    { 116, 58, 5 , 8 },
    { 129, 58, 5 , 6 },
    { 142, 58, 5 , 8 },
    { 155, 58, 5 , 6 },
    { 168, 58, 5 , 8 },
    { 181, 58, 5 , 7 },
    { 194, 58, 5 , 8 },
    { 207, 58, 2 , 8 },
    { 217, 58, 3 , 9 },
    { 228, 58, 5 , 8 },
    { 241, 58, 2 , 8 },
    { 4, 76, 8 , 6 },
    { 20, 76, 5 , 6 },
    { 33, 76, 5 , 6 },
    { 46, 76, 5 , 7 },
    { 59, 76, 5 , 7 },
    { 72, 76, 5 , 6 },
    { 85, 76, 5 , 6 },
    { 98, 76, 5 , 8 },
    { 111, 76, 5 , 6 },
    { 124, 76, 5 , 6 },
    { 137, 76, 8 , 6 },
    { 153, 76, 5 , 6 },
    { 166, 76, 5 , 7 },
    { 179, 76, 5 , 6 },
    { 192, 76, 4 , 8 },
    { 204, 76, 2 , 10 },
    { 214, 76, 4 , 8 },
    { 226, 76, 6 , 4 },
};

// Font characters info data
// NOTE: No chars.image data provided
static const GlyphInfo bluishFontChars[95] = {
    { 32, 0, 9, 5, { 0 }},
    { 33, 0, 1, 2, { 0 }},
    { 34, 0, 1, 4, { 0 }},
    { 35, 0, 1, 6, { 0 }},
    { 36, 0, 0, 5, { 0 }},
    { 37, 0, 1, 6, { 0 }},
    { 38, 0, 0, 5, { 0 }},
    { 39, 0, 1, 2, { 0 }},
    { 40, 0, 1, 3, { 0 }},
    { 41, 0, 1, 3, { 0 }},
    { 42, 0, 1, 6, { 0 }},
    { 43, 0, 2, 6, { 0 }},
    { 44, 0, 7, 2, { 0 }},
    { 45, 0, 4, 5, { 0 }},
    { 46, 0, 7, 2, { 0 }},
    { 47, 0, 1, 6, { 0 }},
    { 48, 0, 1, 5, { 0 }},
    { 49, 0, 1, 3, { 0 }},
    { 50, 0, 1, 5, { 0 }},
    { 51, 0, 1, 5, { 0 }},
    { 52, 0, 1, 5, { 0 }},
    { 53, 0, 1, 5, { 0 }},
    { 54, 0, 1, 5, { 0 }},
    { 55, 0, 1, 5, { 0 }},
    { 56, 0, 1, 5, { 0 }},
    { 57, 0, 1, 5, { 0 }},
    { 58, 0, 1, 2, { 0 }},
    { 59, 0, 1, 2, { 0 }},
    { 60, 0, 2, 4, { 0 }},
    { 61, 0, 3, 5, { 0 }},
    { 62, 0, 2, 4, { 0 }},
    { 63, 0, 1, 5, { 0 }},
    { 64, 0, 1, 6, { 0 }},
    { 65, 0, 1, 5, { 0 }},
    { 66, 0, 1, 5, { 0 }},
    { 67, 0, 1, 5, { 0 }},
    { 68, 0, 1, 5, { 0 }},
    { 69, 0, 1, 5, { 0 }},
    { 70, 0, 1, 5, { 0 }},
    { 71, 0, 1, 5, { 0 }},
    { 72, 0, 1, 5, { 0 }},
    { 73, 0, 1, 4, { 0 }},
    { 74, 0, 1, 5, { 0 }},
    { 75, 0, 1, 5, { 0 }},
    { 76, 0, 1, 5, { 0 }},
    { 77, 0, 1, 8, { 0 }},
    { 78, 0, 1, 5, { 0 }},
    { 79, 0, 1, 5, { 0 }},
    { 80, 0, 1, 5, { 0 }},
    { 81, 0, 1, 5, { 0 }},
    { 82, 0, 1, 5, { 0 }},
    { 83, 0, 1, 5, { 0 }},
    { 84, 0, 1, 6, { 0 }},
    { 85, 0, 1, 5, { 0 }},
    { 86, 0, 1, 5, { 0 }},
    { 87, 0, 1, 8, { 0 }},
    { 88, 0, 1, 5, { 0 }},
    { 89, 0, 1, 5, { 0 }},
    { 90, 0, 1, 5, { 0 }},
    { 91, 0, 1, 3, { 0 }},
    { 92, 0, 1, 6, { 0 }},
    { 93, 0, 1, 3, { 0 }},
    { 94, 0, 1, 6, { 0 }},
    { 95, 0, 9, 5, { 0 }},
    { 96, 0, 1, 2, { 0 }},
    { 97, 0, 3, 5, { 0 }},
    { 98, 0, 1, 5, { 0 }},
    { 99, 0, 3, 5, { 0 }},
    { 100, 0, 1, 5, { 0 }},
    { 101, 0, 3, 5, { 0 }},
    { 102, 0, 1, 5, { 0 }},
    { 103, 0, 3, 5, { 0 }},
    { 104, 0, 1, 5, { 0 }},
    { 105, 0, 1, 2, { 0 }},
    { 106, 0, 1, 3, { 0 }},
    { 107, 0, 1, 5, { 0 }},
    { 108, 0, 1, 2, { 0 }},
    { 109, 0, 3, 8, { 0 }},
    { 110, 0, 3, 5, { 0 }},
    { 111, 0, 3, 5, { 0 }},
    { 112, 0, 3, 5, { 0 }},
    { 113, 0, 3, 5, { 0 }},
    { 114, 0, 3, 5, { 0 }},
    { 115, 0, 3, 5, { 0 }},
    { 116, 0, 1, 5, { 0 }},
    { 117, 0, 3, 5, { 0 }},
    { 118, 0, 3, 5, { 0 }},
    { 119, 0, 3, 8, { 0 }},
    { 120, 0, 3, 5, { 0 }},
    { 121, 0, 3, 5, { 0 }},
    { 122, 0, 3, 5, { 0 }},
    { 123, 0, 1, 4, { 0 }},
    { 124, 0, 0, 2, { 0 }},
    { 125, 0, 1, 4, { 0 }},
    { 126, 0, 3, 6, { 0 }},
};

// Style loading function: bluish
static void GuiLoadStyleBluish(void)
{
    // Load style properties provided
    // NOTE: Default properties are propagated
    for (int i = 0; i < BLUISH_STYLE_PROPS_COUNT; i++)
    {
        GuiSetStyle(bluishStyleProps[i].controlId, bluishStyleProps[i].propertyId, bluishStyleProps[i].propertyValue);
    }

    // Custom font loading
    // NOTE: Compressed font image data (DEFLATE), it requires DecompressData() function
    int bluishFontDataSize = 0;
    unsigned char *data = DecompressData(bluishFontData, BLUISH_COMPRESSED_DATA_SIZE, &bluishFontDataSize);
    Image imFont = { data, 256, 256, 1, 2 };

    Font font = { 0 };
    font.baseSize = 10;
    font.glyphCount = 95;

    // Load texture from image
    font.texture = LoadTextureFromImage(imFont);

    // Copy char recs data from global fontRecs
    // NOTE: Required to avoid issues if trying to free font
    font.recs = (Rectangle *)malloc(font.glyphCount*sizeof(Rectangle));
    memcpy(font.recs, bluishFontRecs, font.glyphCount*sizeof(Rectangle));

    // Copy font char info data from global fontChars
    // NOTE: Required to avoid issues if trying to free font
    font.glyphs = (GlyphInfo *)malloc(font.glyphCount*sizeof(GlyphInfo));
    memcpy(font.glyphs, bluishFontChars, font.glyphCount*sizeof(GlyphInfo));

    GuiSetFont(font);

    // Setup a white rectangle on the font to be used on shapes drawing,
    // this way we make sure all gui can be drawn on a single pass because no texture change is required
    // NOTE: Setting up this rectangle is a manual process (for the moment)
    Rectangle whiteChar = { 66, 5, 2, 2 };
    SetShapesTexture(font.texture, whiteChar);

    //-----------------------------------------------------------------

    // TODO: Custom user style setup: Set specific properties here (if required)
    // i.e. Controls specific BORDER_WIDTH, TEXT_PADDING, TEXT_ALIGNMENT
}
