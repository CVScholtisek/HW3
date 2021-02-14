/* HW3
 * Clint Scholtisek CS F201 FXA
 * Jon Genetti
 * Prompts user for string and for size of box repeatedly*/

#include <iostream>
#include "boxer.h"
using namespace std;

int main() {

    while (true) {
        //Prompts user for string
        string stringinput;
        cout << "Type a string with no spaces (Or type exit to quit):";
        cin >> stringinput;

        //Checks for exit command
        if (stringinput == "exit") {
            return 0;
        }

        //Prompts user for size integer
        int thick;
        cout << "How thick should the box be? (integer):";
        cin >> thick;

        //run box function
        box(stringinput, thick);
    }
    return 0;
}
