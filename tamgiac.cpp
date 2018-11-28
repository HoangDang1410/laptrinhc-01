#include <iostream>
using namespace std; 
int main(){
	int a,b,c;
	cin>>a>>b>>c;
    if(a+b>c && a+c>b && b+c>a){
    	cout<<"ABC LA MOT TAM GIAC";
	} else{
		cout<<"ABC KO PHAI LA MOT TAM GIAC";
	}
	return 0;
}
