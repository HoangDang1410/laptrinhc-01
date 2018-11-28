#include <iostream>
using namespace std;
int max (int x, int y){
	cout<<"SO LON NHAT LA:";
	if (x>y) return x;
	return y;
}
int main (){
	int x,y;
    x= 10; y=10;
    cout<<"max="<< max(x,y);
}
