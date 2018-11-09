#include<iostream>
using namespace std;
int main() 
{
	
	int *a,*b,*temp;
	cout<<"Enter value of a and b:";
	cin>>*a;
	cout<<endl;
	cin>>*b;
	temp=a;
	a=b;
	b=temp;
	cout<<"After swaping a="<<*a<<"     b="<<*b;
    return 0;
}

