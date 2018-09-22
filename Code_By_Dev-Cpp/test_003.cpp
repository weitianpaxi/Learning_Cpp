#include <iostream>
#include <iomanip>

void f(int *p,int n)
{
	for(int i=0;i<n;i++)
	{
		(*p)++; 
	}	
}

int main()
{
	using namespace std;
	int i,a[]={0,1,2,3,4},*p=&a[0];
	f(p,2);
	for(i=0;i<5;i++)
	{
		cout<<a[i];
	}
 } 
 
