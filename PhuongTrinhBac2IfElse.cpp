#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int a,b,c,d;
    int x,x1,x2;
	cin>>a>>b>>c;
	//x^2+bx+c=0
	if(a==0 ){
	   if(b==0){
		cout<<"A VA B KHONG THE CUNG BANG 0 MOI BAN NHAP LAI ";
	}  else{
		cout<<"x="<<-c/b;
		}
	}else{
	    d= b*b -4*a*c;
		if(d>0)
		x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        cout<<"pt co 2 nghiem phan biet:"<< x1 << endl;
	    cout<<"pt co 2 nghiem phan biet:"<< x2 << endl;
	}
	
}
