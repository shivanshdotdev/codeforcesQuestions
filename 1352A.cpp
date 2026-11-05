#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t > 0){
        t--;

        int n;
        cin >> n;

        string to_be_printed = "";

        int i = 1;
        int digits = 0;
        while (n > 0){
            int x = n % 10;
            if (x != 0){
                to_be_printed += to_string(i * x);
                to_be_printed += " ";
                digits++;
            }
            n /= 10;
            i *= 10;
        }

        cout << digits << endl;
        cout << to_be_printed << endl;


    }
}
