#ifndef BASE64ENCODER_H
#define BASE64ENCODER_H

#include <map>
#include <vector>
#include <cmath>
#include <sstream>
#include <numeric>

using namespace std;

// Encode class
class Encode {
	public:
		string BYTE_Split(string bit_stream);
		int Binary_convert(string bit_stream);
		void Char_Map();
};

/* [Bit stream spliter]
 * @param {string} byte stream (8 bit binary string)
 * @return six binary string
 */
string Encode::BYTE_Split(string bit_stream){
	return bit_stream.substr(0, 6);
}
int Encode::Binary_convert(string bit_stream){
	int number;
	vector<int> temp, output;
	vector<int>::iterator it;

	stringstream iss( bit_stream );
	while ( iss >> number ){
		temp.push_back( number );
	}
	for(it = temp.begin(); it != temp.end(); it++){
		int _P = *it;
		output.push_back(temp.at(_P) * pow(2, _P));
	}
	auto _out = accumulate( output.begin(), output.end(), 0, []( int l, int r ) {
    	return l * 10 + r; 
	} );
	return _out;
}

// construct character map
void Encode::Char_Map(){
	map<int, char> CHAR_MAP;

	int k; // key val mapper
	for(k = 65; k <= 91; k++){
		CHAR_MAP[k] = (char)k;
	}
}

#endif /* BASE64ENCODER_H */




	/* 
	0 A     17 R     34 i     51 z
	1 B     18 S     35 j     52 0
	2 C     19 T     36 k     53 1
	3 D     20 U     37 l     54 2
	4 E     21 V     38 m     55 3
	5 F     22 W     39 n     56 4
	6 G     23 X     40 o     57 5
	7 H     24 Y     41 p     58 6
	8 I     25 Z     42 q     59 7
	9 J     26 a     43 r     60 8
	10 K    27 b     44 s     61 9
	11 L    28 c     45 t     62 +
	12 M    29 d     46 u     63 /
	13 N    30 e     47 v
	14 O    31 f     48 w
	15 P    32 g     49 x
	16 Q    33 h     50 y
	*/
