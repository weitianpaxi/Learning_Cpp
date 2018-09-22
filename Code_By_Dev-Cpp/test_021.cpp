//test_021.cpp--輸出如書P124頂部顯示的内容。

#include <iostream>

struct man
{
	char first_name[20];
	char last_name[20];
	char grade;
	int age;
}; 
int main()
{
	using namespace std;
	man man_x;
	cout<<"What is your first name? ";
	cin.getline(man_x.first_name,20);
	cout<<"What is your last name? ";
	cin.getline(man_x.last_name,20);
	cout<<"What letter grade do you deserve? ";
	cin>>man_x.grade;
	cout<<"What is ypur age? ";
	cin>>man_x.age;
	cout<<"Name:"<<man_x.last_name<<","<<man_x.first_name<<endl;
	cout<<"Grade:"<<char(man_x.grade+1)<<endl;
	cout<<"Age:"<<man_x.age;
	return 0;
}
