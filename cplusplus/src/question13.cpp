#include <iostream>
using namespace std;

void alter(int &x,int &y){
	x = 30;
	y = 20;
}

int main(){
	int a = 20;
	int b = 30;
	
	alter(a,b);
	cout << a << b;
	return 0;
}
