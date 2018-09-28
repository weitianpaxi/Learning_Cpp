//test_034.cpp--要求用戶輸入數字，每次輸入后，程序報告到目前爲止，所輸入的數值和，儅輸入0時，程序結束。

#include <iostream>

int main()
{
	using namespace std;
	long long n,sum=0;
	cout<<"Please start input number.\n【Rember enter '0' to stop summing.】\n";
	while(n != 0)
	{
		cin>>n;
		sum += n;
		cout<<"Your input's sum = "<<sum<<"\n";
	}
	return 0;
}
