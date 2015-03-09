#include <iostream>
#include <vector>

// class template
template <class T>
inline constT& max(const T& a, const T& b){
	return a < b ? b : a;
}
// non-class template
template <int size>
class bitset {
	int size;
};

// default class template
template <class T,class Container=vector<T>>
class myclass;
myclass<int> x1;

// keyword typename
template <class T>
class Type{
	// typename标识着 ptr是一个T::SubType类型的指针，否则T::SubType意味着一个静态成员值乘以ptr
	typename T::SubType * ptr;
};

class Q{
	typedef int SubType;
};
Type<Q> q;