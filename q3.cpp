// DO NOT modify any code in this question other than 
// the ones explicitly asked in comments below,
// Changing the code int other parts of this code will be considered
// as cheating and will be treated as such.

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;
int main() {
   int* p;
   // dynamically allocate an integer and save its address in "p"
  p = new int;

   
   
   *p = 200;
   cout << *p << endl;
   // free the memory pointed by p
 
 delete p;
 
 


   
   return 0;
}

