//Filip SHtrkovski INKI874
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    const char* pesna = "Bum bum";
    const char* avtor = "Suzana Gavazova";
    const char* peac = "Suzana Gavazova";
    char* p = (char*)peac;
    
    cout <<"*******************************"<<endl;
    cout << "Pesna: "<< avtor <<" "<<pesna<<endl;
    cout << "Prviot karakter: " << *p << endl;
    cout << "Adresa na prviot karakter: " << (void*)p << endl;
    cout << "Celiot string: " << peac << endl;

    cout <<"*******************************"<<endl;

    int broj_mesta = strlen(avtor) + 1;
    p += broj_mesta;

    cout << "Potrebni mesta: " << broj_mesta << endl;
    cout << "Prviot karakter posle premestuvanjeto: " << *p << endl;
    cout << "Adresa od koja pocnuva segashna sodrzina " << (void*)p << endl;
    cout << "Delot od stringot posle premestuvanjeto: " << p << endl;

    return 0;
}
