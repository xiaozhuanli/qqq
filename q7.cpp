// DO NOT modify any code in this question other than 
// the ones explicitly asked in comments below,
// Changing the code int other parts of this code will be considered
// as cheating and will be treated as such.

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class MyInt {
   int *m_data;
public:
   MyInt() :m_data(new int(200)) {}
   ~MyInt() { delete m_data; }
   
   MyInt& print() {	   
	   cout << *m_data << endl;
	   return *this;
   }   
};

int main() {
   MyInt I;
   I.print().print().print();
   return 0;
}


/* output:

*/
