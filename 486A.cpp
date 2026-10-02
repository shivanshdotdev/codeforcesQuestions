#include <iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long ans;
    if (n % 2 == 0){
        ans = n / 2;
    }
    else {
        ans = n / 2;
        ++ans *= -1;
    }

    cout << ans << endl;
}
