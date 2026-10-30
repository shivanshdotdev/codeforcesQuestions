#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    string s;
    int sum = 0;
    for (int x = 0; x < t; x++){
        cin >> s;

        switch (s[0]) {
            case 'T':
                sum += 4;
                break;
            case 'C':
                sum += 6;
                break;
            case 'O':
                sum += 8;
                break;
            case 'D':
                sum += 12;
                break;
            case 'I':
                sum += 20;
                break;
        }

    }

    cout << sum << endl;
}
