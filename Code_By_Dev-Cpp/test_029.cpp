//test_029.cpp--Candy Bar 題目 ，但是要使用new動態創建數組。candyBar數組題見"test_026.cpp" 。

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
	int amount;
	cout<<"Piease enter how many date do you want to input: ";
	cin>>amount;
	CandyBar* pCB=new CandyBar[amount];//此處聲明了一個"struct CandyBar"類型的指針變量‘pCB’，并存入了通過new分配的内存的地址。 
	cout<<"Now you can enter the information: \n"<<endl;
	cin.get();
	for(int i=0;i<amount;++i)
	{
		cout<<"\nPlease the "<<i+1<<"th's information:"<<endl;
		cout<<"Please enter the CandyBar's  name : ";
		getline(cin,pCB[i].brand);
		cout<<"Please enter the CandyBar's weight: ";
		cin>>pCB[i].weight;
		//cin>>pCB[i]->weight;//【error】
		/*此處寫爲‘pCB[i]->weight’是不可以的，因爲‘pCB’是指向結構體的，相當於數組名，再加上[i]后，就成爲了一個具體的結構圖數組中的元素，
		所以，只能使用“.”運算符來獲得結構體中的每個具體的元素。*/ 
		cout<<"Please enter the CandyBar's  kcal : ";
		cin>>pCB[i].kcal;
		cin.get();
	}
	cout<<"\n\nThen you input information as follows: \n\n"<<endl;
	for(int i=0;i<amount;++i)
	{
		cout<<"The "<<i+1<<"th message is "<<endl;
		cout<<"The CandyBar's  name  is :"<<pCB[i].brand<<"\n"
  	        <<"The CandyBar's weight is :"<<pCB[i].weight<<"\n"
  	        <<"The CandyBar's  Kcal  is :"<<pCB[i].kcal<<"\n"<<endl;
	}
	delete pCB;//由於‘pCB’是指向new所分配的内存的，所以使用delete釋放是很便捷，cpp的智能化對象的特點體現了出來。 
	return 0;
}
