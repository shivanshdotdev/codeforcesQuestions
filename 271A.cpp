#include <iostream>
#include <unordered_set>

using namespace std;

bool haveDistinctDigits(int year){
    unordered_set<int> uniqueNums;

    while (year > 0){
        uniqueNums.insert(year % 10);
        year /= 10;
    }

    return uniqueNums.size() == 4;
}

int main(){
    int year;
    cin >> year;

    while (true){
        year++;
        if (haveDistinctDigits(year)){
            break;
        }
    }

    cout << year << endl;

}
