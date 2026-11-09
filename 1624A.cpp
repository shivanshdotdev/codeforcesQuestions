#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t > 0){
        t--;

        int n;
        cin >> n;

        int x;
        cin >> x;

        int max = x;
        int min = x;
        n--;

        while (n > 0){
            n--;

            cin >> x;

            if (max < x){
                max = x;
            }

            if (min > x){
                min = x;
            }
        }

        cout << max - min << endl;
    }
}
