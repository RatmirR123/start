#pragma once

#include <iostream>
#include <string>
#include "Library.h"
#include "BOOK.h"

using namespace std;


void vvodMenu() {
    cout << "Vvedite fun\n";
    cout << "1-dobal knigu\n";
    cout << "2-vivecti spicok knig\n";
    cout << "3-udalit knigu\n";
}


void MainMenu(Library lib) {

    int answer;
    cin >> answer;
    while (answer != 4) {

        if (answer == 1) {
            BOOK a;
            a.inputbook();
            lib.addBook(a);
        }
        else if (answer == 2) {
            lib.printLib();
        }
        else if (answer == 3) {
            int ch;
            cin >> ch;
            lib.deleteBook(ch);
        }
        cout << "Vvedite fun\n";
        cin >> answer;
    }
}