#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int maxElement = *max_element(arr, arr+n);
    int minElement = *min_element(arr, arr+n);

    int maxIndex, minIndex;

    for (int i = 0; i < n; i++){
        if (arr[i] == maxElement){
            maxIndex = i;
            break;
        }
    }

    for (int i = n - 1; i >= 0; i--){
        if (arr[i] == minElement){
            minIndex = i;
            break;
        }
    }

    cout << maxIndex << " " << minIndex << endl;

}
