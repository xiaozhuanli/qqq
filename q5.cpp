// DO NOT modify any code in this question other than 
// the ones explicitly asked in comments below,
// Changing the code int other parts of this code will be considered
// as cheating and will be treated as such.

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class MyInt {
   int m_data = 100;
public:
   // create a public member function called "print"
   // that prints "m_data" and goes to new line

void print(){
cout<<m_data<<endl;
}






};


int main() {
   MyInt I;
   I.print();
   return 0;
}

