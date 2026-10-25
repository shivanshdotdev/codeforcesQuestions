#include <iostream>
#include <string>
using namespace std;

int sum(int n){
    int sum = 0;

    while (n > 0){
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int main(){
    int t;
    cin >> t;

    string s;

    for (int i = 0; i < t; i++){
        cin >> s;
        
        int num = stoi(s);

        int lastThree = num % 1000;
        int firstThree = num / 1000;

        if (sum(lastThree) == sum(firstThree)){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}
