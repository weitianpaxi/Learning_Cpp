//test_033.cpp--編寫一個用戶輸入數字的程序，每次輸入后都報告當前輸入數字的和，儅用戶輸入0時，程序結束。 

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
