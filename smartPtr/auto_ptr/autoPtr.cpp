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
	myAuto_ptr auInt(new int(5)); // ֱ�ӹ���
	std::cout << *auInt << std::endl;
	int* p = new int(6);
	myAuto_ptr auInt2(p); // ʹ���Ѿ����ڵ���ָͨ��������
	std::cout << *auInt2 << std::endl;

	myAuto_ptr auInt3(new int(9));
	myAuto_ptr auInt4(new int(8));
	auInt4 = auInt3; // �����Ѿ����ڵ�����ָ�빹���µ�����ָ��
	
	test(auInt4);
	std::cout << *auInt4 << std::endl;


	return 0;
}

