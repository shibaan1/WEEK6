#include<iostream>
using namespace std;

int main(){
	int x;
	cout<<"Enter the number ";
	cin>>x;
	int* p=&x;
	cout<<"The address of the number "<<*p<<" is "<<p<<".\n"<<endl;
	return 0;
}
