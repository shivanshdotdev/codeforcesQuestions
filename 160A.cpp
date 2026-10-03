#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int oldSum = 0;
    int x;
    int arr[n];

    for (int i = 0; i < n; i++){
        cin >> x;
        arr[i] = x;
        oldSum += x;
    }

    sort(arr, arr + n);
    
    int count = 0;
    int newSum = 0;

    for (int i = (n-1); i >= 0; i--){
        x = arr[i];
        newSum += x;
        oldSum -= x;

        count++;

        if (newSum > oldSum){
            break;
        }
    }

    cout << count << endl;
}

