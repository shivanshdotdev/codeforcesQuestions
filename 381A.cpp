#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int l = 0;
    int r = n - 1;

    bool sereja_turn = true;
    int sereja_sum = 0;
    int dima_sum = 0;

    while (l <= r){
        int max;
        if (arr[l] > arr[r]){
            max = arr[l++];
        }
        else {
            max = arr[r--];
        }

        if (sereja_turn){
            sereja_sum += max;
        }
        else {
            dima_sum += max;
        }

        sereja_turn = !sereja_turn;
    }

    cout << sereja_sum << " " << dima_sum << endl;

}
