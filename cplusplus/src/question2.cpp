#include <iostream>
using namespace std;

int main(){
	int num,rem,rev;
	int orgnum = num;
	cout << "Enter the no to be reversed : ";
	cin >> num;
	
	while(num!=0){
		rem=num %10;
		rev = rev*10+rem;
		num = num /10;
	}
	
	cout << "The reversed No is :" << rev;
	
	return 0;
}
