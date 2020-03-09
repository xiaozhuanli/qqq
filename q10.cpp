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
   MyInt(int val=0){
      m_data = val;
   }
   void prn() {
      cout << m_data << endl;
   }

   // overload the integer cast operator so when
   // MyInt is casted to an integer, m_data is retruned
   operator int() {
	   return m_data;
   }
};


void showInt(int val) {
   cout << val << endl;
}

int main() {
   MyInt I(200), J;

   cout << int(I) << endl;
   showInt(J);

   return 0;
}

