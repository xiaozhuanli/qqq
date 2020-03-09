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
   MyInt(int val){
      m_data = new int(val);
   }
   ~MyInt() {
      cout << "deleting: " << *m_data << endl;
      delete m_data;
   }
   // create a copy constructor for this dynamic class
	MyInt(const MyInt& myint){
		m_data = new int;
		*m_data = *myint.m_data;
	}
};


void get(MyInt mi) {
   cout << "Getting MyInt!" << endl;
}

int main() {
   MyInt I(200);
   get(I);
   return 0;
}


/* output:
Getting MyInt!
deleting: 200
deleting: 200

*/
