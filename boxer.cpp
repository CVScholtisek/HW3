//
// Created by Clinterpottrmus on 2/13/2021.
//

#include <iostream>
using namespace std;

void topbotbox(string stringinput, int thick) {     //Creates large group of asterisks at top and bottom of box

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

void MiddleboxNostring(string stringinput, int thick) {     //Creates single line with empty space in middle
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

void MiddleboxString(string stringinput, int thick) {       //Creates single line with string in middle
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

//Completes box and puts pieces (functions) together

void box(string stringinput, int thick){

    //Loops topbotbox() for the amount of thickness for top
    for (int i = 0; i < thick; i++) {
        topbotbox(stringinput, thick);
    }

    //Prints empty line above string
    MiddleboxNostring(stringinput, thick);

    //Prints string line
    MiddleboxString(stringinput, thick);

    //Prints empty line below string
    MiddleboxNostring(stringinput, thick);

    //Loops topbotbox() for the amount of thickness for bottom
    for (int i = 0; i < thick; i++) {
        topbotbox(stringinput, thick);
    }
}