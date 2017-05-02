// #include "../include/Base64Encode.h"
#include "../include/BaseConverter.h"
#include <iostream>

using namespace std;

int main(){
	BaseConvert Q;
	cout << Q.to_binary("This is a simple test") << endl;
	return 0;
}
