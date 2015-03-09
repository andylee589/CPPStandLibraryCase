#include <istream>
#include <limits>

template <class charT, class traits>
inline 
std::basic_istream<charT, traits> & ignoreLine(std::basic_istream<charT, traits>& stream){
	stream.ignore(std::numeric_limits<int>::max(), stream.widen('\n'));
	return stream;
}