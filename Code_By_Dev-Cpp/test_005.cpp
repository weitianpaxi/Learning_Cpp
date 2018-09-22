#include <iostream>
bool isprime(int m)
{
	int i;
	for( i=2;m%i!=0;i++)
	{}
	return (i==m);
}

int main()
{
	using namespace std;
	int m=3;
	while(isprime(m))
	{
		cout<<"yes"<<m;
		m++;
	}
	cout<<"not"<<m;
}
