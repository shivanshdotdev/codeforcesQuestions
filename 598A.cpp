#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t > 0){
        t--;

        long long n;
        cin >> n;

        long long sum = (n * (n + 1)) / 2;

        long long mul = 1;

        while (mul <= n){
            sum = sum - (2 * mul);
            mul *= 2;
        }

        cout << sum << endl;

    }
}
