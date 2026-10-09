/*
 *  if n = 2^a x 3^b and there are no other prime factors 
 *  then minimum operations will be 2b - a.
 *
 *  multiplying with 2 increase the number of 2 or a by one.
 *  dividing by 6 decrease the number of 2 and 3 factors OR a and b by one.
 *
 *  if in factors, number of 2s are more than number of 3s, then its not possible to reach one 
 *  if there is any other factor during prime factorization other than 2 or 3, then too it is not possible 
 *
 *  else the above formula can calculate the answer of minimum operations 

https://youtu.be/REfZBz42osI

 */


#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int step;
    bool possible;
    for (int i = 0; i < n; i++){
        possible = true;
        int num;
        cin >> num;

        if (num < 1){
            cout << -1 << endl;
            continue;
        }
        else if (num == 1){
            cout << 0 << endl;
            continue;
        }

        int number_of_factor_2 = 0;
        int number_of_factor_3 = 0;

        while (num > 1){
            if (num % 2 == 0){
                number_of_factor_2++;
                num /= 2;
            }
            else if (num % 3 == 0){
                number_of_factor_3++;
                num /= 3;
            }
            else {
                possible = false;
                break;
            }
        }

        if (!possible || number_of_factor_2 > number_of_factor_3){
            cout << -1 << endl;
        }
        else {
            step = 2 * number_of_factor_3 - number_of_factor_2;
            cout << step << endl;
        }


    }
}
