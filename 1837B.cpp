#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    int n;
    string s;

    for (int x = 0; x < t; x++){

        cin >> n >> s;

        int count = 1;
        int longestCount = 0;

        char prev = s[0];

        char curr;
        for (int i = 1; i < n; i++){
            curr = s[i];

            if (curr == prev){
                count++;
            }
            else if (longestCount < count) {
                longestCount = count;
                count = 1;
            } 
            else {
                count = 1;
            }

            prev = curr;
        }

        if (longestCount < count){
            longestCount = count;
        }

        longestCount++;

        cout << longestCount << endl;

    }
}
