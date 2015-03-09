#include <iostream>
#include <cctype>
#include <iterator>
#include <functional>
#include <algorithm>
#include <string>
#include "print.h"
#include "compose22.h"
using namespace std;

int main(){
	string s("Internationalization");
	string sub("Nation");
	string::iterator pos;
	pos = search(s.begin(), s.end(),sub.begin(),sub.end(), compose_f_gx_hy(equal_to<int>(), ptr_fun(std::toupper), ptr_fun(std ::toupper)));
	if (pos != s.end()){
		cout << "\"" << sub << "\" is part of \"" << s << "\"" << endl;
	}
}