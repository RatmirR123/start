#pragma once

#include <iostream>
#include <string>
using namespace std;


int getkategoria();


struct BOOK {
    string author;
    string zaglavie;
    int year;
    double price;
    int kategoria;
    int c = 0;

    void inputbook() {
        cout << "Vvedite avtora\n";
        getline(cin, author);
        if (author == "") {
            getline(cin, author);
        }
        cout << "Vvedite nazvanie\n";
        getline(cin, zaglavie);
        cout << "Vvedite got\n";
        cin >> year;
        while (year < 0) {
            cout << "Vidi eche raz\n";
            cin >> year;
        }
        cout << "Vvedite zenu\n";
        cin >> price;
        cout << "Vvedite kategoria\n";
        kategoria = getkategoria();
    }

    void outputbook() {
        cout << "author - " << author << "\n";
        cout << "zaglivie - " << zaglavie << "\n";
        cout << "year -  " << year << "\n";
        cout << "price - " << price << "\n";
        cout << "kategoria - " << kategoria << "\n";
    }
};


void kategoria() {
    std::cout << "1 - Fantastic" << '\n';
    std::cout << "2 - Horror" << '\n';
    std::cout << "3 - Adventure" << '\n';
}

int getkategoria() {
    kategoria();
    int answer;
    cin >> answer;
    while (answer < 1 or answer > 3) {
        cout << "vedi eche raz";
        cin >> answer;
    }
    if (answer == 1) {
        return 1;
    }
    else if (answer == 2) {
        return 2;
    }
    else
        return 3;
}
