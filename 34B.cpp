#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);

    int sum = 0;
    int count = 0;
    for (int i : arr){
        if (i < 0){
            sum += i * -1;
            count++;
        }

        if (count >= m){
            break;
        }
        
    }
    cout << sum << endl;
}
