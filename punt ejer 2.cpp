#include <iostream>
using namespace std;
int suma(int *a, int *b) {
    return *a + *b;
}
int main() {
    int x = 5;
    int y = 8;
    cout << suma(&x, &y);
    return 0;
}