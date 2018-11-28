#include<iostream>
using namespace std;
int main(){
	int i,n;
	cin>>i,n;
	int t =0, sum =0;
	for(i=1;i<=n;i++){
		t+=i;
		sum+=t;
	}
     cout<<"sum="<<sum;
}
