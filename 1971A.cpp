#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t > 0){
        t--;

        int x, y;
        cin >> x >> y;

        if (x < y){
            cout << x << " " << y << endl;
        }
        else {
            cout << y << " " << x << endl;
        }
    }
}
