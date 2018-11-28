#include<iostream>
using namespace std;
int main(){
	int  n;
	int i=1;
	cin>>n;
	int t =0, sum =0;
	for(i=1; i<=n ;i++){
		t+=i;
		sum+=t;
	}
     cout<<"sum="<<sum;
}
