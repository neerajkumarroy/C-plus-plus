#include<stdio.h>
#include<iostream>
using namespace std;
class factorial
{
	public:
	int  fact=1;
	int num;
	int input();
	void fact_function();
	void display();
	
};
 
int factorial::input()
{
	cout<<"Please enter a number: ";
	cin>>num;
}
 
void factorial::fact_function()
{
	for(int i=1;i<=num;i++)
{
fact=fact*i;
}
}
 
void factorial::display()
{
	cout<<"Factorial of entered number is: "<<fact;
}
 
int main()
{
	factorial object;
	
	object.input();
	object.fact_function();
	object.display();
	return 0;
}
