#pragma once

#include <fstream>
#include <iostream>
#include <string>
#include "Library.h"
#include "BOOK.h"
using namespace std;


void input_file(Library& lib)
{
    std::ifstream in;
    in.open("/Users/ratmirromanov/Desktop/input.txt");
    while (!in.eof()){
        BOOK book;
        in >> book.author >> book.zaglavie >> book.year >> book.price >> book.kategoria;
        for (int i = 0; i < book.author.size(); i++)
        {
            if (book.author[i] == '_'){
                book.author[i] = ' ';
            }
        }
        for (int i = 0; i < book.zaglavie.size(); i++)
        {
            if (book.zaglavie[i] == '_'){
                book.zaglavie[i] = ' ';
            }
        }
        lib.addBook(book);
    }
    in.close();
}

void output_file(Library& l)
{
    std::ofstream out;
    out.open("/Users/ratmirromanov/Desktop/input.txt");
    for (int i = 0; i < l.sizeLib; i++){
        for (int j = 0; j < l.lib[j].author.size(); j++)
        {
            if (l.lib[i].author[j] == ' '){
                l.lib[i].author[j] = '_';
            }
        }
        for (int e = 0; e < l.lib[e].zaglavie.size(); e++)
        {
            if (l.lib[i].zaglavie[e] == ' '){
                l.lib[i].zaglavie[e] = '_';
            }
        }
        out << l.lib[i].author << " " << l.lib[i].zaglavie << " " << l.lib[i].year << " " << l.lib[i].price << " " << l.lib[i].kategoria;
        out << "\n";
    }
    out.close();
}





void vvodMenu() {
    cout << "This is the card index menu\n";
    cout << "\n";
    cout << "Enter function\n";
    cout << "\n";
    cout << "1 - Add a book\n";
    cout << "2 - List books\n";
    cout << "3 - Remove a book from the list\n";
    cout << "4 - sort the list by price\n";
    cout << "5 - sort the list by year\n";
    cout << "6 - sort the list by title\n";
    cout << "7 - sort the list by author\n";
    cout << "8 - sort the list by category\n";
    cout << "9 - \n";
    cout << "10 - \n";
    cout << "11 - exit\n";
}


void MainMenu(Library lib) {

    int answer;
    
    cin >> answer;
    while (answer != 11) {

        if (answer == 1) {
            BOOK a;
            a.inputbook();
            lib.addBook(a);
        }
        else if (answer == 2) {
            if (lib.sizeLib == 0) {
                cout << "-----------------------------\n";
                cout << "Total books in the list = " << lib.sizeLib << "\n";
                cout << "-----------------------------\n";
                cout << "\n";
                cout << "------------------------------\n";
                cout << "There are no books on the list\n";
                cout << "------------------------------\n";
                cout << "\n";
            }
            else {
                cout << "-----------------------------\n";
                cout << "Total books in the list = " << lib.sizeLib << "\n";
                cout << "-----------------------------\n";
                cout << "\n";
                cout << "\n";
                for (int i = 0; lib.sizeLib > i; i++) {
                    cout << "BOOK NUMBER " << i + 1 << "\n";
                    lib.lib[i].outputbook();
                    cout << "\n";
                }
            }
        }
        else if (answer == 3) {
            int ch;
            cout << "which book do you want to delete?\n";
            cout << "\n";
            cin >> ch;
            lib.deleteBook(ch);
        }
        else if (answer == 4) {
            lib.sortLib_price();
        }
        else if (answer == 5){
            lib.sortLib_year();
        }
        else if (answer == 6){
            lib.sortLib_zagl();
        }
        else if (answer == 7){
            lib.sortLib_author();
        }
        else if (answer == 8){
            lib.sortLib_kateg();
        }
        else if(answer == 9){
            input_file(lib);
        }
        else if(answer == 10){
            output_file(lib);
        }

        cout << "Enter function\n";
        cin >> answer;
        cout << "\n";
        
    }
}
