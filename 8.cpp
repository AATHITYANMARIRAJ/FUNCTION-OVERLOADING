/*
8.	Write a program that demonstrates function overloading by defining two functions with the same name and same template, but different template parameters
*/
#include <iostream>
using namespace std;
template<typename T>
T a1(T a,T b,T c){
	return a+b+c;
}
template<typename T>
T a1(T a,T b){
	return a-b;
}

int main(){
	cout<<a1(1,1,1)<<"\n";
	cout<<a1(2.1,2.1)<<"\n";
	return 0;
}
