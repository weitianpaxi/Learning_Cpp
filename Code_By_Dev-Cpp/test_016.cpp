//test_016.cpp--Ӌ��BMI���漰����λ�Q�㡣

#include <iostream>

int main()
{
	using namespace std;
	const int Ft=12;
	const double Meter=0.0254;
	const double Pound=2.2;
	int ft,in;
	double meter,lb;
	cout<<"Please enter your height: ___(ft)\b\b\b\b\b\b\b";
	cin>>ft;
	cout<<"			  ____(in)\b\b\b\b\b\b\b\b";/*��̎���ݔ��С���c������ֱ�����^�w�ص�ݔ�룬
											ֱ��Ӌ���һ���e�`�ĽY����ԭ��δ֪����������P�Y�ϡ�*/ 
	cin>>in;
	cout<<"Plrase enter your weight: ___(Pound)\b\b\b\b\b\b\b\b\b\b";
	cin>>lb;
	cout<<"Your BMI is: "<<(lb/Pound)/(((ft*12+in)*Meter)*((ft*12+in)*Meter));
	return 0;
}
