#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    for (int k = 0; k < t; k++){
        int n, mad;
        cin >> n >> mad;


        int arr[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        if (n <= 1){
            cout << 0 << endl;
            continue;
        }

        sort(arr, arr+n);

        int currentGroupSize = 1;
        int maxGroupSize = 0;

        for (int i = 1; i < n; i++){
            if (arr[i] - arr[i - 1] <= mad){
                currentGroupSize++;
            }
            else {

                if (currentGroupSize > maxGroupSize){
                    maxGroupSize = currentGroupSize;
                }

                currentGroupSize = 1;
            }
        }

        if (currentGroupSize > maxGroupSize){
            maxGroupSize = currentGroupSize;
        }

        cout << n - maxGroupSize << endl;
    }
}
