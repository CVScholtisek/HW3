/* HW3
 * Clint Scholtisek CS F201 FXA
 * Jon Genetti
 * Prompts user for string and for size of box repeatedly*/

#include <iostream>
#include "boxer.h"
using namespace std;

int main() {

    string stringinput;
    cout << "Type a string:";
    cin >> stringinput;

    int thick;
    cout << "How thick should the box be? (integer):";
    cin >> thick;

    box(stringinput, thick);

    return 0;
}
