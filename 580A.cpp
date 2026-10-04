#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int count = 1;
    int maxCount = count;
    int x;
    int prev;

    cin >> prev;

    for(int i = 1; i < n; i++){
        cin >> x;

        if (prev > x){
            count = 1;
        }
        else {
            count++;
        }

        if (count > maxCount){
            maxCount = count;
        }

        prev = x;
    }

    cout << maxCount << endl;

}
