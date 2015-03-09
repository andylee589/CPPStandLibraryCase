#include <iostream>
//#include <memory>
using namespace std;

// auxiliary type to enable copies and assignments
template<class Y>
struct auto_ptr_ref2{
	Y* pointer;
	auto_ptr_ref2(Y* rhs):pointer(rhs){}
};

template<class T>
class auto_ptr2{
private:
	T* pointer;
public:
	// constructor
	explicit auto_ptr2(T* ptr = 0) throw() :pointer(ptr) {}

	// copy constructor
	auto_ptr2(auto_ptr2& copy) throw() :pointer(copy.release()){}
	template<class U>
	auto_ptr2(auto_ptr2<U>& copy)  throw() : pointer(copy.release){}

	//assignments
	auto_ptr2& operator=(auto_ptr2& copy)throw(){
		reset(copy.release());
		return*this;
	}
	template<class U>
	auto_ptr2& operator=(auto_ptr2<U>& copy) throw(){
		reset(copy.release());
		return *this;
	}

	//destructor
	~auto_ptr2()throw(){
		delete pointer;
	}

	//value access
	T* get() const throw(){
		return pointer;
	}
	T& operator*() const throw(){
		return *pointer;
	}
	T* operator->() const throw(){
		return pointer;
	}
	T* release() throw(){
		T* temp(pointer);
		pointer = NULL;
		return temp;
	}

	//reset
	void reset(T* ptr = 0)throw(){
		if (pointer != ptr){
			delete pointer;
			pointer = ptr;
		}
	}

	//conversions  from rvalue refrence to lvalue refrence
public:
	auto_ptr2(auto_ptr_ref2<T> rhs) throw() :pointer(rhs.pointer){}
	auto_ptr2& operator=(auto_ptr_ref2<T> rhs) throw(){
		this->pointer = rhs.pointer;
	}
	template<class U>
	operator auto_ptr_ref<U>() throw(){return auto_ptr_ref<U>(release())}
	template<class U>
	operator auto_ptr<U>()throw(){return auto_ptr<U> (release())}
};







template <typename T>
ostream& operator<<(ostream& out, const auto_ptr2<T>& p){
	if (p.get()){
		out << *p<<endl;
	}
	else{
		out << "Null"<<endl;
	}
	return out;
}

int main(){
	auto_ptr2<int> p(new int(20));
	auto_ptr2<int> q;
	auto_ptr2<int> r(new int(33));

	cout << "after initialization:" << endl;
	cout << p;
	cout << q;

	q = p;
	cout << "after assigining auto pointers:" << endl;
	cout << p;
	cout << q;

	*q += 13;
	p = q;
	cout << "after change and reassignment" << endl;
	cout << p;
	cout << q;


}