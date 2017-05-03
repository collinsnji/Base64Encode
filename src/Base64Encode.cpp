// #include "../include/Base64Encode.h"
#include "../include/BaseConverter.h"
#include "../include/Encoder.h"
#include <iostream>

using namespace std;

int main(){
	BaseConvert Q;
	cout << Encode(Q.to_binary("Test")) << endl;
	return EXIT_SUCCESS;
}
