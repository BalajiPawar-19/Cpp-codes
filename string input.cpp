#include <iostream>
#include <string>
using namespace std;


int main() 
{
    cout << "Enter a string:" << endl;
    string userInput;
    getline(cin, userInput);
    cout << "Your string is: " << userInput << endl;
    return 0;
}
