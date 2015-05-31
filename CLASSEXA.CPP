//Body of class contains private, public
//Keyword private - accessed within class not from outside
//Function defined within class is called member function
//Data within class is private and functions are public
//This is to avoid accidental manipulation
//Constructor setup values while deifining objects without seperate call
//No return Type used for constructor
#include<iostream.h>
#include<conio.h>
class example
{
	private:
		int data;
	public:
		example()
		{
			cout<<endl<<"Inside the constructor";
		}
		~example() //destructor with tilde
		{
			cout<<endl<<"Inside the destructor";
		}
};
void main()
{
	clrscr();
	example e;
	getch();
}
