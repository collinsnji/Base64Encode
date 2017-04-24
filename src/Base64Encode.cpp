#include "../include/Base64Encode.h"
#include "../include/BaseEncode.h"
#include <iostream>

using namespace std;

int main(){	
	Base64Encode Q;
	Encode S;
	Encode R;

	int N = Q.Convert_Ascii('A');
	string T = Q.Convert_Bin(N);
	string V = S.BYTE_Split(T);
	cout << R.Binary_convert(V) << endl;

	// cout << "Initiating splinter sequence..." << endl;
	return 0;
}
