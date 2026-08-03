#include <iostream>
using namespace std;
int mayor(int *a, int *b) {
    if(*a > *b)
        return *a;
    else
        return *b;
}
int main() {
    int x = 15;
    int y = 9;
    cout << mayor(&x, &y);
    return 0;
}