#include <iostream>

namespace custom{
	template <class T>
	inline const T& min(const T& a, const T& b){
		return b < a ? b : a;
	}
	template <class T,class Compare>
	inline const T& min(const T&a, const T& b, Compare comp){
		return comp(b, a) ? b : a;
	}
	template <class T>
	inline const T& max(const T& a, const T& b){
		return b>a ? b : a;
	}
	template <class T, class Compare>
	inline const T& max(const T& a, const T& b,Compare comp){
		return comp(a, b) ? b : a;
	}

	namespace rel_ops{
		template <class T>
		inline bool operator != (const T& a, const T& b){
			return !(a == b);
		}
		template <class T>
		inline bool operator > (const T& a, const T& b){
			return b<a;
		}
		template <class T>
		inline bool operator >=(const T& a, const T&b){
			return !(a < b);
		}
		template <class T>
		inline bool operator <=(const T&a, const T& b){
			return !(b>a);
		}
	}
}

using namespace custom;
using namespace custom::rel_ops;
bool int_ptr_less(int * a, int*b){
	return *a < *b;
}
class Value{
	int val;
public:
	Value(int v) :val(v){}
	bool operator == (const Value& rhs) const{
		return val == rhs.val;
	}
	bool operator <(const Value& rhs) const{
		return val < rhs.val;
	}
};

int main(){
	int x = 17 ,y=42,*px,*py;
	px = &x;
	py = &y;
	std::cout<<*(max(px, py, int_ptr_less))<<std::endl;

	Value a(11);
	Value b(12);
	std::cout<< (a != b ?"true":"false")<<std::endl;
}