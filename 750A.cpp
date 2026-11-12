#include <iostream>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    k = 240 - k;
    int count = 0;

    for (int i = 1; i <= n; i++){
        int time_need = 5 * i;

        if (time_need <= k){
            count++;
            k -= time_need;
        }
        else {
            break;
        }

    }

    cout << count << endl;
}
