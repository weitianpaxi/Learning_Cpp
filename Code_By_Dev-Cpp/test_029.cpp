//test_029.cpp--Candy Bar �}Ŀ ������Ҫʹ��new�ӑB�������M��candyBar���M�}Ҋ"test_026.cpp" ��

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
	CandyBar* pCB=new CandyBar[amount];//��̎����һ��"struct CandyBar"��͵�ָ�׃����pCB������������ͨ�^new������ڴ�ĵ�ַ�� 
	cout<<"Now you can enter the information: \n"<<endl;
	cin.get();
	for(int i=0;i<amount;++i)
	{
		cout<<"\nPlease the "<<i+1<<"th's information:"<<endl;
		cout<<"Please enter the CandyBar's  name : ";
		getline(cin,pCB[i].brand);
		cout<<"Please enter the CandyBar's weight: ";
		cin>>pCB[i].weight;
		//cin>>pCB[i]->weight;//��error��
		/*��̎������pCB[i]->weight���ǲ����Եģ��򠑡�pCB����ָ��Y���w�ģ��ஔ추��M�����ټ���[i]�󣬾ͳɠ���һ�����w�ĽY���D���M�е�Ԫ�أ�
		���ԣ�ֻ��ʹ�á�.���\�����@�ýY���w�е�ÿ�����w��Ԫ�ء�*/ 
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
	delete pCB;//��춡�pCB����ָ��new��������ڴ�ģ�����ʹ��deleteጷ��Ǻܱ�ݣ�cpp�����ܻ���������c�w�F�˳��� 
	return 0;
}
