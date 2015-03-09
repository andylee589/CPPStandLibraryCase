#include "icstring.h"
using namespace std;

int main(){
	icstring s1("hallo");
	icstring s2("otto");
	icstring s3("haLLo");

	cout << std::boolalpha;
	cout << s1 << " == " << s2 << " : " << (s1 == s2) << endl;
	cout << s1 << " == " << s3 << " : " << (s1 == s3) << endl;

	icstring::size_type index = s1.find("All");
	if (index != icstring::npos){
		cout << "index of \"All\" in \"" << s1 << "\": " << index << endl;
	}
	else {
		cout << "not found";
	}
}