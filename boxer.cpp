//
// Created by Clinterpottrmus on 2/13/2021.
//

#include <iostream>
using namespace std;

void topbotbox(string stringinput, int thick) {

    //Side asterisks combined
    for (int i = 0; i < thick; i++){
        cout << "**";
    }

    //Middle asterisks
    for (int i = 0; i < stringinput.length() + 2; i++){
        cout << "*";
    }
    cout << endl;

}

void MiddleboxNostring(string stringinput, int thick) {
    //First wall
    for (int i = 0; i < thick; i++){
        cout << "*";
    }

    //Middle empty space
    for (int i = 0; i < stringinput.length() + 2; i++){
        cout << " ";
    }

    //Second wall
    for (int i = 0; i < thick; i++){
        cout << "*";
    }
    cout << endl;
}

void MiddleboxString(string stringinput, int thick) {
    //First wall
    for (int i = 0; i < thick; i++){
        cout << "*";
    }

    //Middle string
    cout << " " << stringinput << " ";

    //Second wall
    for (int i = 0; i < thick; i++){
        cout << "*";
    }
    cout << endl;
}

void box(string stringinput, int thick){
    for (int i = 0; i < thick; i++) {
        topbotbox(stringinput, thick);
    }
    MiddleboxNostring(stringinput, thick);
    MiddleboxString(stringinput, thick);
    MiddleboxNostring(stringinput, thick);
    for (int i = 0; i < thick; i++) {
        topbotbox(stringinput, thick);
    }
}