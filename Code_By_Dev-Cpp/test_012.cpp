//test_012.cpp--��ʹ�������Ñ��Զ��x����������main()�����K��������ݔ����������һ������Ҫ�{�ÃɴΡ�

#include <iostream>
void outline_a();
void outline_b();

int main()
{
	outline_a();
	outline_a();
	outline_b();
	outline_b();
	return 0;
}

void outline_a()
{
	//using std::cout;
	std::cout<<"Three bliand mice"<<std::endl;
}
void outline_b()
{
	//using std::cout;
	std::cout<<"See how they run"<<std::endl;
}
