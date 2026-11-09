#include <iostream>
using namespace std;

bool isPrime(int num){
    for (int i = 2; i * i <= num; i++){
        if (num % i == 0){
            return false;
        }
    }

    return true;
}

bool almostPrime(int num){
    int count = 0;

    for (int i = 2; i * i <= num; i++){
        if (num % i == 0){
            if (isPrime(i)){
                count++;
            }

            if (num / i != i && isPrime(num / i)){
                count++;
            }
        }
    }

    if (count == 2){
        return true;
    }
    else {
        return false;
    }
}

int main(){
    int n;
    cin >> n;

    int count = 0;
    for (int i = 2; i <= n; i++){
        if (almostPrime(i)){
            count++;
        }
    }

    cout << count << endl;
}
