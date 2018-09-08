#include <iostream>
using namespace std;

int main(){
	int num,sum=0;
	cout << "Enter the no : ";
	cin >> num;
	
	while(num!=0){
		if(num%2==0){
			sum-=num;
		}
		else{
			sum+=num;
		}
		num--;
	}
	cout << "Sum is : " << sum;
	
	return 0;
}
