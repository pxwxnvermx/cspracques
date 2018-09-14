#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int num = 0,d,rem,i=0;
	cout<<"Enter the binary Number : ";
	cin>>num;
	
	while(num!=0){	
		rem=num%2;
		d=d+rem*pow(2,i);
		num=num/10;
		i++;	
	}
	cout << d;
	
	return 0;
}
