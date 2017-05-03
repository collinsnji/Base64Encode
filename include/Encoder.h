#ifndef ENCODER_H
#define ENCODER_H

#include <iostream>
#include <string>
#include <bitset>
#include <map>

std::map<const int, std::string> BASE64_CHAR_MAP {	
	{0, "A"}, {1, "B"}, {2, "C"}, {3, "D"}, {4, "E"}, {5, "F"}, {6, "G"}, 
	{7, "H"}, {8, "I"}, {9, "J"}, {10, "K"}, {11, "L"}, {12, "M"}, {13, "N"}, 
	{14, "O"}, {15, "P"}, {16, "Q"}, {17, "R"}, {18, "S"}, {19, "T"}, {20, "U"}, 
	{21, "V"}, {22, "W"}, {23, "X"}, {24, "Y"}, {25, "Z"}, {26, "a"}, {27, "b"}, 
	{28, "c"}, {29, "d"}, {30, "e"}, {31, "f"}, {32, "g"}, {33, "h"}, {34, "i"}, 
	{35, "j"}, {36, "k"}, {37, "l"}, {38, "m"}, {39, "n"}, {40, "o"}, {41, "p"}, 
	{42, "q"}, {43, "r"}, {44, "s"}, {45, "t"}, {46, "u"}, {47, "v"}, {48, "w"}, 
	{49, "x"}, {50, "y"}, {51, "z"}, {52, "0"}, {53, "1"}, {54, "2"}, {55, "3"},
	{56, "4"}, {57, "5"}, {58, "6"}, {59, "7"}, {60, "8"}, {61, "9"}, {62, "+"},
	{63, "/"}
};

std::string Encode(std::string bitstream){
	std::string Base64;
	int i = 0;
	bool _read = true;
	while(_read){
		Base64 = bitstream.substr(i, 6);
		std::cout << BASE64_CHAR_MAP[bitset<32>(Base64).to_ulong()] << std::endl;
		
		if(i % 6 == 0){
		    i += 6;
		}else { _read = false; }
	}
	return EXIT_SUCCESS;
}

#endif // ENCODER_H
