#include <iostream>
using namespace std;

void hasOddDivisor(long long n){

    long long divisor;
    for (int i = 2;i < n; i++){
        divisor = n / i;
        if (divisor % 2 != 0){
            cout << divisor << " Odd" << endl;
            break;
        }
        else {
            cout << divisor << " Even" << endl;
        }
    }
}

int main(){
    int t;
    // cin >> t;

    long long n;

    for (int i = 0; i < 1; i++){
        cin >> n;
        hasOddDivisor(n);
    }
}
