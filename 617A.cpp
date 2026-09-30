#include <iostream>
using namespace std;

int main(){
    int cor;
    cin >> cor;

    int step = 0;

    while (cor > 0){
        cor = cor - 5;
        step++;
    }

    cout << step;
}
