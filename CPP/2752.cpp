#include <iostream>
using namespace std;

int main() {
    int X, Y, Z;
    cin >> X >> Y >> Z;

    
    cout << (X < Y && X < Z ? X : (Y < X && Y < Z ? Y : Z)) << " "
         << (X < Y && X > Z || X > Y && X < Z ? X : (Y < X && Y > Z || Y > X && Y < Z ? Y : Z)) << " "
         << (X > Y && X > Z ? X : (Y > X && Y > Z ? Y : Z))
         << endl;
}
