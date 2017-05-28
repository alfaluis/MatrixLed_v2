/*
 * alpabethic.hpp
 *
 *  Created on: Jan 28, 2017
 *      Author: laab
 */

#ifndef ALPABETHIC8X8_HPP_
#define ALPABETHIC8X8_HPP_

const uint8_t wordSize[2] = {8,8};
const PROGMEM int var1 = 19;

const PROGMEM byte alpabethics[59*8] = {

					   0b00000000,
					   0b00000000,
					   0b00000000,
					   0b00000000,
					   0b00000000,
					   0b00000000,
					   0b00000000,
					   0b00000000,

					   0b00000000, //9
					   0b00000000,
					   0b00000000,
					   0b11011110,
					   0b11011110,
					   0b00000000,
					   0b00000000,
					   0b00000000,

					   0b00000000, //17
					   0b00001000,
					   0b00001110,
					   0b00000110,
					   0b00001000,
					   0b00001110,
					   0b00000110,
					   0b00000000,

					   0b00101000,	//25
					   0b00101000,
					   0b11111110,
					   0b00101000,
					   0b11111110,
					   0b00101000,
					   0b00101000,
					   0b00000000,

					   0b01001000,	//$ (33)
					   0b01011100,
					   0b01010100,
					   0b11111110,
					   0b01010100,
					   0b01110100,
					   0b00100100,
					   0b00000000,

					   0b01000110,
					   0b01100110,
					   0b00110000,
					   0b00011000,
					   0b00001100,
					   0b01100110,
					   0b01100010,
					   0b00000000,

					   0b00000000,	//&
					   0b00000000,
					   0b00000000,
					   0b00000000,
					   0b00000000,
					   0b00000000,
					   0b00000000,
					   0b00000000,

					   0b00000000,	//'
					   0b00000000,
					   0b00001000,
					   0b00001110,
					   0b00000110,
					   0b00000000,
					   0b00000000,
					   0b00000000,

					   0b00000000,
					   0b00000000,
					   0b00000000,
					   0b01111100,
					   0b11111110,
					   0b10000010,
					   0b00000000,
					   0b00000000,

					   0b00000000,
					   0b10000010,
					   0b11111110,
					   0b01111100,
					   0b00000000,
					   0b00000000,
					   0b00000000,
					   0b00000000,

					   0b00000000,
					   0b00101010,
					   0b00011100,
					   0b00111110,
					   0b00011100,
					   0b00101010,
					   0b00000000,
					   0b00000000,

					   0b00000000,
					   0b00010000,
					   0b00010000,
					   0b01111100,
					   0b01111100,
					   0b00010000,
					   0b00010000,
					   0b00000000,

					   0b00000000,	//,
					   0b00000000,
					   0b10000000,
					   0b11100000,
					   0b01100000,
					   0b00000000,
					   0b00000000,
					   0b00000000,

					   0b00000000,	//-
					   0b00010000,
					   0b00010000,
					   0b00010000,
					   0b00010000,
					   0b00010000,
					   0b00000000,
					   0b00000000,

					   0b00000000,	//.
					   0b00000000,
					   0b11000000,
					   0b11000000,
					   0b00000000,
					   0b00000000,
					   0b00000000,
					   0b00000000,

					   0b11000000,	// /
					   0b01100000,
					   0b00110000,
					   0b00011000,
					   0b00001100,
					   0b00000110,
					   0b00000000,
					   0b00000000,

					   0b01111100,	// 0
					   0b11111110,
					   0b10000010,
					   0b10000010,
					   0b10000010,
					   0b11111110,
					   0b01111100,
					   0b00000000,

					   0b00000000,
					   0b00000000,
					   0b00000100,
					   0b11111110,
					   0b11111110,
					   0b00000000,
					   0b00000000,
					   0b00000000,

					   0b11000100,
					   0b11100110,
					   0b10100010,
					   0b10110010,
					   0b10010010,
					   0b10011110,
					   0b10001100,
					   0b00000000,

					   0b01000100,
					   0b11000110,
					   0b10010010,
					   0b10010010,
					   0b10010010,
					   0b11111110,
					   0b01101100,
					   0b00000000,

					   0b00110000,
					   0b00111000,
					   0b00101100,
					   0b00100110,
					   0b11111110,
					   0b11111110,
					   0b00100000,
					   0b00000000,

					   0b01001110,	//5
					   0b11001110,
					   0b10001010,
					   0b10001010,
					   0b10001010,
					   0b11111010,
					   0b01110010,
					   0b00000000,

					   0b01111000,	//6
					   0b11111100,
					   0b10010110,
					   0b10010010,
					   0b10010010,
					   0b11110010,
					   0b01100000,
					   0b00000000,

					   0b00000010,	//7
					   0b00000010,
					   0b11100010,
					   0b11110010,
					   0b00011010,
					   0b00001110,
					   0b00000110,
					   0b00000000,

					   0b01101100,	//8
					   0b11111110,
					   0b10010010,
					   0b10010010,
					   0b10010010,
					   0b11111110,
					   0b01101100,
					   0b00000000,

					   0b00001100,	//9
					   0b10011110,
					   0b10010010,
					   0b10010010,
					   0b11010010,
					   0b01111110,
					   0b00111100,
					   0b00000000,

					   0b00000000,	//:
					   0b00000000,
					   0b01101100,
					   0b01101100,
					   0b00000000,
					   0b00000000,
					   0b00000000,
					   0b00000000,

					   0b00000000,	//;
					   0b10000000,
					   0b11100110,
					   0b01100110,
					   0b00000000,
					   0b00000000,
					   0b00000000,
					   0b00000000,

					   0b00000000,	//<
					   0b00010000,
					   0b00111000,
					   0b01101100,
					   0b11000110,
					   0b10000010,
					   0b00000000,
					   0b00000000,

					   0b00000000,	//=
					   0b00101000,
					   0b00101000,
					   0b00101000,
					   0b00101000,
					   0b00101000,
					   0b00101000,
					   0b00000000,

					   0b00000000,	// >
					   0b10000010,
					   0b11000110,
					   0b01101100,
					   0b00111000,
					   0b00010000,
					   0b00000000,
					   0b00000000,

					   0b00000100,	//?
					   0b00000110,
					   0b10100010,
					   0b10110010,
					   0b00010010,
					   0b00011110,
					   0b00001100,
					   0b00000000,

					   0b01111100,	//@
					   0b11111110,
					   0b10000010,
					   0b10111010,
					   0b10101010,
					   0b00111110,
					   0b00111100,
					   0b00000000,












					   0b11111000,	//A
			  	  	   0b11111100,
					   0b00100110,
					   0b00100110,
					   0b00100110,
					   0b11111100,
					   0b11111000,
					   0b00000000,

					   0b11111110,
					   0b11111110,	//B
					   0b10010010,
					   0b10010010,
					   0b10010010,
					   0b11111110,
					   0b01101100,
					   0b00000000,

					   0b00111000,
					   0b01111100,	// Char C
					   0b11000110,
					   0b10000010,
					   0b10000010,
					   0b11000110,
					   0b01000100,
					   0b00000000,

					   0b11111110,
					   0b11111110,	// Char D
					   0b10000010,
					   0b10000010,
					   0b11000110,
					   0b01111100,
					   0b00111000,
					   0b00000000,

					   0b11111110,	// E
					   0b11111110,
					   0b10010010,
					   0b10010010,
					   0b10010010,
					   0b10000010,
					   0b10000010,
					   0b00000000,

					   0b11111110,	//F
					   0b11111110,
					   0b00010010,
					   0b00010010,
					   0b00010010,
					   0b00000010,
					   0b00000010,
					   0b00000000,

					   0b00111000,	//G
					   0b01111100,
					   0b11000110,
					   0b10000010,
					   0b10100010,
					   0b11100110,
					   0b11100100,
					   0b00000000,

					   0b11111110,	//H
					   0b11111110,
					   0b00010000,
					   0b00010000,
					   0b00010000,
					   0b11111110,
					   0b11111110,
					   0b00000000,

					   0b00000000,	//I
					   0b00000000,
					   0b00000000,
					   0b11111110,
					   0b11111110,
					   0b00000000,
					   0b00000000,
					   0b00000000,

					   0b01100000,	//J
					   0b11100000,
					   0b10000000,
					   0b10000000,
					   0b10000000,
					   0b11111110,
					   0b01111110,
					   0b00000000,

					   0b11111110,	//K
					   0b11111110,
					   0b00010000,
					   0b00111000,
					   0b01101100,
					   0b11000110,
					   0b11000110,
					   0b00000000,

					   0b11111110, //L
					   0b11111110,
					   0b10000000,
					   0b10000000,
					   0b10000000,
					   0b10000000,
					   0b10000000,
					   0b00000000,

					   0b11111110,	//M
					   0b11111110,
					   0b00011100,
					   0b00111000,
					   0b00011100,
					   0b11111110,
					   0b11111110,
					   0b00000000,

					   0b11111110,	//N
					   0b11111110,
					   0b00001100,
					   0b00011000,
					   0b00110000,
					   0b11111110,
					   0b11111110,
					   0b00000000,

					   0b01111100, //O
					   0b11111110,
					   0b10000010,
					   0b10000010,
					   0b10000010,
					   0b11111110,
					   0b01111100,
					   0b00000000,

					   0b11111110,	//P
					   0b11111110,
					   0b00010010,
					   0b00010010,
					   0b00010010,
					   0b00011110,
					   0b00001100,
					   0b00000000,

					   0b00111100,	//Q
					   0b01111110,
					   0b01000010,
					   0b01100010,
					   0b11100010,
					   0b11111110,
					   0b10111100,
					   0b00000000,

					   0b11111110,	//R
					   0b11111110,
					   0b00010010,
					   0b00010010,
					   0b00110010,
					   0b11111110,
					   0b11001100,
					   0b00000000,

					   0b01001100,	//S
					   0b11011110,
					   0b10011010,
					   0b10010010,
					   0b10110010,
					   0b11110110,
					   0b01100100,
					   0b00000000,

					   0b00000110,	//T
					   0b00000110,
					   0b11111110,
					   0b11111110,
					   0b11111110,
					   0b00000110,
					   0b00000110,
					   0b00000000,

					   0b01111110,	//U
					   0b11111110,
					   0b11000000,
					   0b10000000,
					   0b10000000,
					   0b11111110,
					   0b11111110,
					   0b00000000,

					   0b00111110,	//V
					   0b01111110,
					   0b11100000,
					   0b11000000,
					   0b11100000,
					   0b01111110,
					   0b00111110,
					   0b00000000,

					   0b11111110,	//W
					   0b11111110,
					   0b01100000,
					   0b00110000,
					   0b01100000,
					   0b11111110,
					   0b11111110,
					   0b00000000,

					   0b11000110,	//X
					   0b11101110,
					   0b01111100,
					   0b00111000,
					   0b01111100,
					   0b11101110,
					   0b11000110,
					   0b00000000,

					   0b00000000,	//Y
					   0b00001110,
					   0b00011110,
					   0b11110000,
					   0b11110000,
					   0b00011110,
					   0b00001110,
					   0b00000000,

					   0b10000010,	//Z
					   0b11000010,
					   0b11100010,
					   0b10110010,
					   0b10011010,
					   0b10001110,
					   0b10000110,
					   0b00000000,

					   };

const byte space[8] = {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};

/// Predefined RGB colors
enum class Colors: unsigned long {
    AliceBlue=0xF0F8FF,
    Amethyst=0x9966CC,
    AntiqueWhite=0xFAEBD7,
    Aqua=0x00FFFF,
    Aquamarine=0x7FFFD4,
    Azure=0xF0FFFF,
    Beige=0xF5F5DC,
    Bisque=0xFFE4C4,
    Black=0x000000,
    BlanchedAlmond=0xFFEBCD,
    Blue=0x0000FF,
    BlueViolet=0x8A2BE2,
    Brown=0xA52A2A,
    BurlyWood=0xDEB887,
    CadetBlue=0x5F9EA0,
    Chartreuse=0x7FFF00,
    Chocolate=0xD2691E,
    Coral=0xFF7F50,
    CornflowerBlue=0x6495ED,
    Cornsilk=0xFFF8DC,
    Crimson=0xDC143C,
    Cyan=0x00FFFF,
    DarkBlue=0x00008B,
    DarkCyan=0x008B8B,
    DarkGoldenrod=0xB8860B,
    DarkGray=0xA9A9A9,
    DarkGrey=0xA9A9A9,
    DarkGreen=0x006400,
    DarkKhaki=0xBDB76B,
    DarkMagenta=0x8B008B,
    DarkOliveGreen=0x556B2F,
    DarkOrange=0xFF8C00,
    DarkOrchid=0x9932CC,
    DarkRed=0x8B0000,
    DarkSalmon=0xE9967A,
    DarkSeaGreen=0x8FBC8F,
    DarkSlateBlue=0x483D8B,
    DarkSlateGray=0x2F4F4F,
    DarkSlateGrey=0x2F4F4F,
    DarkTurquoise=0x00CED1,
    DarkViolet=0x9400D3,
    DeepPink=0xFF1493,
    DeepSkyBlue=0x00BFFF,
    DimGray=0x696969,
    DimGrey=0x696969,
    DodgerBlue=0x1E90FF,
    FireBrick=0xB22222,
    FloralWhite=0xFFFAF0,
    ForestGreen=0x228B22,
    Fuchsia=0xFF00FF,
    Gainsboro=0xDCDCDC,
    GhostWhite=0xF8F8FF,
    Gold=0xFFD700,
    Goldenrod=0xDAA520,
    Gray=0x808080,
    Grey=0x808080,
    Green=0x008000,
    GreenYellow=0xADFF2F,
    Honeydew=0xF0FFF0,
    HotPink=0xFF69B4,
    IndianRed=0xCD5C5C,
    Indigo=0x4B0082,
    Ivory=0xFFFFF0,
    Khaki=0xF0E68C,
    Lavender=0xE6E6FA,
    LavenderBlush=0xFFF0F5,
    LawnGreen=0x7CFC00,
    LemonChiffon=0xFFFACD,
    LightBlue=0xADD8E6,
    LightCoral=0xF08080,
    LightCyan=0xE0FFFF,
    LightGoldenrodYellow=0xFAFAD2,
    LightGreen=0x90EE90,
    LightGrey=0xD3D3D3,
    LightPink=0xFFB6C1,
    LightSalmon=0xFFA07A,
    LightSeaGreen=0x20B2AA,
    LightSkyBlue=0x87CEFA,
    LightSlateGray=0x778899,
    LightSlateGrey=0x778899,
    LightSteelBlue=0xB0C4DE,
    LightYellow=0xFFFFE0,
    Lime=0x00FF00,
    LimeGreen=0x32CD32,
    Linen=0xFAF0E6,
    Magenta=0xFF00FF,
    Maroon=0x800000,
    MediumAquamarine=0x66CDAA,
    MediumBlue=0x0000CD,
    MediumOrchid=0xBA55D3,
    MediumPurple=0x9370DB,
    MediumSeaGreen=0x3CB371,
    MediumSlateBlue=0x7B68EE,
    MediumSpringGreen=0x00FA9A,
    MediumTurquoise=0x48D1CC,
    MediumVioletRed=0xC71585,
    MidnightBlue=0x191970,
    MintCream=0xF5FFFA,
    MistyRose=0xFFE4E1,
    Moccasin=0xFFE4B5,
    NavajoWhite=0xFFDEAD,
    Navy=0x000080,
    OldLace=0xFDF5E6,
    Olive=0x808000,
    OliveDrab=0x6B8E23,
    Orange=0xFFA500,
    OrangeRed=0xFF4500,
    Orchid=0xDA70D6,
    PaleGoldenrod=0xEEE8AA,
    PaleGreen=0x98FB98,
    PaleTurquoise=0xAFEEEE,
    PaleVioletRed=0xDB7093,
    PapayaWhip=0xFFEFD5,
    PeachPuff=0xFFDAB9,
    Peru=0xCD853F,
    Pink=0xFFC0CB,
    Plaid=0xCC5533,
    Plum=0xDDA0DD,
    PowderBlue=0xB0E0E6,
    Purple=0x800080,
    Red=0xFF0000,
    RosyBrown=0xBC8F8F,
    RoyalBlue=0x4169E1,
    SaddleBrown=0x8B4513,
    Salmon=0xFA8072,
    SandyBrown=0xF4A460,
    SeaGreen=0x2E8B57,
    Seashell=0xFFF5EE,
    Sienna=0xA0522D,
    Silver=0xC0C0C0,
    SkyBlue=0x87CEEB,
    SlateBlue=0x6A5ACD,
    SlateGray=0x708090,
    SlateGrey=0x708090,
    Snow=0xFFFAFA,
    SpringGreen=0x00FF7F,
    SteelBlue=0x4682B4,
    Tan=0xD2B48C,
    Teal=0x008080,
    Thistle=0xD8BFD8,
    Tomato=0xFF6347,
    Turquoise=0x40E0D0,
    Violet=0xEE82EE,
    Wheat=0xF5DEB3,
    White=0xFFFFFF,
    WhiteSmoke=0xF5F5F5,
    Yellow=0xFFFF00,
    YellowGreen=0x9ACD32,
    FairyLightNCC=0xFF9D2A
};

#endif /* ALPABETHIC8X8_HPP_ */
