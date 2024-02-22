#pragma once

#include <iostream>
#include <string>
#include "Library.h"
#include "BOOK.h"

using namespace std;


void vvodMenu() {
    cout << "This is the card index menu\n";
    cout << "\n";
    cout << "Enter function\n";
    cout << "\n";
    cout << "1 - Add a book\n";
    cout << "2 - List books\n";
    cout << "3 - Remove a book from the list\n";
    cout << "4 - exit\n";
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
            if (lib.sizeLib == 0){
                cout << "Total books in the list = " << lib.sizeLib << "\n";
                cout << "\n";
                cout<<"------------------------------\n";
                cout << "There are no books on the list\n";
                cout << "------------------------------\n";
                cout << "\n";
            }
            else{
                cout << "Total books in the list = " << lib.sizeLib << "\n";
                cout << "\n";
                lib.printLib();
            }
        }
        else if (answer == 3) {
            int ch;
            cin >> ch;
            lib.deleteBook(ch);
        }
        cout << "Enter function\n";
        cin >> answer;
    }
}
