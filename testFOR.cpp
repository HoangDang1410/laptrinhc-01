#include<iostream>
using namespace std;
int main(){
	int a,i, sum =0;
	cin>>a;
	for(int i=1; i<a; i++){
		cout<<"i"<<"^"<<"a="<< i^a ;
		sum+=i;
	}
	cout<<"\nsum="<<sum;
	return 0;
}
