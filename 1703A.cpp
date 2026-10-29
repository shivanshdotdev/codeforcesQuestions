#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    string s;
    for (int k = 0; k < t; k++){
        cin >> s;

        int sum = 0;

        for (int i = 0; i < 3; i++){
            if (s[i] > 97){
                s[i] -= 32;
            }
        }

        if (s[0] == 'Y' && s[1] == 'E' && s[2] == 'S'){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}
