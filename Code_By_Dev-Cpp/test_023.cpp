//test_023.cpp--�Ñ�ݔ�������գ�ʹ��һ����̖�Ϳո����ֺ��սM������Ҫ��ʹ��char���M��cstring�еĺ�����
//strlen()����һ�����M���L�ȣ��������Y���ַ���\0 ����strcat()z���ַ������ӵ��ַ����Mĩβ ��strcpy()���ַ����}�u���ַ����M�� 

#include <iostream>
#include <cstring>

int main()
{
	using namespace std;
	char first_name[20];
	char last_name[45];
	//char temp_char[22]=" , ";����һ�����c���M�ڴ档 
	cout<<"Pleas enter your first name: ";
	cin.getline(first_name,20);
	cout<<"Please enter your last name: ";
	cin.getline(last_name,20);
	strcat(last_name," , ");//�����������s�ڴ棬�������Ҹ��X������ 
	strcat(last_name,first_name);
	cout<<"Herr's the information in a single string: ";
	for(int i=0;i<strlen(last_name)+1;++i)//ͨ�^ѭ�hݔ��������������string����@���韩�� 
	{
		cout<<last_name[i];
	}
	return 0;	
}
