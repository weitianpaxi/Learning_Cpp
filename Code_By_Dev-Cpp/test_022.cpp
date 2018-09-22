//test_022.cpp--Reading more than one word with getline.

#include <iostream>
#include <string>

int main()
{
	using namespace std;
	string str1,str2;
	cout<<"Enter your name:\n";
	getline(cin,str1);
	cout<<"Enter your favorite dessert:\n";
	getline(cin,str2);
	cout<<"I have some delicious "<<str2;
	cout<<" for you, "<<str1<<".\n";
	return 0;
}
