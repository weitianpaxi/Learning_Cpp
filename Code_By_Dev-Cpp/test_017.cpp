//test_017.cpp--Ҫ���Ñ��Զȡ��֡���ݔ��һ�����ȣ�Ȼ���ԶȞ��λ�@ʾԓ���ȡ�

#include <iostream>

int main()
{
	using namespace std;
	const double Decimal=60;
	cout<<"Please enter a latitude in dgrees,minutes,and seconds:\n";
	double  deg,min,sec,arc;
	//double arc;
	cout<<"First,enter the degrees:";
	cin>>deg;
	cout<<"Next,enter the minutes of arc:";
	cin>>min;
	cout<<"Finally,enter the seconds of arc:";
	cin>>sec;
	arc=deg+min/Decimal+sec/Decimal/Decimal;
	//arc=double(deg)+(double(min)/double(Decimal))+(double(sec)/double(Decimal)/double(Decimal));
	cout<<deg<<" degrees,"<<min<<" minutes,"<<sec<<" seconds = "<<arc<<" degrees";
	return 0;
}
