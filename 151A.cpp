#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int number_of_friends, number_of_bottles, liters_of_drink_in_1_bottle, number_of_limes, slices_possible, grams_of_salt_found, drink_needed_in_ml, salt_needed_in_grams;
    cin >> number_of_friends >> number_of_bottles >> liters_of_drink_in_1_bottle >> number_of_limes >> slices_possible >> grams_of_salt_found >> drink_needed_in_ml >> salt_needed_in_grams;

    int total_drink = number_of_bottles * liters_of_drink_in_1_bottle;
    int total_slices = number_of_limes * slices_possible;

    int toasts_with_drink = total_drink / drink_needed_in_ml;
    int toasts_with_salt = grams_of_salt_found / salt_needed_in_grams;
    int toasts_with_slices = total_slices;

    int max_toasts_together_with_all = min({toasts_with_salt, toasts_with_drink, toasts_with_slices});

    int per_friend = max_toasts_together_with_all / number_of_friends;

    cout << per_friend << endl;
}
