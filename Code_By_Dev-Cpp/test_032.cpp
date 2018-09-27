//test_032.cpp--使用array對象和long double（而不是long long）重新編寫程序清單5.4，并計算100!。

#include <iostream>
#include <array>
const int ArSize = 101;

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
