#include <limits>
#include <iostream>
using namespace std;
class float_ref{
private:
	float value;
public:
	float_ref(float val) :value(val){};
	friend ostream& operator<<(ostream& out, const float_ref& rhs){
		out << rhs.value;
		return out;
	}
};
namespace std{
	template<> class numeric_limits<float_ref>{
	public:
		static const bool is_sepecialized = true;
		inline static float_ref min() throw(){
			return float_ref(0);
		}
		inline static float_ref max() throw(){
			return float_ref(3.40282347E+30F);
		}
		static const int digits = 24;
		static const int digits10 = 6;
		
		static const bool is_signed = true;
		static const bool is_integer = false;
		static const bool is_exact = false;
		static const bool is_bounded = true;
		static const bool is_modulo = false;
		static const bool is_iec559 = true;
	};
}

int main(){
	cout << "max(short): " << numeric_limits<short>::max()<<endl;
	cout << "max(float):" << numeric_limits<float_ref>::max() << endl;
}