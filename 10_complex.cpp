#include <bits/stdc++.h>
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
string d(vector <string> list){
	int count=0;
	for(const string& elem: list){
		for(const char& chr:elem){
			count+=chr;
		}
	}
	ostringstream ostr;
	ostr<<count;
	string strcount=ostr.str();
	return strcount;
	
}

int main(){
	vector<int> intv={1,2,3,4};
	vector<float> float1v={2.2,3.4,7.8};
	vector<double> floatv={1.2,2.4,3.8};
	vector<string> str={"abc","def"};
	d(intv);
	d(floatv);
	d(float1v);
	cout<<d(str);
	
}
