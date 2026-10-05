#include <algorithm>
#include <climits>
#include <iostream>
using namespace std;

int main(){
    int wants, shop_has;
    cin >> wants >> shop_has;

    int arr[shop_has];
    int smallestDiff = INT_MAX;

    if (shop_has < wants){
        cout << 0 << endl;
        return 0;
    }

    for (int i = 0; i < shop_has; i++){
        cin >> arr[i];
    }

    sort(arr, arr+shop_has);

    if (shop_has == wants){
        cout << arr[wants - 1] - arr[0] << endl;
        return 0;
    }

    for (int i = 0; i <= shop_has - wants; i++){
        int diff = arr[i+(wants - 1)] - arr[i];

        if (smallestDiff > diff){
            smallestDiff = diff;
        }
    }

    cout << smallestDiff << endl;
}
