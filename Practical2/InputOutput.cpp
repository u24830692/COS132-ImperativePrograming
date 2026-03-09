#include "InputOutput.h"

using namespace std;

void printOut(std::string message)
{
    cout << message << endl; 
}

std::string askForStringInput(std::string message)
{
    /*Place your variable creation code here*/
    string userInput;

    /*Place your printout code here*/
    cout << message << endl;

    /*Place your getline code here*/
    getline (cin, userInput);

    /*Return the user input here*/
    return userInput; 
}

int askForIntInput(std::string message)
{
    /*Place your variable creation code here*/
    string userInput;

    /*Place your printout code here*/
    cout << message << endl;

    /*Place your getline code here*/
    getline (cin, userInput);

    /*Convert your string to int using strToInt and return it*/
   return strToInt (userInput);
}

float askForFloatInput(std::string message)
{
    /*Place your variable creation code here*/
    string userInput;

    /*Place your printout code here*/
    cout << message << endl;

    /*Place your getline code here*/
    getline (cin, userInput);

    /*Convert your string to float using strToFloat and return it*/
    return strToFloat (userInput);
}
