#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    for (int x = 0; x < t; x++){
        int n, q;
        cin >> n >> q;

        int cumulative_sum[n];
        int persistent_sum = 0;
        for (int i = 0; i < n; i++){
            int x;
            cin >> x;
            persistent_sum += x;
            cumulative_sum[i] = persistent_sum;
        }

        for (int y = 0; y < q; y++){
            int sum = persistent_sum;
            
            int l, r, k;
            cin >> l >> r >> k;

            sum = sum + ((r - l + 1) * k);
            if (l == 1){
                sum = sum - cumulative_sum[r-1]; // l = 1 means index 0 and before that... there is no element hence nothing to subtract hence subtracting 0 or nothing 
            }
            else{
                sum = sum - (cumulative_sum[r-1] - cumulative_sum[l-2]); // prefer the video URL attached above to understand it better
            }

            if (sum % 2 == 0){
                cout << "NO" << endl;
            }
            else {
                cout << "YES" << endl;
            }
        }


    }
}
