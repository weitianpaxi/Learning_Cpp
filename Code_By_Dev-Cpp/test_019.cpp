//test_019.cpp--�Ñ�ݔ��ȫ��ǰ�˿ں������������������ң���ǰ�˿ڣ����@ʾ�����������������ң�
//��ȫ���˿ڵİٷֱȡ�

#include <iostream>

int main()
{
	using namespace std;
	long long int population,country_population;
	cout<<"Please enter the world's population:";
	cin>>population;
	cout<<"Please enter the population of the US:";
	cin>>country_population;
	cout<<"The population of the US is "<<(double (country_population)/population)*100
		<<"% of the world population.";
	return 0;
}
