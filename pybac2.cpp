#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main (){
	int a,b,c,d,x,x1,x2;
	cin>>a>>b>>c;
	if(a==0){
		if(b==0)
			cout<<" a va b ko the cung bang 0";
		else
		{
				x=-c/b;
			cout<<" pt co 1 nghiem duy nhat la:" << x << endl;
		}
	}
	
	else
	{
		d= b*b -4*a*c;
		if(d>0)
		x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        cout<<"pt co 2 nghiem phan biet:"<< x1 << endl;
	    cout<<"pt co 2 nghiem phan biet:"<< x2 << endl;
	}
	return 0;
}
      
