//test_015.cpp--使用整數輸入自己的身高（英寸），然後轉換爲英尺和英寸。要求使用下劃綫字符指示輸入位置，使用一個const符號常量來充當轉換因子。

#include <iostream>

int main()
{
	using namespace std;
	const int ft=12;
	int in;
	cout<<"Please enter your height:_____(in)\b\b\b\b\b\b\b\b\b";
	cin>>in;
	if(in%ft)
	{
		cout<<"Your heught is: "<<in/ft<<"(ft)"<<in%ft<<"(in).";
	}
	else
	{
		cout<<"Your height is: "<<in/ft<<"(ft).";
	}
	return 0;
}
