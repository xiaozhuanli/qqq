// DO NOT modify any code in this question other than 
// the ones explicitly asked in comments below,
// Changing the code int other parts of this code will be considered
// as cheating and will be treated as such.

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
   int num = 50;
   char str[50] = "right";
   cout << "*";
   // print "num" in 20 spaces left justified (without printing spaces)
   cout.width(20);
   cout.setf(ios::left);
   cout << num;

   cout << "*" << endl << "*";
   // print "str" in 20 spaces right justified (without printing spaces)
   cout.width(20);
   cout.setf(ios::right);
   cout << str;

   cout << "*" << endl;
   return 0;
}

