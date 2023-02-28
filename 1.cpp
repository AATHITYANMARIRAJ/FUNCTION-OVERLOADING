/*1.	Write a program that demonstrates function overloading by defining two functions with the same name but different number of parameters.*/

#include <iostream>
using namespace std;

class overload {
	public:
		void mul(int x,int y) {
			cout<<x*y<<"\n";
		}

		void mul(int x,int y,int z) {
			cout<<x*y*z<<"\n";
		}

};

int main() {
	overload o1;
	o1.mul(12,13,14);
	o1.mul(12,13);
	return 0;
}
