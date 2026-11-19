#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t > 0){
        t--;

        int n;
        cin >> n;

        int maxCount = 0;
        int count = 0;

        int x;
        for (int i = 0; i < n; i++){
            cin >> x;

            if (x == 0){
                count++;
            }
            else if (count > maxCount){
                maxCount = count;
                count = 0;
            }
            else {
                count = 0;
            }

        }

        if (count > maxCount){
            maxCount = count;
        }

        cout << maxCount << endl;

    }
}
