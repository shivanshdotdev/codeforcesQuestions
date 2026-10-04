#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;

    int i = 0;
            
    if (s.length() < 3){
        cout << s << endl;
        return 0;
    }


    while (i < (s.length() - 2)){
        if (s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
            s.replace(i,3," ");
            i = 0;
            continue;
        }

        i++;
    }

    for (int i = 0; i < s.length(); i++){
        if (s[i] == ' '){
            s.erase(i,1);
        }

        if (s[i] != ' '){
            break;
        }
    }

    for (int i = s.length() - 1; i >= 0; i--){
        if (s[i] == ' '){
            s.erase(i,1);
        }

        if (s[i] != ' '){
            break;
        }
    }

    for (int i = 0; i < s.length(); i++){
        if (s[i] == ' ' && s[i+1] == ' '){
            s.erase(i,1);
        }
    }

    cout << s << endl;
}
