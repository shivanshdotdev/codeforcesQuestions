#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t > 0){
        string k;
        cin >> k;

        char keyboard[27];
        for (int i = 1; i < 27; i++){
            keyboard[i] = k[i];
        }

        string s;
        cin >> s;

        int n = s.size();

        int prev;

        for (int i = 1; i < 27; i++){
            if (s[0] == keyboard[i]){
                prev = i;
            }
        }

        int sum = 0;

        for (int i = 1; i < n; i++){
            for (int j = 1; j < 27; j++){
                if (s[i] == k[j]){
                    int x = i - prev;
                    prev = i;
                    if (x < 0){
                        x = x * -1;
                    }
                    sum += x;
                }
            }
        }

        cout << sum << endl;



    }
}
