#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    string t;
    
    cin >> s >> t;

    int len = s.length() > t.length() ? t.length() : s.length();

    for (int i = 0; i < len/2; i++){
        char temp = t[i];
        t[i] = t[len - i - 1];
        t[len - i - 1] = temp;
    }

    if (s == t){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    
}
