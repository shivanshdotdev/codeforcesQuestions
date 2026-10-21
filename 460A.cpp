#include <iostream>
using namespace std;

int main(){
    int n, m;

    cin >> n >> m;

    if (n < m){
        cout << n << endl;
        return 0;
    }

    int d = 0;
    while (true){
        n = n - m + 1;
        d += m;;
        if (n < m){
            break;
        }
    }

    d += n;

    cout << d << endl;

}
