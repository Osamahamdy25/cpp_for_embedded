//============================================================================
// Name        : Name_space.cpp
// Author      : Osama Hamdy
// Description : Explaine the usage of NameSpace in c++
//============================================================================

#include <iostream>
using namespace std;

namespace Uart
{
void write()
{
	cout<<"Write Uart " <<endl;
}
}
namespace Can
{
void write(int x)
{
	cout<<"Write Can" <<x<<endl;
}
}
using namespace Uart;
using namespace Can;
int main ()
{

	Can::write(5);
	Uart::write();

}
