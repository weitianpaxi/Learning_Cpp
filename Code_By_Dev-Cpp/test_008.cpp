//test_009.cpp--把有n個元素的數組a中的元素逆序保存在數組b的函數，并用主函數測試。

#include <iostream>
#include <iomanip>

void f(int* pa,int* pb,int len);

int main()
{
	using namespace std;
	cout<<"Please enter the number of the Array A:";
	int len;
	cin>>len;
	int* a= new int[len];
	int* b= new int[len];
	cout<<"Please input the Array A:";
	for(int i=0;i<len;i++)
	{
		cin>>a[i];
	}
	f(a,b,len);
	cout<<"The Array B is: ";
	for(int i=0;i<len;i++)
	{
		cout<<b[i]<<setw(3);
	}
	delete []a;
	delete []b;
	return 0; 
}

void f(int* pa,int* pb,int len)
{
	for(int i=0;i<len;i++)
	{
		pb[i]=pa[len-i-1];
	}
}
