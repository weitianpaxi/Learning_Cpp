// fail 
#include <iostream>

void f(int* pa,int* pb);

int main()
{
	using namespace std;
	int len,a[]={},b[]={},i;
	cout<<"Please enter the number of Array a:";
	cin>>len;
	cout<<"Please input the Array a:";
	for(i=0;i<len;i++)
	{
		cin>>a[i];	
	}
	f(a,b);
	cout<<"The new Array is:";
	for(i=1;i<len;i++)
	{
		cout<<b[i];
	}
	
	return 0;
}

void f(int* pa,int* pb)
{
	int len=sizeof(pa)/sizeof(pa[0]);
	for(int i=0;i<len;i++)
	{
		pb[i]=pa[len-i-1];
	}
}
