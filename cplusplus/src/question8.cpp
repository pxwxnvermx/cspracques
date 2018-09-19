#include <iostream>

#define SWAP(a,b) a=a+b;b=a-b;a=a-b;

using namespace std;

int main(){
	int a,b;
	cout << "Enter First no : ";
	cin >> a;
	cout << "Enter Second no : ";
	cin >> b;
	
	SWAP(a,b);
	
	cout << a << endl << b;
}
