// DO NOT modify any code in this question other than 
// the ones explicitly asked in comments below,
// Changing the code int other parts of this code will be considered
// as cheating and will be treated as such.

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class MyInt {
   int m_data;
public:
   MyInt(int val){
      m_data = val;
   }
   // overload the unary "!" operator to return true if m_data is zero
   // and return false if m_data is not zero
   bool operator!() const{
	   bool iszero = true;
	   if (m_data != 0) {
		   iszero = false;
	   }
	   return iszero;
   }
};


void checkMyInt(const MyInt& mi, const char* name) {
   cout << name << " is " << (!mi ? "zero" : "not zero") << endl;
}

int main() {
   MyInt I(200), J(0);

   checkMyInt(I, "I");
   checkMyInt(J, "J");
   return 0;
}

