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
int main(){
	cout<<"1-ADDITION\n";
	cout<<"2-MULTIPLICATION\n";
	int ch;
	cout<<"enter your choice\n";
	cin>>ch;
	
	if(ch==1){
		int a,b;
		cout<<"enter the first number\n";
		cin>>a;
		cout<<"enter the second number\n";
		cin>>b;
		int a1=f1(a,b);
		cout<<a1<<"\n";
	}
	else{
		double a,b;
		cout<<"enter the first number\n";
		cin>>a;
		cout<<"enter the second number\n";
		cin>>b;
		double a2=f1(a,b);
		cout<<a2<<"\n";
	}
	return 0;
}
