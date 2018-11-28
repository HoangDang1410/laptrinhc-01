#include <iostream>
using namespace std;
int main(){
	char nv1;
	char nv2;
	cin>>nv1>>nv2;
	if(nv1='l'){
		if(nv2='b'){
			cout<<" nv1 thang";
		}else if(nv2='l'){
			cout<<" 2 nv hoa nhau";
		}else{
			cout<<"nv2 thang";
		}
    }
	  else if(nv1='b'){
		if(nv2='b'){
			cout<<" 2 nv hoa";
		}else if(nv2='l'){
			cout<<" nv2 thang";
		}else{
			cout<<"nv2 thua";
		}
	}
	else if(nv1='k'){
		if(nv2='b'){
			cout<<" nv2 thang";
		}else if(nv2='l'){
			cout<<" nv1 thang";
		}else{
			cout<<"2 nv hoa";
	    }
    }
}


