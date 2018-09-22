//test_016.cpp--計算BMI，涉及到單位換算。

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
	cout<<"			  ____(in)\b\b\b\b\b\b\b\b";/*此處如果輸入小數點會導致直接跳過體重的輸入，
											直接計算出一個錯誤的結果，原因未知，待查閲相關資料。*/ 
	cin>>in;
	cout<<"Plrase enter your weight: ___(Pound)\b\b\b\b\b\b\b\b\b\b";
	cin>>lb;
	cout<<"Your BMI is: "<<(lb/Pound)/(((ft*12+in)*Meter)*((ft*12+in)*Meter));
	return 0;
}
