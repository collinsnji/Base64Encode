#ifndef ENCODER_H
#define ENCODER_H

#include <map>
#include <exception>
#include <cmath>

// Base64 char map
std::map<const int, std::string> BASE64_CHAR_MAP
{	
{00, "A"}, {01, "B"}, {02, "C"}, {03, "D"}, {04, "E"}, {05, "F"}, {06, "G"}, 
{07, "H"}, {08, "I"}, {09, "J"}, {10, "K"}, {11, "L"}, {12, "M"}, {13, "N"}, 
{14, "O"}, {15, "P"}, {16, "Q"}, {17, "R"}, {18, "S"}, {19, "T"}, {20, "U"}, 
{21, "V"}, {22, "W"}, {23, "X"}, {24, "Y"}, {25, "Z"}, {26, "a"}, {27, "b"}, 
{28, "c"}, {29, "d"}, {30, "e"}, {31, "f"}, {32, "g"}, {33, "h"}, {34, "i"}, 
{35, "j"}, {36, "k"}, {37, "l"}, {38, "m"}, {39, "n"}, {40, "o"}, {41, "p"}, 
{42, "q"}, {43, "r"}, {44, "s"}, {45, "t"}, {46, "u"}, {47, "v"}, {48, "w"}, 
{49, "x"}, {50, "y"}, {51, "z"}, {52, "0"}, {53, "1"}, {54, "2"}, {55, "3"},
{56, "4"}, {57, "5"}, {58, "6"}, {59, "7"}, {60, "8"}, {61, "9"}, {62, "+"},
{63, "/"}
};

std::string string_spiltter(std::string &bitstream){
	std::string base64;
	std::vector<char> charbits(bitstream.c_str(), bitstream.c_str() + bitstream.length() + 1);
	for(i = 6; i > 0; i--){
		try {
			base64 += charbits[i] * pow(2, i);
			throw std::exception("String length out of scope. Cannot cut string");
		} catch(exception& e) {
			cerr << e.what() << endl;
		}
	}
}

int decimal(std::string &bin){
	int output, j = 5;
	for(int& i : bin){
		output += pow(stoi(bin.substr(i, 1), j);
		j--;
	}
	return output;
}

#endif // ENCODER_H
