#include<iostream>
using namespace std;
int main(){
	int i,j,n;
    cin>>n;
     
  for (i=0; i=n; i++)
  {
    for (j=n; j<i; j--)
     cout<<" ";
    for (j=0; j<i*2; j++)
      cout<<"*";
    cout<<"\n";
  }
}

