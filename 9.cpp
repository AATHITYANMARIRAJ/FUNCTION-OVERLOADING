/*9.	Write a program that demonstrates function overloading by defining two 
functions with the same name and same template parameters, but different template parameter lists
*/
#include <iostream>
#include <vector>
using namespace std;

template <typename T>
T addall(vector<T> list){
	T count=0;
	for(auto& elem: list){
		count+=elem;
	}
	return count;
}

template <typename T>
T addall(vector<T> list,vector<T> list1){
	T count=0;
	for(auto& elem: list){
		count+=elem;
	}
	T count1=0;
	for(auto& elem1: list1){
		count1+=elem1;
	}
	T c;
	c=count+count1;
	return c;
}


int main(){
	vector<int> intv={1,2,3,4,5};
	vector<int> intv1={1,2,3,4,5};
	vector<double> floatv={1.2,2.4,3.8};
	cout<<addall(intv,intv1)<<"\n";
	cout<<addall(floatv)<<"\n";
	return 0;
}
