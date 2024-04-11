#include <iostream>
#include <random>

using namespace std;

int main(){
 int roll = 0;
 int frequency0 = 0;
 int frequency1 = 0;
 

 cin >> roll;

 for (int i = 0; i < roll; i++){
    int random = rand();
    if(rand() % 2 == 0){
        frequency0++;
    }else{
        frequency1++;
    }
 }

 cout << "앞면"<< frequency0 << "\n뒷면"<< frequency1 << endl;
}