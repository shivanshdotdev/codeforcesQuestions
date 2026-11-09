#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t > 0){
        t--;

        int n;
        cin >> n;

        string s;
        cin >> s;

        int x = 0;
        int y = 0;
        bool passed = false;

        for (char c : s){
            if (c == 'L'){
                x--;
            }
            else if (c == 'U'){
                y++;
            }
            else if (c == 'D'){
                y--;
            }
            else if (c == 'R'){
                x++;
            }

            if (x == 1 && y == 1){
                passed = true;
                break;
            }
        }

        if (passed) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }

    }
}
