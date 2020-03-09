// DO NOT modify any code in this question other than 
// the ones explicitly asked in comments below,
// Changing the code int other parts of this code will be considered
// as cheating and will be treated as such.

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;
int main() {
   double* p;
   int i;
   // dynamically allocate an array of 300 doubles and save the address in "p"
  
p=new double[301];



   for (i = 0; i < 300; i++) {
      p[i] = i * 1.1;
   }
   for (i = 0; i < 300; i++) {
     cout << p[i] << " ";
     if ((i + 1) % 15 == 0) cout << endl;
   }
   // free the memory pointed by p

delete p;




   return 0;
}

