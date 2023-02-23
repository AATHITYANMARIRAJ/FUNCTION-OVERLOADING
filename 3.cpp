#include <iostream>
using namespace std;

class overloading{
	public:
	void add(const int& x,const int& y,const int& z){
		cout<<"the constant function is called\n";
		cout<<x+y+z<<"\n";
	}
	
	void add(int& x,int& y,int& z){
		cout<<"the variable function is called\n";
		cout<<x+y+z<<"\n";
	}
};
int main(){
	overloading o1;
	int a1=10;
	int a2=20;
	int a3=30;
  const int b1=13;
  const int b2=12;
  const int b3=11;
	o1.add(a1,a2,a3);
	o1.add(b1,b2,b3);
	return 0;
}