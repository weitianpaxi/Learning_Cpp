//test_031.cpp--用戶輸入兩個整數，計算這兩個數之間所有整數的和（包括這兩個整數）。 

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
