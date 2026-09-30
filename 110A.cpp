#include <iostream>
using namespace std;

int main(){
    long long num;
    cin >> num;

    int count = 0;

    while (num > 0){
        int rem = num % 10;
        num /= 10;

        if (rem == 4 || rem == 7){
            count++;
        }
    }

    if (count == 4 || count == 7){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    cout << endl;
}
