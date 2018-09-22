//test_025.cpp--struct的練習，具體説明見書P124-第五題。

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
	CandyBar snack={
 	"Mocha Munch",
 	2.3,
 	350,
	};
	cout<<snack.brand<<"\t"<<snack.kcal<<"\t"<<snack.weight;
	return 0;
}
