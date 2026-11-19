#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t > 0){
        t--;

        long long n;
        cin >> n;

        cout << (n-1) * -1 << " " << n << endl;
    }
}
