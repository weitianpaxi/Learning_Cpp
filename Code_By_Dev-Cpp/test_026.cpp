//test_026.cpp--test_025.cpp�ĸİ棬��test_025.cpp�Ļ��A���Sʹ�ýY�����M��

#include <iostream>
#include <string>

struct CandyBar{
	std::string brand;
	float weight;
	int kcal;
}; 
int main()
{
	using namespace std;
	CandyBar sanck[3]={
		{"Zhang Hang",2.24,2333},
		{"Paxifaer",2.42,1234},
		{"Weitianpaxi",2.66,6666},
	};
	for(int i=0;i<3;++i)
	{
		cout<<sanck[i].brand<<"\t"<<sanck[i].weight<<"\t"<<sanck[i].kcal<<"\n";
	}
	return 0;
}
