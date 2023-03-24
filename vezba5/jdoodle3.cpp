//Filip Shtrkovski INKI874
#include <iostream>
using namespace std;

void add(void* x, void* y, void* result) {
    int* a = (int*)x;
    int* b = (int*)y;
    int* c = (int*)result;
    *c = *a + *b;
}

void subtract(void* x, void* y, void* result) {
    int* a = (int*)x;
    int* b = (int*)y;
    int* c = (int*)result;
    *c = *a - *b;
}

float divide(int x, int y) {
    return (float)x / (float)y;
}

double power(int x, int y) {
    return pow((double)x, (double)y);
}

int main() {
    int x = (int)'R';
    int y = (int)'M';
    int result;

    add(&x, &y, &result);
    cout << "Sobiranje: " << result << endl;

    subtract(&x, &y, &result);
    cout << "Odzemanje: " << result << endl;

    float divisionResult = divide(x, y);
    cout << "delenje: " << divisionResult << endl;

    double powerResult = power(x, y);
    cout << "stepen: " << powerResult << endl;

    return 0;
}

    return 0;
}