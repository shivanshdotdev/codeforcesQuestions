#include <iostream>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;

    long long half;
    if (n % 2 == 0){
        half = n / 2;
    }
    else {
        half = (n / 2) + 1;
    }

    if (half >= k){
        // odd 
        cout << (k * 2) - 1 << endl;
    }
    else {
        // even
        cout << (k - half) * 2 << endl;

    }
}
