#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    bool isMagic = true;
    while (n > 0){
        if (n % 1000 == 144){
            n /= 1000;
        }
        else if (n % 100 == 14){
            n /= 100;
        }
        else if (n % 10 == 1){
            n /= 10;
        }
        else {
            isMagic = false;
            break;
        }
    }

    if (isMagic){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}
