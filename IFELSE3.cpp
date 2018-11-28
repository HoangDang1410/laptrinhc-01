#include <iostream>
using namespace std;
int main(){
	int x,y;
	char z;
	cin>>x>>y;
	cin>>z;
	if(z== '+'|| z== '-' ||z=='*'  ||z== '/'){
		if(z=='+'){
			cout<<"x+y="<<x+y;
		}else if(z=='-'){
			cout<<"x-y="<<x-y;
		}else if(z=='*'){
			cout<<"x*y="<<x*y;
		}else if(z=='/'){
			cout<<"x/y="<<x/y;
		}
		
	}else{
		cout<<"Ban nhap sai moi nhap lai";
	}
}
