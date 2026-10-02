#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int l, e, current = 0, max = 0;
    for (int i = 0; i < n; i++){
        cin >> l >> e;

        current = current - l + e;
        if (current > max){
            max = current;
        }
    }

    cout << max << endl;
}
