#include<iostream.h>
#include<conio.h>
//Default Arguments provided only to function prototype
void box(int sr=1, int sf=1, int er = 24, int ec = 80);
void main()
{
	clrscr();
	box(10,20,30,70);
	box(10,20,33);
	box(5,1);
	box(1);
	box();
	getch();
}
void box(int se, int sm, int fm, int ft)
{
   cout<<se<<endl<<sm<<endl<<fm<<endl<<ft<<endl;
}