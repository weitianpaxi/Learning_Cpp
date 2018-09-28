//test_034.cpp--使用char數組和循環每次讀取一個單詞，直到用戶輸入“done”爲止，隨後指出用戶輸入了多少個單詞（不包括“done”）。

#include <iostream>
#include <cstring>

int main()
{
	using namespace std;
	char* ch=new char;
	int count=0;
	cout<<"Please enter words(to stop,type the word \"done\").\n";
	cin>>ch;
	while(strcmp(ch,"done"))
	{
		++count;
		cin>>ch;
	}
	cout<<"You entered a total of "<<count<<" words."<<endl;
	return 0;
}
