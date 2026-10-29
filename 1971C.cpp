#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t > 0){
        t--;

        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (a > b){
            int tmp = a;
            a = b;
            b = a;
        }

        if (c > d){
            int tmp = c;
            c = d;
            d = tmp;
        }

        if (c > a && c < b){
            if (d > b || (12 - d) < a){
                cout << "YES" << endl;
                continue;
            }
        }

        cout << "NO" << endl;
    }
}
