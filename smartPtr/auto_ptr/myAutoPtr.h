

class myAuto_ptr {
public:
	explicit myAuto_ptr(int* ptr = nullptr) noexcept : m_ptr(ptr) {}
	myAuto_ptr(myAuto_ptr& ptr) noexcept : m_ptr(ptr.release()) {}

	int* release() noexcept { // ���ظö�����ڴ��ַ���ͷ�������Ȩ
		int* tmp = m_ptr;
		m_ptr = nullptr;
		return tmp;
	}

	int* get() const noexcept { // ���ظö�����ڴ��ַ
		return m_ptr;
	}

	void reset(int* ptr = nullptr) noexcept { // ����ԭ��ָ�룬չʾ��ָ��
		if (ptr != m_ptr) {
			delete m_ptr;
		}
		m_ptr = ptr;
	}

	int& operator*() const noexcept
	{
		return *get();
	}

	int* operator->() const noexcept
	{
		return get();
	}

	myAuto_ptr& operator=(myAuto_ptr ptr) noexcept 
	{
		reset(ptr.release()); 
		return *this;
	}

	~myAuto_ptr() noexcept {
		delete m_ptr;
	}
private:
	int* m_ptr;
};

