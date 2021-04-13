//test_026.cpp--test_025.cpp的改版，在test_025.cpp的基礎上聯係使用結構數組。

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
		{"Huang",2.24,2333},
		{"Paer",2.42,1234},
		{"Wei",2.66,6666},
	};
	for(int i=0;i<3;++i)
	{
		cout<<sanck[i].brand<<"\t"<<sanck[i].weight<<"\t"<<sanck[i].kcal<<"\n";
	}
	return 0;
}
