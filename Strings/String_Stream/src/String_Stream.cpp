//============================================================================
// Name        : String_Stream.cpp
// Author      : Osama Hamdy
// Description : Explain the functionality of String Stream in c++
//============================================================================

#include <iostream>
#include<string.h>
#include<sstream>
using namespace std;
string remove_spaces(string str)
{
	stringstream ss(str);
	string temp="";
	str="";
	while(ss>>temp)
	{
		str+=temp;
	}

	return temp;

}
int main() {

	string word;
	stringstream ss;
	int number;
	cin>>word;
	ss<<word;
	ss>>number;
	number*=100;
	cout<<number<<endl;
	return 0;
}
