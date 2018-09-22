#include <iostream>

int m=10;
void a(int n)
{
	n=15/n;
	m=m/2;
}

int main()
{
	using namespace std;
	int n=3;
	a(n);
	cout<<"m="<<m<<"n="<<n;
}
