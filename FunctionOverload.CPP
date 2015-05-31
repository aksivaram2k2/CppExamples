#include<iostream.h>
int sum(int x, int y)
{
	cout<<x+y;
}
int sum(int x, int y, int z)
{
	cout<<x+y+z;
}
double sum(double x, double y)
{
	cout<<x+y;
}
int main()
{
	sum(10,20);
	sum(10,20,30);
	sum(10.5,11.5);
}