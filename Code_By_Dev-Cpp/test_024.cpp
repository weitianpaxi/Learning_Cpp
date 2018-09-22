//test_024.cpp--用戶輸入名和姓，使用一個逗號和空格將名字和姓組合起來。要求使用string對象和頭文件string中的函數。

#include <iostream>
#include <string>

int main()
{
	using  namespace std;
	string str1,str2;
	cout<<"Enter your first name: ";
	getline(cin,str1);
	cout<<"Enter your last  name: ";
	getline(cin,str2);
	cout<<"Here's the information in a single string: "<<str2+" , "+str1;
	return 0;
}
