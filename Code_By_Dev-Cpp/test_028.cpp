//test_028.cpp--ӛ�Pize��Ϣ����ʹ��new��ӑB�����ڴ棬���wҪ��Ҋ��P124�����}������

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
	delete p_aPize;
	return 0; 
}
