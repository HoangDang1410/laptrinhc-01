#include <iostream>
using namespace std;
int main(){
	int a,b,x;
	cin>>a>>b;
	x=-b/a;
      if (a==0 && b==0)
         {
      cout<<"phuong trinh vo so nghiem";
        }
        else if (a==0 && b!=0)
         {
       cout<<"phuong trinh vo nghiem";
         }
       else
         {
      cout<<"phuong trinh co nghiem x= "<<-b/a;
           }

	return 0;
}
