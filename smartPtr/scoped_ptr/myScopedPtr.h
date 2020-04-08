#pragma once

class myScoped_ptr {
public:
	explicit myScoped_ptr(int* p = nullptr); //��ʽ���캯��
	~myScoped_ptr();
	void reset(int* p = nullptr); // ��������ָ��
	int& operator*() const; // ����������
	int* operator->() const; // ����������
	int* get() const; //���ԭʼָ��
	explicit operator bool() const; // ��ʽboolֵת��
	void swap(myScoped_ptr& ptr); // ����ָ��
private:
	myScoped_ptr(myScoped_ptr const&); // �������캯��˽�л�
	myScoped_ptr& operator=(myScoped_ptr const&); // ��ֵ����˽�л�
	void operator==(myScoped_ptr const&) const; // ��Ȳ���˽�л�
	void operator!=(myScoped_ptr const&) const; // ����Ȳ���˽�л�
private:
	int* m_ptr;

};