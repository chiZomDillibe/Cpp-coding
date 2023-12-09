#include <iostream>

using namespace std;

int main()
{
    float inputs[1000];
    int numberOfInputs = 0;
    float total = 0;

    cout<<"enter the first value" <<endl;
    cin >> inputs[numberOfInputs];

    while(numberOfInputs < 1000)
    {
        total = total + inputs[numberOfInputs];
        numberOfInputs++;
        cout<< "enter the next value or enter -1 to end the proogram"<<endl;
        cin >> inputs[numberOfInputs];

        if(inputs[numberOfInputs] == -1)
        {
            break;
        }

    }
    cout << "the total of the value is :"<<total << endl;
    cout << "the number of inputs is = " << numberOfInputs << endl;
    cout << "the average of the value is :" << total / numberOfInputs << endl;
    return 0;
}
