#include <iostream>
/*  PRINT_ELEMENTS()
*  prints optional c-string optcstr followed by all elements of the collection coll
*/
template <class T>
inline void PRINT_ELEMENTS(const T& coll, const char* optcstr = ""){
	typename T::const_iterator pos;
	std::cout << optcstr;
	for (pos = coll.begin(); pos != coll.end(); ++pos){
		std::cout << *pos << " ";
	}
	std::cout << std::endl;
}