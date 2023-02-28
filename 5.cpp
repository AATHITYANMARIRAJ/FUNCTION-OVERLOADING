/*5.	Write a program that demonstrates function overloading by defining three functions with the same name but 
different combinations of parameter types and number.*/

#include <iostream>
using namespace std;

int f1(int a,int b){
	cout<<"addition function is called\n";
     return a+b;

}

double f1(double a,double b){
	cout<<"MULTIPLICATION FUNCTION IS CALLED\n";
	return a*b;
}

void f1(){
	cout<<"integer and double func\n";
}
int main(){
   f1();
   f1(1,2);
   f1(1.2,2.4);
   return 0;
}
