#ifndef COUNTED_PTR_H
#define COUNTED_PTR_H

template<class T>
class CountedPtr{
private :
	long* count;
	T* ptr;
	void dispose(){
		if (--*count == 0){
			delete count;
			delete ptr;
		}
	}
public:
	explicit CountedPtr(T* p = 0) throw() :ptr(p), count(new long(1)){}
	CountedPtr(const CountedPtr<T>& rhs)throw() :ptr(rhs.ptr), count(rhs.count){
		++*count;
	}
	~CountedPtr()throw(){
		dispose();
	}

	CountedPtr<T> operator=(const CountedPtr<T>& rhs)throw(){
		if (this != &rhs){
			dispose();
			this->ptr = rhs.ptr;
			this->count = rhs.count;
			++*this->count;
		}
		return *this;
	}

	T& operator*()const throw(){
		return *ptr;
	}
	T* operator->()const throw(){
		return ptr;
	}
};

#endif