#include <iostream>
using namespace std;

int main() {
    int X;
    cin >> X;
    cout << (X >= 90 ? "A" :
             X >= 80 ? "B" :
             X >= 70 ? "C" :
             X >= 60 ? "D" : "F");
    return 0;
}
