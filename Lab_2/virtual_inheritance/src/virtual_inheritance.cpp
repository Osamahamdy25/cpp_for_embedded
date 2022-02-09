//============================================================================
// Name        : virtual_inheritance.cpp
// Author      : osama hamdy
// Description :descripe the use of multi inhertance & virtual function
//============================================================================

#include <iostream>
using namespace std;

class control
{
    public:
    int m_h;
    int m_w;
    int m_id;
    control()
    {
        cout<<"Hello from control constructor "<<endl;
    }
   virtual void draw()
    {

        cout<<"drawing base function  "<<endl;
    }
    void resize()
    {

    }

};
class button :virtual  public control
{
    public:
    int m_allignment;
    button()
    {
         cout<<"Hello from Button constructor "<<endl;
    }
    void draw()
    {
        cout<<"drawing button"<<endl;
    }

};
class image : virtual public control
{
    public:
    int m_allignment;
    image()
    {
         cout<<"Hello from Image Constructor "<<endl;
    }
    void draw()
    {
        cout<<"drawing Image "<<endl;
    }

};
class imagebutton:public button,public image
{
    public:
    int m_contentallignment;
    imagebutton()
    {
        cout<<"Hello from image button cons"<<endl;
    }
    void draw()
    {
        cout<<"drawing imagebutton"<<endl;
    }

};
class father{
	public :
	father()
	{
		cout<<"Father"<<endl;
	}
};
class child :virtual public father
{
public :
	child() : father()
	{
		cout<<"child"<<endl;
	}
};
class grandchild : public child
{
public :
	grandchild() : child(),father()
		{
			cout<<"grandchild"<<endl;
		}

};
int main()
{
	child c;
	grandchild obj_grandchild;
	/*imagebutton obj_imagbutton;
	control *ptr_ctr=&obj_imagbutton;
	ptr_ctr->draw(); */
return 0;
}
