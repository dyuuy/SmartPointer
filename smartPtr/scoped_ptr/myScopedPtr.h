#pragma once

class myScoped_ptr {
public:
	explicit myScoped_ptr(int* p = nullptr); //显式构造函数
	~myScoped_ptr();
	void reset(int* p = nullptr); // 重置智能指针
	int& operator*() const; // 操作符重载
	int* operator->() const; // 操作符重载
	int* get() const; //获得原始指针
	explicit operator bool() const; // 显式bool值转型
	void swap(myScoped_ptr& ptr); // 交换指针
private:
	myScoped_ptr(myScoped_ptr const&); // 拷贝构造函数私有化
	myScoped_ptr& operator=(myScoped_ptr const&); // 赋值操作私有化
	void operator==(myScoped_ptr const&) const; // 相等操作私有化
	void operator!=(myScoped_ptr const&) const; // 不相等操作私有化
private:
	int* m_ptr;

};