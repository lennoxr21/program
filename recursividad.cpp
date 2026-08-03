#include <iostream>
using namespace std;
void contar(int n) {
    if(n == 0)
        return;
    cout << n << endl;
    contar(n - 1);
}
int main() {
    contar(5);
    return 0;
}