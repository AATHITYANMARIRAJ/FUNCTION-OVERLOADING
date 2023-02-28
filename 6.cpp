/*6.	Write a program that demonstrates function overloading by defining 
two functions with the same name and parameter types, but different default argument values.*/

#include <iostream>
#include <string>
using namespace std;

int f1(int a=1,string b="hi"){
	cout<<"The value of a is "<<a<<"\n";
	cout<<"The value of b is "<<b<<"\n";
	cout<<"integer and string function is executed\n";
	return 0;
}

int f1(int a=1,double b=2.4){
	cout<<"The value of a is "<<a<<"\n";
	cout<<"The value of b is "<<b<<"\n";
	cout<<"integer and double function is executed\n";
	return 0;
}


int main(){
	int a;
	string b;
	f1(1,b);
	
	return 0;
}
