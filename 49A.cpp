#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    if (s[s.size() - 1] != '?'){
        string bridge;
        while (true){
            cin >> bridge;
            if (bridge[bridge.size() - 1] == '?'){
                s = s + " " + bridge;
                break;
            }

            s = s + " " + bridge;
        }
    }


    int i = 2;

    char last = s[s.size() - i];

    while (last == ' '){
        i++;
        last = s[s.size() - i];
    }

    if (last >= 65 && last <= 90){
        last += 32;
    }

    switch (last) {
        case 97:
        case 101:
        case 105:
        case 111:
        case 117:
        case 121:
            cout << "YES" << endl;
            break;
        default:
            cout << "NO" << endl;
            break;

    }
}
