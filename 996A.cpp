#include <iostream>
using namespace std;

int main(){
    int money;
    cin >> money;

    int billCount = 0;

    while (money > 0){
        int x = 0;
        if (money >= 100){
            x = money / 100;
            money = money - (x * 100);
            billCount += x;
        }
        else if (money >= 20){
            x = money / 20;
            money = money - (x * 20);
            billCount += x;
        }
        else if (money >= 10){
            x = money / 10;
            money = money - (x * 10);
            billCount += x;

        }
        else if (money >= 5){
            x = money / 5;
            money = money - (x * 5);
            billCount += x;

        }
        else if (money >= 1){
            billCount += money;
            money = 0;
        }
    }

    cout << billCount << endl;
}
