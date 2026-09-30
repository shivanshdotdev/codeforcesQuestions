#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n+1];
    for (int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    int ans_arr[n];
    for (int i = 1; i <= n; i++){
        ans_arr[arr[i]] = i;
    }

    for (int i = 1; i <= n; i++){
        cout << ans_arr[i] << " ";
    }
}
