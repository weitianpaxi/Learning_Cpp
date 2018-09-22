//test_017.cpp--要求用戶以度、分、秒輸入一個緯度，然後以度為單位顯示該緯度。

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
