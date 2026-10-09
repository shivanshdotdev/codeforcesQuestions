#include <iostream>
using namespace std;

int removingLastDigit(int num){
    return num / 10;
}

int removingSecondLast(int num){
    int lastTwo = num % 100;
    num /= 100;

    int last = lastTwo % 10;
    num = num * 10 + last;

    return num;
}

int main(){
    int n;
    cin >> n;

    if (n > 0){
        cout << n << endl;
        return 0;
    }

    int last_removed = removingLastDigit(n);
    int last_second_removed = removingSecondLast(n);

    if (last_second_removed > last_removed){
        cout << last_second_removed << endl;
        return 0;
    }

    cout << last_removed << endl;
}
