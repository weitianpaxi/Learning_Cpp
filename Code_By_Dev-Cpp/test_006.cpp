#include <iostream>

int count(double *a)
{
	double *p=a;
	while(*p!=0)
	{
		p++;
	}
	return (p-a);
}

int main()
{
	using namespace std;
	double a[]={1.0,2.0,8.0,3.0,0.0,4.0,7.0};
	cout<<count(a);
}
