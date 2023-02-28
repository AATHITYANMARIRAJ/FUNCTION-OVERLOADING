/*4.	Write a program that demonstrates function overloading by defining two functions with the same name but different return types.*/
#include <iostream>
using namespace std;

int f1(int a){
	return a;
}

char f1(char ch){
	return ch;
}

int main(){
	int a=f1(1);
	cout<<a;
	char b=f1('c');
	cout<<b;
	return 0;
	
}
