//test_015.cpp--ʹ������ݔ���Լ�����ߣ�Ӣ�磩��Ȼ���D�Q��Ӣ�ߺ�Ӣ�硣Ҫ��ʹ�����Q�ַ�ָʾݔ��λ�ã�ʹ��һ��const��̖������䮔�D�Q���ӡ�

#include <iostream>

int main()
{
	using namespace std;
	const int ft=12;
	int in;
	cout<<"Please enter your height:_____(in)\b\b\b\b\b\b\b\b\b";
	cin>>in;
	if(in%ft)
	{
		cout<<"Your heught is: "<<in/ft<<"(ft)"<<in%ft<<"(in).";
	}
	else
	{
		cout<<"Your height is: "<<in/ft<<"(ft).";
	}
	return 0;
}
