#include <iostream>
using namespace std;

int main(){
    long long l, b, s;
    cin >> l >> b >> s;

    long long t1;
    long long t2;

    t1 =  l / s;
    l =  l % s;
    t2 =  b / s;
    b =  b % s;

    if (l > 0){
        t1++;
    }
    if (b > 0){
        t2++;
    }

    cout << t1*t2;
}
