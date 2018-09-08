#include <iostream>
using namespace std;

int main(){
	double num,sum;
	cout << "Enter the no : ";
	cin >> num;
	
	while(num!=0){
		sum +=1/num;
		num--;
	}
	cout <<"The Sum is : "<< sum;
	return 0;
}
