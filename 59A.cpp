#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    int len = s.length();

    int cap_count = 0;
    int sml_count = 0;

    for (char c : s){
        if (c < 95){
            cap_count++;
        }
        else{
            sml_count++;
        }
    }

    if (sml_count >= cap_count){
        for (int i = 0; i < len; i++){
            if (s[i] < 95){
                s[i] += 32;
            }
        }
    }
    else {
        for (int i = 0; i < len; i++){
            if (s[i] > 95){
                s[i] -= 32;
            }
        }
    }

    cout << s << endl;
}
