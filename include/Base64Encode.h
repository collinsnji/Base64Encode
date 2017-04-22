#ifndef BASE64ENCODE_H
#define BASE64ENCODE_H

#include <string>
#include "BaseEncode.h"

// encode class
class Base64Encode: public Encode {
	public:
		int Convert_Ascii(char ASCII);
		std::string Convert_Bin(int Convert_Ascii);
};

// @param {char} ASCII character to convert
int Base64Encode::Convert_Ascii(char ASCII) {
	return (int)ASCII;
}
// @param {int} Ascii_Int
std::string Base64Encode::Convert_Bin(int Ascii_Int){
	std::string  BYTE = "";
	while (Ascii_Int != 0){
		if(Ascii_Int % 2 == 1){
			Ascii_Int -= 1;
			BYTE += "1";
		} else { BYTE += "0"; }
		Ascii_Int /= 2;
	}
	return "0" + BYTE;
}

#endif /* BASE64ENCODE_H */
