#include <cstddef>
using namespace std;

template<class T,size_t theSize>
class carray{
private:
	T v[theSize];
public:
	typedef T value_type;
	typedef T* iterator;
	typedef const T* const_iterator;
	typedef T& refrence;
	typedef const T& const_refrence;
	typedef size_t size_type;
	typedef ptrdiff_t different_type;

	// iterator support
	iterator begin(){ return v; }
	iterator end(){ return v + theSize; }
	const_iterator begin()const { return v; }
	const_iterator end()const { return v + theSize; }

	//direct element access
	refrence operator[](size_type i){ return v[i]; }
	const_refrence operator[](size_type i) const { return v[i]; }

	// size is constant
	size_type size(){ return theSize; }
	size_type max_size()const { return theSize; }

	// conversion to ordinary array
	T* as_array(){ return v; }
};