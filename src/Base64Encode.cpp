#include "../include/Base64Encode.h"
#include "../include/BaseEncode.h"
#include <iostream>

using namespace std;

int main(){	
	Base64Encode Q;
	
	for (char i = 65; i <= 91; i++){
		int N = Q.Convert_Ascii(i);
		string T = Q.Convert_Bin(N);
		cout << T << endl;
		cout << "Initiating splinter sequence..." << endl;
	}
	return 0;
}
