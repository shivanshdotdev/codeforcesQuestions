#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    long long n, k, x;
    long long max, min, total, remaining;
    for (int p = 0; p < t; p++){
        cin >> n >> k >> x;
        total = (n * (n + 1)) / 2;
        remaining = ((n - k) * (n - k + 1)) / 2;
        max = total - remaining;
        min = (k * (k + 1)) / 2;

        // cout << "Max: " << max << " MIN: " << min << " Total: " << total << " Remaining: " << remaining << endl;

        if (x > min-1 && x < max+1){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    
}
