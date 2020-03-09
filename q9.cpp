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
   // overload the "+=" operator to add an int value to m_data
   // and return the reference of the current object
MyInt& operator+=(int addValue){
	m_data += addValue;
	return *this;
	}
};


int main() {
   MyInt I(200), J;

   J = I += 10;

   I.prn();
   J.prn();

   return 0;
}

