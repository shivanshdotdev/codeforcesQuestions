#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int k;
    cin >> k;

    int arr[12];

    for (int i = 0; i < 12; i++){
        cin >> arr[i];
    }

    sort(arr, arr + 12);

    int count = 0;
    for (int i = 12 - 1; i >= 0; i--){

        if (k <= 0){
            break;
        }

        k = k - arr[i];
        count++;
    }

    if (k > 0){
        cout << -1 << endl;
        return 0;
    }

    cout << count << endl;
}
