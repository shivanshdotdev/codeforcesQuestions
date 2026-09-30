#include <iostream>
using namespace std;

int main(){
    int cost_of_first, money_have, wants_to_buy;
    cin >> cost_of_first >> money_have >> wants_to_buy;

    int total_money_required = 0;
    for (int i = 1; i <= wants_to_buy; i++){
        total_money_required += i * cost_of_first;
    }

    if (total_money_required > money_have){
        cout << total_money_required - money_have;
    }
    else {
        cout << 0;
    }
}
