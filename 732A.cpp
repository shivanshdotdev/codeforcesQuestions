#include <iostream>
using namespace std;

int main(){
    int price, coin;
    cin >> price >> coin;

    int qty = 1;

    while (true){
        int whole_total = qty * price;
        if (whole_total % 10 == 0){
            break;
        }
        else if ((whole_total - coin) % 10 == 0){
            break;
        }
        qty++;
    }

    cout << qty;

}
