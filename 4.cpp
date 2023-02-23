#include <iostream>
using namespace std;

class overload{
	public:
	int func(int d){
		cout<<"the integer function is called\n";
		return d;
	}
	
	float func(float d){
		cout<<"the float function is called\n";
		return d;
	}
	
};

int main(){
	overload a;
    int a1=12;
    float a2=9.8;
	int b=a.func(a1);
	float c=a.func(a2);
	cout<<"the integer solution is "<<b<<"\n";
	cout<<"the float solution is "<<c<<"\n";
	return 0;
}