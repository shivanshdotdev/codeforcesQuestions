#include <iostream>
#include <string> 

using namespace std;

int main(){
    int t;
    cin >> t;

    while (t > 0){
        t--;

        int n;
        string s;

        cin >> n >> s;

        int manual_switch = 0;
        
        char pen_write = 'R';

        for (int i = 0; i < n; i++){

            if (pen_write != s[i]){

                manual_switch++;

                if (s[i] == 'R'){
                    pen_write = 'B';
                }
                else {
                    pen_write = 'R';
                }

            }

            else if (pen_write == 'R'){
                pen_write = 'B';
            }
            else{
                pen_write = 'R';
            }

        }

        cout << manual_switch << endl;
    }
}
