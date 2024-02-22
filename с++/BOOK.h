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

    void inputbook() {
        cout << "Enter The author\n";
        getline(cin, author);
        if (author == "") {
            getline(cin, author);
        }
        cout << "Enter book title\n";
        getline(cin, zaglavie);
        cout << "Enter the year the book was published\n";
        cin >> year;
        while (year < 0) {
            cout << "Repeat one more time\n";
            cin >> year;
        }
        cout << "Enter price\n";
        cin >> price;
        
        cout << "Enter category\n";
        kategoria = getkategoria();
    }

    void outputbook() {
        cout << "-------------\n";
        cout << "Author - " << author << "\n";
        cout << "Book title - " << zaglavie << "\n";
        cout << "Year -  " << year << "\n";
        cout << "Price - " << price << "\n";
        cout << "Category - " << kategoria << "\n";
        cout << "-------------\n";
        cout << "\n";
        cout << "\n";
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
        cout << "Repeat one more time\n";
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
