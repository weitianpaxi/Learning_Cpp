#include <iostream>

int x=5;
int p(int x)
{
	int y=1;
	static int z=1;
	y++,z++;
	return x+y+z;
}

int main()
{
	using namespace std;
	for(int i=1;i<3;i++)
	cout<<p(x++);
	//cout<<x;
}
