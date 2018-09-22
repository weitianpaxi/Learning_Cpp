//test_012.cpp--它使用三個用戶自定義函數（包括main()），並生成如下輸出，且其中一個函數要調用兩次。

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
