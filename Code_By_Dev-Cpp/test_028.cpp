//test_028.cpp--記錄Pize信息，但使用new來動態分配内存，具體要求見書P124第七題描述。

#include <iostream>
#include <string>
struct Pize{
	std::string brand;
	int diameter;
	float weight;
};

int main()
{
	using namespace std;
	Pize* p_Pize=new Pize;
	cout<<"Please enter the company of Pize: ";
	getline(cin,p_Pize->brand);
	cout<<"Piease enter the Pize's diameter: ";
	cin>>p_Pize->diameter;
	cout<<"Please enter the Pize's  weight : ";
	cin>>(* p_Pize).weight;
	cout<<"Now,you input information is:"<<"\n"	
	    <<"The Pize's  company   is: "<<(* p_Pize).brand<<"\n"
		<<"The Pize's  diameter  is: "<<p_Pize->diameter<<"\n"
		<<"The Pize's  weight    is: "<<p_Pize->weight<<endl;
	delete p_Pize;
	return 0; 
}
