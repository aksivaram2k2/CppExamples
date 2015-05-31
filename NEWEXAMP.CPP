//new operator allocates memory for the item and assigns ipaddress
//delete operator - free memory owned by object
//new and delete create and destroy objects
//malloc and dealloc merely allocate and deallocate memory
#include<iostream.h>
int *p1;
struct employee
{
	char name[20];
	int age;
	float sal;
} *p2;
void main()
{
	p1 = new int; //allocates 2 bytes
	p2 = new employee; //allocates 26 bytes

	int *p3;
	p3 = new int[30]; //allocates memory for storing 30 integers

	//some functionality

	delete p1;
	delete p2;
	delete [] p3;
}