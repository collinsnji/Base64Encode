#ifndef BASECONVERTER_HPP
#define BASECONVERTER_HPP

#include <string>
#include <cstdlib>
#include <sstream>
#include <algorithm>

using namespace std;
// fn proto
string _reverse(string &str);
int integer(char &ch);

class BaseConvert {
	public:
		string to_binary(string sentence);
		string binary(int decimal);
};

string BaseConvert::to_binary(string sentence){
	string bin_64 = "";
	for(char& c: sentence){
		bin_64 += binary(integer(c));
	}
	return bin_64;
}

string BaseConvert::binary(int decimal){
    string bin = "";
    while(decimal != 0){
        if(decimal % 2 == 1){
            decimal -= 1;
            bin += "1";
        } else { bin += "0"; }
        decimal /= 2;
    }
    return "0" + _reverse(bin);
}

// helper functions
int integer(char &ch){ return (int)ch; }
string _reverse(string &str){
	int n = str.length();
	for (int i = 0; i < n / 2; i++){
		swap(str[i], str[n - i - 1]);
	}
	return str;
}


#endif // BASECONVERTER_HPP

