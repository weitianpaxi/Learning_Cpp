//test_034.cpp--Ҫ���Ñ�ݔ�딵�֣�ÿ��ݔ��󣬳����浽Ŀǰ��ֹ����ݔ��Ĕ�ֵ�ͣ��}ݔ��0�r������Y����

#include <iostream>

int main()
{
	using namespace std;
	long long n,sum=0;
	cout<<"Please start input number.\n��Rember enter '0' to stop summing.��\n";
	while(n != 0)
	{
		cin>>n;
		sum += n;
		cout<<"Your input's sum = "<<sum<<"\n";
	}
	return 0;
}
