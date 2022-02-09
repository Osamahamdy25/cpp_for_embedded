//============================================================================
// Name        : concatanation.cpp
// Author      : Osama Hamdy
// Description : Explain the functionality of strings to concatanate two strings
//============================================================================

#include <iostream>
#include<string.h>
using namespace std;

int main() {

	string str="Hello";
	string str2="world";

	string str3=str+str2; // using operator overloading


	cout<<"string is "<<str3<<endl;

	cout<<"size of string is "<<str3.size()<<endl;
	return 0;
}
