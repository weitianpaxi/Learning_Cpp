//test_032.cpp--ʹ��array�����long double��������long long�����¾����������5.4����Ӌ��100!��

#include <iostream>
#include <array>
const int ArSize = 100;

int main()
{
	using namespace std;
	array<double,100>arr;
	arr[0]=arr[1]=1L;
	for(int i=2;i<=Arsize;++i)
	{
		arr[i]=i*arr[i-1];
	}
	for(int i=0;i<=ArSize;++i)
	{
		cout<<i<<"! = "<<arr[i]<<endl;
	}
	return 0;
}
