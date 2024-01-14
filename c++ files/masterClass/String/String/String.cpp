#include <iostream>
using namespace std;

int main()
{
	string name1 = "programming is good";
	string name2 = "beautiful";
	name1.swap(name2);
	cout << "after swapping " << endl;
	cout << "name 1 contains: " << name1<< endl;
	cout << "name 2 contains: " << name2 << endl;
	/*string name;
	cout << "what is your name?" << endl;
	getline(cin,name);
	//name = "pde programming academy";

	int numberOfCharacterInName = name.size();
	
	cout << "number of characters in name is : " << numberOfCharacterInName << endl;
	*/
}
