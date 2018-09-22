//test_018.cpp--要求用戶以整數方式輸入秒數，然後顯示年，天，小時，分鐘顯示這段時間。

#include <iostream>

int main()
{
	using namespace std;
	const int Year=365*24*60*60;
	const int Day=24*60*60;
	const int Hou=60*60;
	const int Min=60;
	int long long sec;
	cout<<"Please enter the number of seconds:";
	cin>>sec;
	cout<<sec<<" seconds = "
		<<sec/Year<<" years "
		<<(sec%Year)/Day<<" days "
		<<(sec%Day)/Hou<<" hours "
		<<((sec%Day)%Hou)/Min<<" minutes "
		<<(sec%Day)%Hou%Min<<" seconds";
	return 0;
}
