#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t > 0){
        t--;

        int n, k;
        cin >> n >> k;
        
        bool exist = false;

        for (int i = 0; i < n; i++){
            int x;
            cin >> x;

            if (x == k){
                exist = true;
            }
        }

        if (exist){
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}
