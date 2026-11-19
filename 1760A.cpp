#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t > 0){
        t--;

        int arr[3];

        cin >> arr[0];
        cin >> arr[1];
        cin >> arr[2];

        sort(arr, arr+3);

        cout << arr[1] << endl;
    }
}
