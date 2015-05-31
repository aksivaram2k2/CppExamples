#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int x = 5;
	int *p;
	p = &x;
	cout<<x<<endl;
	cout<<*p<<endl;
	*p = 10;
	cout<<x<<endl;
	cout<<*p<<endl;
	int **q;
	q = &p;
	**q = 50;
	cout<<x<<endl;
	cout<<*p<<endl;
	cout<<**q<<endl;
	getch();

}