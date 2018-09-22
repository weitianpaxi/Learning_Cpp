//test_014.cpp--輸入攝氏度轉化為華氏度。

#include <iostream>
double change(double c);
void sound();

int main()
{
	using namespace std;
	cout<<"Place enter a Celsius value:";
	sound();
	double cel;
	cin>>cel;
	sound();
	double fah=change(cel);
	cout<<cel<<" degrees Celsius value is "<<fah<<" degrees Fahrenheit."<<endl;
	return 0;
}

double change(double c)
{
	double fah=1.8*c+32.0;
	return fah;
}
void sound()
{
	using std::cout;
	char alarm='\a';
	cout<<alarm;
}
