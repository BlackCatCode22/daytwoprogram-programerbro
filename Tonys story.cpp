#include <iostream>

using namespace std;

int main()
{
   string charactersname = "Jerry";
    int charactersage;
    charactersage = 41;
    cout << "Around the corner of the store you can find " << charactersname << endl;
    cout << charactersname << "was about the age of " << charactersage << endl;
    cout << "Being " << charactersage << " did not sit well with " << charactersname << endl;
    // this is a comment.
    // this input section prompts the user for two whole (integer) numbers.

    int num1 = 0;
    int num2 = 0;
    int theSum = 0;

    // Get the first number from the user
    cout << "\n Please enter the first number...";
    cin >> num1;

    // Get the second number from the user
    cout << "\n Please enter the second number...";
    cin >> num2;

    // Add the two numbers...
    theSum = num1 + num2;

    // output the sum!
    cout << "\n\n The Sum is " << theSum <<endl;
    // input numbers for multiply
    int num3 = 0;
    int num4 = 0;
    int final =0;
    // enter the third number form the user
    cout << "\n Please enter the third number...";
    cin >> num3;

    // get the fourth number from the user
    cout << "\n Please enter the fourth number...";
    cin >> num4;
    // multiply numbers
    final = num3 * num4;
    // output
    cout << "\n\n final number is " << final <<endl;


    return 0;
}
