//test_023.cpp--用戶輸入名和姓，使用一個逗號和空格將名字和姓組合起來。要求使用char數組和cstring中的函數。
//strlen()返回一個數組的長度，不包括結束字符“\0 ”；strcat()z將字符串附加到字符數組末尾 ；strcpy()將字符串複製到字符數組。 

#include <iostream>
#include <cstring>

int main()
{
	using namespace std;
	char first_name[20];
	char last_name[45];
	//char temp_char[22]=" , ";方法一，有點耗費内存。 
	cout<<"Pleas enter your first name: ";
	cin.getline(first_name,20);
	cout<<"Please enter your last name: ";
	cin.getline(last_name,20);
	strcat(last_name," , ");//方法二，節約内存，并且自我感覺更合理。 
	strcat(last_name,first_name);
	cout<<"Herr's the information in a single string: ";
	for(int i=0;i<strlen(last_name)+1;++i)//通過循環輸出，對比起接下來的string類，明顯更麻煩。 
	{
		cout<<last_name[i];
	}
	return 0;	
}
