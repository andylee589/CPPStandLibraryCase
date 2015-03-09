#include <iterator>

// template class for insert iterator for associative containers
template <class Container>
class associate_insert_iterator :public std::iterator<std::output_iterator_tag, void, void, void, void>{
protected:
	Container& container; 
	
public:
	explicit associate_insert_iterator(Container& c) :container(c){}
	associate_insert_iterator<Container>& operator = (const typename std::iterator_traits::value_type & value){
		container.insert(value);
		return *this;
	}

	// dereference is a no-op return iterator itself
	associate_insert_iterator<Container>& operator *(){
		return *this;
	}
	associate_insert_iterator<Container>& operator ++(){
		return *this;
	}
	associate_insert_iterator<Container>& operator ++(int){
		return *this;
	}
};

// convenience function to create the insert
template <class Container>
inline associate_insert_iterator<Container> associate_inserter(Container& c){
	return associate_insert_iterator<Container>(c);
}