//test_027.cpp--練習使用struct結構體，用戶輸入和主函數輸出。

#include <iostream>
#include <string>

struct Pize{
	std::string name;
	int diameter;
	float weight;
}; 
int main()
{
	using namespace std;
	Pize pize1;
	cout<<"Please enter the name of Pize company: ";
	getline(cin,pize1.name);
	cout<<"Please enter the size of the Pize's diameter: ";
	cin>>pize1.diameter;
	cout<<"Please enter the weight og the Pize: ";
	cin>>pize1.weight;
	cout<<"Now your Pize's main information is:\n\a";
	cout<<"The  Pize company name is: \t"<<pize1.name<<"\n"
	    <<"The diameter of Pize is: \t"<<pize1.diameter<<"\n"
		<<"The weight of Pize is: \t\t"<<pize1.weight<<endl;
	return 0;
}
