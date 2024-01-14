#include <iostream>
#include<cstdlib>
#include<ctime>
/**
cstdlib is declared to use the function srand and rand
**/
using namespace std;

//MODULO,SIZEOF,SRAND
// IF you want to make a couple of digits a float you can add .0f to it or you just say .f . If you just add .0 to it it's a double.
int main()
{

   // modulo is used to get the remainder of two division
   //variables use the ram in the pc
   int x = 7;
   double y = 7;
   float z = 7;
   /*cout << x % 2 << endl;
   */

   /**
   to know the amount of space occupied in the RAM by a variable you type
   **/
   //cout << sizeof(y) << endl;

   //RAND and SRAND
   // rand is the function that gets the numbers stored in the cstdlib. It uses the computer time to get these numbers from the cstdlib.
   //ctime library helps the program take the computer time
   //srand is a function that picks a random number depending on a dependence.

   srand(time(0));
   cout << rand() << endl;
   cout << rand() << endl;
   cout << rand() << endl;
   cout << rand() << endl;



}





