#include <iostream>

using namespace std;

int main()
{
  float variables;
  float numberofinput=0;
  float total =0;

  cout<< "enter first value"<<endl;
  cin>>variables;

  while(numberofinput < 1000)
  {
      numberofinput++;
      total += variables;

      cout<<"enternext value"<<endl;
      cin>>variables;
       if(variables == -1)
  {
      break;
  }

  }
  cout<<"sum is"<<total<<endl;
 cout<<"mean is"<<total/numberofinput<<endl;
}









