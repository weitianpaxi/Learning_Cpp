//test_024.cpp--�Ñ�ݔ�������գ�ʹ��һ����̖�Ϳո����ֺ��սM������Ҫ��ʹ��string������^�ļ�string�еĺ�����

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
