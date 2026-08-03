#include <iostream>
using namespace std;
int main() {
    int x = 20;
    int *p = &x;
    *p = 50
    cout << x;
    return 0;
}