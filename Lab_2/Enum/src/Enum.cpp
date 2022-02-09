//============================================================================
// Name        : Enum.cpp
// Author      : Osama Hamdy
// Description : Examples to explain the functionality of Enums in c++
//============================================================================

#include <iostream>
using namespace std;

 enum class colors :char
{
	red,
	green,
	blue

};

enum class advancedcolors:int
{
	red,
	cayan,
	green,
	blue

};

int main() {

cout<<"size of colors "<<sizeof(colors)<<endl;
cout<<"size of advcolors "<<sizeof(advancedcolors)<<endl;
	return 0;
}
