//test_009.cpp--����n��Ԫ�صĔ��Ma�е�Ԫ�ؾ͵����򱣴��ڔ��Ma�ĺ����������������yԇ��

#include <iostream>
#include <iomanip>

void f(int* pa,int len);

int main()
{
	using namespace std;
	cout<<"Please enter the number of the Array A:";
	int len;
	cin>>len;
	int* a= new int[len];
	cout<<"Please input the Array A:";
	for(int i=0;i<len;i++)
	{
		cin>>a[i];
	}
	f(a,len);
	cout<<"The Array A is: ";
	for(int i=0;i<len;i++)
	{
		cout<<a[i]<<setw(3);
	}
	delete []a;
	return 0; 
}

void f(int* pa,int len)
{
	int temp=pa[0];
	for(int i=0;i<len/2;i++)
	{
		temp=pa[i];
		pa[i]=pa[len-i-1];
		pa[len-i-1]=temp;
	}
}
