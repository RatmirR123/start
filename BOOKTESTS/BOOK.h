#pragma once

#include <iostream>
#include <string>
using namespace std;

int getkategoria();

int correctInput()
{
    int member;
    cin >> member;
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(32767, '\n');
        cout << "Repeat one more time\n";
        cin >> member;
    }
    return member;
}

double correctInputd()
{
    double member;
    cin >> member;
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(32767, '\n');
        cout << "Repeat one more time\n";
        cin >> member;
    }
    return member;
}

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
        year = correctInput();
        while (year < 0) {
            cout << "Repeat one more time\n";
            year = correctInput();

        }
        cout << "Enter price\n";
        price = correctInputd();
        while (price < 0)
        {
            cout << "Repeat one more time\n";
            price = correctInputd();
        }

        cout << "Enter category\n";
        kategoria = getkategoria();
    }

    void outputbook() {
        cout << "-------------\n";
        cout << "Author - " << author << "\n";
        cout << "Book title - " << zaglavie << "\n";
        cout << "Year -  " << year << " year" << "\n";
        cout << "Price - " << price << " rub" << "\n";
        if (kategoria == 1) {
            cout << "Category - Fantastic\n";
        }
        else if (kategoria == 2) {
            cout << "Category - Horror\n";
        }
        else if (kategoria == 3) {
            cout << "Category - Adventure\n";
        }
        else if (kategoria == 4) {
            cout << "Category - Love Novels\n";
        }
        else if (kategoria == 5) {
            cout << "Category - Detectives\n";
        }
        else if (kategoria == 6) {
            cout << "Category - History\n";
        }
        else if (kategoria == 7) {
            cout << "Category - Psychology\n";
        }
        cout << "-------------\n";
        cout << "\n";
        cout << "\n";
    }
};

void kategoria() {
    std::cout << "1 - Fantastic" << '\n';
    std::cout << "2 - Horror" << '\n';
    std::cout << "3 - Adventure" << '\n';
    std::cout << "4 - Love Novels\n";
    std::cout << "5 - Detectives\n";
    std::cout << "6 - History\n";
    std::cout << "7 - Psychology\n";
}

int getkategoria() {
    kategoria();
    int answer;
    cin >> answer;
    while (answer < 1 or answer > 6) {
        cout << "Repeat one more time\n";
        cin >> answer;
    }
    if (answer == 1) {
        return 1;
    }
    else if (answer == 2) {
        return 2;
    }
    else if (answer == 3) {
        return 3;
    }
    else if (answer == 4) {
        return 4;
    }
    else if (answer == 5) {
        return 5;
    }
    else {
        return 6;
    }
}
