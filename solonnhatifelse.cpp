#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a>b){
		if(b>c){
			cout<<"a la so lon nhat";
		}else if(a>c){
			cout<<"a la so lon nhat";
		}else{
			cout<<" c la so lon nhat";
		}
	}else{
		if(b>c){
			cout<<"b la so lon nhat";
		}else{
			cout<<"c la so lon nhat";
		}
	}
	
}
