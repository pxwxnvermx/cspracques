#include<iostream>
using namespace std;
void even(int a[],int n)
    {
    	cout<<"Even terms are--";
    	for(int i=0;i<n;i++)
    	{
    		if(a[i]%2==0)
    		  cout<<a[i]<<"  ";
		}
	}
void odd(int a[],int n)
    {
    	cout<<"Odd terms are--";
    	for(int i=0;i<n;i++)
    	{
    		if(a[i]%2!=0)
    		  cout<<a[i]<<"  ";
		}
	}	
void operation(int a[],int n)
{
     int sum=0;   
	cout<<"sum of the array is--";
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
	}
	cout<<sum<<endl;
	cout<<"the average of array is---";
    float avg;
    avg=sum/n;
	
}
void mami(int a[],int n)
{
	int max=a[0];
	int min=a[0];
	cout<<"The maximum element is---";
	for(int i=0;i<n;i++)
	 {
	 	if(max<a[i])
	 	 max=a[i];
	 }
	 cout<<max<<endl;
	 cout<<"The minimum element is ---";
	for(int i=0;i<n;i++)
	{
		if(min>a[i])
		min=a[i];
	} 
	cout<<min<<endl; 
}
void remove(int a[],int n)
{
	
}
void reverse(int a[],int n)
{
	cout<<"reverse of array is----";
	for(int i=(n-1);i>=0;i--)
	{
	  cout<<a[i]<<"  ";
	}
}
int main()
{
	int b[20],t,p;
	int flag=1;
	cout<<"enter length of array--";
	cin>>p;
	cout<<endl<<"eneter elements of array"<<endl;
	for(int i=0;i<p;i++)
	 cin>>b[i];
	while(flag)
	{
	cout<<"Enter your choice for array"<<endl;
	cout<<"1-Enter array again "<<endl;
	cout<<"2-Print the Even values"<<endl;
	cout<<"3-print the odd values"<<endl;
	cout<<"4-To calculate the sum and average"<<endl;
	cout<<"5-to find maximum and minimum element"<<endl;
	cout<<"6-to remove duplicates from array"<<endl;
	cout<<"7-to print array in reverse order"<<endl;
	cout<<"8-to exit the interface"<<endl;
	cin>>t;
	switch(t)
	{
		case 1:
			cout<<"enter the element of array"<<endl;
			for(int i=0;i<p;i++)
			 cin>>b[i];
	    case 2:
	    	even(b,p);
	    case 3:
		    odd(b,p);
		case 4:
		    operation(b,p);
		case 5:
		    mami(b,p);
		case 6:
		    remove(b,p);
		case 7:
		    reverse(b,p);
		case 8:
		    flag=0;	
		default:
		  cout<<"wrong value plz enet valid value";						
	}
    }
}
