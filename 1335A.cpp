#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t > 0){
        t--;

        int n;
        cin >> n;

        if (n <= 2){
            cout << 0 << endl;
            continue;
        }

        int x = n / 2;

        if (n % 2 == 0){
            x--;
        }

        cout << x << endl;
    }
}
