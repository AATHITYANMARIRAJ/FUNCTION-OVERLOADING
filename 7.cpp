/*7.	Write a program that demonstrates function overloading by defining two functions with the same name but different templates.*/
#include <iostream>
using namespace std;
template <typename T>
T max(T a){
	cout<<"same\n";
		return a;
}
template <typename T1,typename T2>
T2 max(T1 a,T2 b){
	    cout<<"different\n";
		if(a>b){
		return a;
	}
	else{
		return b;
	}
}

int main(){
cout<<max(3.8)<<"\n";
cout<<max(3,4.0)<<"\n";
cout<<max(3,4.4)<<endl;
return 0;
}
