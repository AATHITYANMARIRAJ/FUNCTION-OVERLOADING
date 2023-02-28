#include <iostream>
#include <vector>
using namespace std;
template <typename T>
T d(vector <T> list){
	T c=0;
	for(auto& itr: list){
		cout<<itr<<" ";
	}
	cout<<"\n";
	return c;
}

template <>
double d(vector <double> list){
	cout<<"double function is called\n";
	double c=0;
	for(auto& itr: list){
		cout<<itr<<" ";
		itr++;
		c++;
	}
	cout<<"\n";
	return c;
	
}

int main(){
	vector<int> intv={1,2,3,4};
	vector<float> float1v={2.2,3.4,7.8};
	vector<double> floatv={1.2,2.4,3.8};
	d(intv);
	d(floatv);
	d(float1v);
	
}
