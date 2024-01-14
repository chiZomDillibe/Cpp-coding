#include <iostream>

using namespace std;

int addition(int firstvalue,int secondvalue)
{
    return firstvalue +  secondvalue;
}
int subtraction (int firstvalue,int secondvalue)
{
    return firstvalue - secondvalue;
}

int multiplicaton(int firstvalue,int secondvalue)
{
    return firstvalue*secondvalue;
}
int division (int firstvalue ,int secondvalue)
{
    return  firstvalue*secondvalue;
}




int main()
{
   int x;
   int y;
   int whattodo;

   cout<<"enter first value"<<endl;
   cin>>x;

   cout<<"enter second value"<<endl;
   cin>>y;

  cout<<"what do you want to do"<<endl;
  cout<<"enter 1 addition , 2 for subtraction, 3 for multiplication, 4 for division"<<endl;
  cin>>whattodo;

  if(whattodo == 1)
  {
      cout<< "sum =" << addition(x,y)<<endl;
  }

   if(whattodo == 2)
  {
      cout<< "subrtraction =" << subtraction(x,y)<<endl;
  }

    if(whattodo == 3)
  {

      cout<<"multiplication =" << multiplicaton(x,y)<<endl;
  }

  if (whattodo == 4)
  {
      cout << "division" << division(x,y)<<endl;
}

}
