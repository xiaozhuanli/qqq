// DO NOT modify any code in this question other than 
// the ones explicitly asked in comments below,
// Changing the code int other parts of this code will be considered
// as cheating and will be treated as such.

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class MyInt {
	int* m_data;
public:
	MyInt(int val) {
		m_data = new int(val);
	}
	~MyInt() {
		cout << "deleting: " << *m_data << endl;
		delete m_data;
	}
	// Create an assignment operator to set one MyInt to another
	// and return a reference of the current object
	MyInt& operator=(const MyInt& myint) {
		delete m_data;
		m_data = new int(*myint.m_data);
		return *this;
	}
};


int main() {
   MyInt I(200), J(300), K(400);
   for(int i=0;i<100000;i++)
      K = J = I;
   return 0;
}
