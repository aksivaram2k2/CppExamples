//Inline Functions would be inserted instead of jump to function
//Eliminates Function Calling Overhead
#include<iostream.h>
#include<conio.h>
#define SQUARE(x) x*x;
inline float square(float y)
{
	return y*y;
}
void main()
{
	clrscr();
	float a = 5, b = 5, c, d;
	c = square(++a);
	d = square(++b);
	cout<<endl<<c<<endl<<d;
	getch();
}
//macro will get expanded to ++x*++x