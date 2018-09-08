#include <iostream>
using namespace std;

int main(){
	int num,rem=0,sum=0,prod=1;
	cout << "Enter the no : ";
	cin >> num;
	
	while(num!=0){
		rem=num%10;
		cout << rem <<endl;
		sum+=rem;
		prod*=rem;
		num =num/10;
	}
	
	cout << "The Sum is :" << sum << endl;
	cout << "The Product is :" << prod << endl;	
	return 0;
}
