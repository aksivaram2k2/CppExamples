//All C++ Functions should be prototyped Arguments declared
//Functions with same name should have same purposes
//Overusing overloaded function will make program unreadable
#include<iostream.h>
void main()
{
	int i = -25, j;
	long l = -100000L, m;
	double d = -12.34, e;
	int abs(int);
	long abs(long);
	double abd(double);
	j = abs(i);
	m = abs(l);
	e = abs(d);
	cout<<endl<<j<<endl<<m<<endl<<e;
}
int abs(int ii)
{
	return (ii>0? ii:ii*-1);
}
long abs(long ii)
{
	return (ii>0?ii:ii*-1);
}
double abs(double ii)
{
	return (ii>0?ii:ii*-1);
}