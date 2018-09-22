//test_020.cpp--用戶輸入驅車里程（英裏）和使用汽油量（加侖），然後指出每公里耗油量【包含單位換算】。 

#include <iostream>

int main()
{
	using namespace std;
	const double Mi=1.6;
	const double Us_gal=3.785;
	double mile,gas;
	cout<<"Please enter the mileage:";
	cin >>mile;
	cout<<"Please enter the amount of the gasoline:";
	cin >>gas;
	cout<<"Your fuel consumption per mile is "<<gas/mile<<endl;
	cout<<"Now your fuel consumption per kilometer is "<<(gas*Us_gal)/(mile*Mi)<<endl;
	return 0;
}
