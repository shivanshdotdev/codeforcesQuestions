#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t > 0){
        t--;

        string s; 
        cin >> s;

        bool alice_turn = true;

        for (int i = 1; i < s.size(); i++){
            if (s[i] != s[i-1]){
                s.erase(i-1, 2);
                i = 0;
                alice_turn = !alice_turn;
            }
        }

        if (alice_turn){
            cout << "NET" << endl;
        }
        else {
            cout << "DA" << endl;
        }
    }
}
