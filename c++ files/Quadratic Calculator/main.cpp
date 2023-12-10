#include <iostream>
#include <cmath>// this library is important when building a game or mathematical calculator
using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int Bnegative;
    int Bsquare;
    int ac4;
    int insideRoot;
    int squareRoot;
    int numeratorNegative;
    int numeratorPositive;
    int a2;
    int answerNeg;
    int answerPos;



    cout << "Enter the value for a" << endl;
    cin >> a;

    cout << "Enter the value for b" << endl;
    cin >> b;

    cout << "Enter the value for c" << endl;
    cin >> c;

    Bnegative = -b;
    Bsquare = pow(b,2); // this is same as b squared
    ac4 = a * c * 4;
    insideRoot = Bsquare - ac4;
    squareRoot = sqrt(insideRoot);
    numeratorNegative = Bnegative - squareRoot;
    numeratorPositive = Bnegative + squareRoot;
    a2 = a * 2;
    // FINAL CALCULATION
    answerNeg = numeratorNegative / a2;
    answerPos = numeratorPositive / a2;

    cout << "The answer to the quadratic equation is"<< answerNeg << " and  "<< answerPos << endl;


}
