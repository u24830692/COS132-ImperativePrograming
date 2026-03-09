#include <iostream>
#include "InputOutput.h"
#include "Receipt.h"
#include "SpotifyInterface.h"

using namespace std;

int main()
{
    cout << "Spec Example" << endl;
    string receipt = formReceipt("TheWeeknd", "BlindingLights",
                                 "AfterHours", "312", "200.5", "Pop");
    cout << "Pretty Print" << endl;
    prettyPrint(receipt);
    cout << "Summary Print" << endl;
    summaryPrint(receipt);

    cout << "User Input" << endl;
    receipt = formReceiptFromUserInput();
    cout << "Pretty Print" << endl;
    prettyPrint(receipt);
    cout << "Summary Print" << endl;
    summaryPrint(receipt);
}
