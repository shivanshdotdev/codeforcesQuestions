#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    char prev = s[0];
    char curr;
    int count = 1;
    int len = s.length();

    for (int i = 1; i < len; i++){
        curr  = s[i];
        if (prev == curr){
            count++;
        }
        else{
            count = 1;
        }

        if (count >= 7){
            cout << "YES" << endl;
            return 0;

        }

        prev = curr;
    }

    cout << "NO" << endl;
}
