/*
 * The Pattern is that... no matter the starting position is and no matter the sequence 
 * every fourth numbered jump is leading back to the first or starting position 
 * hence no matter how many jumps done... the changes are being made in the last 3 jumps 
 * so in the total number of numbers.... how many 4 jumps are done? n % 4 
 * how many total number of jumps are done after the above ? (n % 4) * 4 
 * now just make those remaining jumps based on the rules and its done 
 */


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
