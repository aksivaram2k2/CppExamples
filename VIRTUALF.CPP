#include<iostream.h>
class base
{
	public:
		virtual void fun1()
		{
			cout<<endl<<"In base::fun1";
		}
};

class derived:public base
{
	public:
		void fun1()
		{
			cout<<endl<<"In derived::fun1";
		}
		virtual void fun2()
		{
			cout<<endl<<"In derived::fun2";
		}
};
void main()
{
	base *ptr1, *ptr2;
	base b;
	derived d;

	ptr1 = &b;
	ptr2 = &d;
	ptr1->fun1();
	ptr2->fun1();
	//ptr2->fun2(); //Error, as it points to base class
	((derived *) ptr2)->fun2();
}