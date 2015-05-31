#include<iostream.h>
void main()
{
	char *p = "Hello";//pointer is variable so is string
	*p = 'M';
	p = "Bye";

	const char *q = "Hello";//string is fixed, pointer is not
	*q = 'M'; //Error
	q = "Bye"; //Works

	char * const t = "Hello"; //ppinter is fixed, string is not
	*t = "M";  //works
	t = "Bye"; //error


}