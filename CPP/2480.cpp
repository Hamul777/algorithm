#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int x, y, z;
    vector<int> arr;
    cin >> x >> y >> z;
    arr.push_back(x);
    arr.push_back(y);
    arr.push_back(z);
    sort(arr.begin(), arr.end());

    if(x == y && x == z) {
        cout << 10000 + x * 1000;
    }

    else if(x == y || x == z || y == z) {
        int same = x == y ? x : x == z ? x : y;
        cout << 1000 + same * 100;
    }

    else {
        cout << arr[2] * 100; 
    }

    return 0;
}
