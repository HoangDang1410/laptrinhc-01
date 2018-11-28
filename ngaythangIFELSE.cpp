#include <iostream>
using namespace std;
int main(){
	int thang;
	cin>> thang;
	 if(thang>=1 && thang<=12){
	 	if(thang ==1  ||thang ==3 ||thang ==5 ||thang ==7 ||thang ==8 || thang ==12 ){
	 		cout<<"Thang co 31 ngay";
		 }else if(thang ==4 ||thang ==6 ||thang ==9 ||thang ==11 ){
		 	cout<<"Thang nay cos 30 ngay";
		 }else{
		 	int nam;
		 	cin>> nam;
		 	 if(nam%4==0&&nam%100!=0||nam%400==0)
            {
             cout<<"Thang co 29 ngay";
            }
             else{
             cout<<"Thang co 28 ngay";
         }
         }
	       }else{
	 	    cout<<" MOI BAN NHAP LAI THANG KO HOP LE";
	        }
}

