//Filip Shtrkovski INKI874
#include <iostream>
#include <string>
using namespace std;

void replaceNameAndSurname(string &ime, string &prezime, string simboli) {
    int imeNovo = ime.length();
    int prezimeNovo = prezime.length();

    for (int i = 0; i < 4 && i < imeNovo; i++) {
        ime[i] = simboli[i % simboli.length()];
    }

    for (int i = 0; i < 4 && i < prezimeNovo; i++) {
        prezime[i] = simboli[i % simboli.length()];
    }
}

int main() {
    string ime = "Filip";
    string prezime = "Shtrkovski";

    cout << "Vasheto ime e: " << ime << endl;
    cout << "Vasheto prezime e: " << prezime << endl;

    string simboli = "";
    cout << "Izberi gi simbolite za zamena: ";
    getline(cin, simboli);

    replaceNameAndSurname(ime, prezime, simboli);

    cout << "Vasheto imeneto ime e: " << ime << endl;
    cout << "Vasheto izmeneto prezime e: " << prezime << endl;

    return 0;
}
