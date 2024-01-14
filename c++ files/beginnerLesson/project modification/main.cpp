#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  srand(time(0));
  int magicnumber = rand() % 11;
  int x;

   backhere:
  cout<<"enter the magic number"<<endl;
cin>>x;

  if (x == magicnumber)
  {
      cout<<"you won"<<endl;}
      else
      {
          cout<<"try again the magic number was  "<< magicnumber<<"  "<<endl;

      }
      if ( x != magicnumber)
      {
          goto backhere;
      }


}
