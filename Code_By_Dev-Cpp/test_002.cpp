#include <iostream>
#include <iomanip>

int sum(int a[],int n)
{
	int s=0;
	for(int i=0;i<n;i++)
	{
		s+=a[i];
		a[i]*=a[i];
	}
	return s;
}

int main()
{
	using namespace std;
	int i,a[]={5,4,3,2,1};
	cout<<sum(a,3)<<endl;
	for(i=0;i<5;i++)
		cout<<a[i]<<setw(3);
}
