#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t > 0){
        t--;

        int n;
        cin >> n;

        int sum = 0;

        sum += n % 10;
        n /= 10;

        sum += n;

        cout << sum << endl;
    }
}
