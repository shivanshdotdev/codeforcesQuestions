#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t > 0){
        t--;

        long long pos, n;
        cin >> pos >> n;

        long long jump_remaining = n % 4;
        long long jumps_done = (n / 4) * 4;

        for (int i = 0; i < jump_remaining; i++){
            jumps_done++;
            if (pos % 2 == 0){
                pos -= jumps_done;
            }else{
                pos += jumps_done;
            }
        }

        cout << pos << endl;
    }
}
