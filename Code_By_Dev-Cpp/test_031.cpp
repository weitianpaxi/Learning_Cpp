//test_031.cpp--�Ñ�ݔ��ɂ�������Ӌ���@�ɂ���֮�g���������ĺͣ������@�ɂ��������� 

#include <iostream>

int main()
{
 	using namespace std;
	int n1,n2,num=0;
	cout<<"Please enter the first number:\n";
	cin>>n1;
	cout<<"Please enter the second number:\n";
	cin>>n2;
	for(int i=n1;i<=n2;++i)
	{ 
		num+=i;
	}
	cout<<"The number between first number and the second number's sum= "<<num<<endl;
	return 0;
}
