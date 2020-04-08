#include "myAutoPtr.h"
#include <iostream>
#include <memory>
#include <string>

void test(myAuto_ptr autptr)
{
	std::cout << "enter" << std::endl;
}
int main()
{
	myAuto_ptr auInt(new int(5)); // 直接构造
	std::cout << *auInt << std::endl;
	int* p = new int(6);
	myAuto_ptr auInt2(p); // 使用已经存在的普通指针来构造
	std::cout << *auInt2 << std::endl;

	myAuto_ptr auInt3(new int(9));
	myAuto_ptr auInt4(new int(8));
	auInt4 = auInt3; // 利用已经存在的智能指针构造新的智能指针
	
	test(auInt4);
	std::cout << *auInt4 << std::endl;


	return 0;
}

