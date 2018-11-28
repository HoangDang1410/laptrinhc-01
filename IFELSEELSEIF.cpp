#include<iostream>
using namespace std;
int main(){
  int a,b;
  cin>>a>>b;
  if(a>0){
  	if (b>0)
  	cout<<"a va b lon hon 0";
  	else
  	cout<<"a>0 va b !=0";
  }else{
  	 if(a<0){
  	 	if(b<0)
  	 cout<<" a va b nho hon 0";
  	 else
  	 cout<<" a nho hon 0 va b !=0 ";
	   }
	   else{
	   	cout<<"a va b= 0";
	   }
  }
}
