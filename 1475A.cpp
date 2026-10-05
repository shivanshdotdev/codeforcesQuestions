// ANY NUMBER which is not a result of 2^n has an odd number as one of its divisor

#include <cmath>
#include <iostream>
using namespace std;

bool hasFactorOnly2(long long num){
    if (num == 1){
        return true;
    }

    if (num % 2 != 0){
        return false;
    }


    return hasFactorOnly2(num / 2);
}

void hasOddDivisor(long long x){
            
    if (x % 2 != 0){
        cout << "YES\n";
        return;
    }

    if (x <= 2){
        cout << "NO\n";
        return;
    }


    if (hasFactorOnly2(x)){
        cout << "NO\n";
        return;
    }
    else {
        cout << "YES\n";
        return;
    }
}

int main(){
    int n;
    cin >> n;

    long long x;

    for (int i = 0; i < n; i++){
        cin >> x;
        hasOddDivisor(x);
    }
}
