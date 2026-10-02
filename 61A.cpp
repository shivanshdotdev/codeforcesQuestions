#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1;
    string s2;

    cin >> s1 >> s2;

    int len = s1.length();
    string ans = "";

    for (int i = 0; i < len; i++){
        if (s1[i] == s2[i]){
            ans += '0';
        }
        else {
            ans += '1';
        }
    }

    cout << ans << endl;
}


