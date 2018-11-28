#include<iostream>
using namespace std;
int main(){
	int n,i,j,sum;
	cin>>n;
	for (i=1 ; i<=n; i++){
		sum=1;
		for(j=1;j<=3;j++)
		sum= sum*i;
	
	}
	cout<<"sum="<<sum;
}
