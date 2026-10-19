#include <cmath>
#include <iostream>
using namespace std;

int main(){
    // x = kitti candies khareedi on day 1
    // k = number of days 
    // n = number of wrappers found

    int t;
    cin >> t;

    for (int p = 0; p < t; p++){

        double n;
        cin >> n;

        int k = 1;
        double x;

        double consolidation = 1;

        while (true){
            consolidation += pow(2, k);
          
            x = n / consolidation;

            if (x == floor(x)){
                break;
            }
            
            k++;
        }

        cout << static_cast<int>(x) << endl;

    }
}
