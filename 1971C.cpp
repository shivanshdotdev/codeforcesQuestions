#include <iostream>
#include <utility>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t > 0){
        t--;

        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (a > b){
            swap(a, b);
        }

        if (c > d){
            swap(c, d);
        }

        /*
         * An optimization approach will be using XOR or exclusive OR which returns true if only 
         * one of the value is true else false.
         *
         * normalization will be done as above 
         * then we will check if both c and d exist between a and b or outside both a and b 
         * as done with the for each loop with the variable c_there and d_there 
         *
         * the optimization approach and below approach is same with less lines of code and easier to understand
         * with space being O(1) instead of creating a valid hands array 
         *
         * c_there = a < c < b;
         * d_there = a < d < b;
         *
         * now if (c_there ^ d_there) cout << "YES" else cout << "NO"
         * 
         * if c and d both are between a an b means TRUE 
         * or both are outside a and b means FALSE 
         * NO will be printed 
         * ELSE if only one is true...then YES will be printed 
         */

        int n = b - a - 1;
        
        if (n == 0){
            cout << "NO" << endl;
            continue;
        }

        int arr[n]; // instead of standard array, use a vector for dynamic size array, gcc allows but portability maybe a issue 
        int pos = 0;
        for (int i = a+1; i < b; i++){
            arr[pos++] = i;
        }

        bool c_there = false;
        bool d_there = false;
        for (int i : arr){
            if (i == c){
                c_there = true;
            }
            if (i == d){
                d_there = true;
            }
        }

        if ((c_there && !d_there) || (!c_there && d_there)){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}
