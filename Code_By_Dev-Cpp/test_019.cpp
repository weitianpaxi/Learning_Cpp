//test_019.cpp--用戶輸入全球當前人口和美國（或者其他國家）當前人口，并顯示美國（或者其他國家）
//佔全球人口的百分比。

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
