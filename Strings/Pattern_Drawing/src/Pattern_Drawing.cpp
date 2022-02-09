//============================================================================
// Name        : Pattern_Drawing.cpp
// Author      : osama hamdy
// Description : explain the functionality of strings to print the pattern
//============================================================================

#include <iostream>
using namespace std;
#define line_numbers 10
int main() {

	string str="";

	for(int i=0;i<line_numbers;i++)
	{
		str+="*";
		cout<<str<<endl;
	}


	return 0;
}
