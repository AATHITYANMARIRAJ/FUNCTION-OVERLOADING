#include <iostream>
using namespace std;

class overload {
	public:
		void mul(int x,int y) {
			cout<<x*y<<"\n";
		}

		void mul(float x,float y,int z) {
			cout<<x*y*z<<"\n";
		}

};

int main() {
	overload o1;
	o1.mul(12.0,13.0,14);
	o1.mul(12,13);
	return 0;
}