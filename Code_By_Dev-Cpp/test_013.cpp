//test_013.cpp(原題)--讓用戶輸入年齡，然後顯示該年齡包含多少個月。

#include <iostream>

int main()
{
	using namespace std;
	cout<<"Enter your age:";
	int age;
	cin>>age;
	cout<<"It include "<<age*12<<" month(s)"<<endl;
	return 0;
}
