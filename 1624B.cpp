/*
 * So an AP in case of three numbers a, b and c is when 
 * b - a = c - b 
 *
 * in this problem, we have to check if multiplying only one of the number can lead to the creation of AP or not 
 *
 * So lets assume the multiple is m 
 * and there are 3 numbers, and multiplication can be done to only one 
 * hence there can be three individual cases 
 *
 * THE CONDITION to satisfy in those cases is as follows 
 *
 * CASE 1) 
 * b - am = c - b
 * CASE 2)
 * bm - a = c - bm
 * CASE 3)
 * b - a = cm - b
 *
 * now one more constraint in the question is... m must be a positive integer which means must be greater than 0
 *
 * after playing with equation, shifting elements, in all of the cases, the value of m can be derived by using 
 *
 * CASE 1)
 * 2b - c / a
 * CASE 2)
 * c + a / 2b
 * CASE 3)
 * 2b - a / c
 *
 * if the any of the above generated a positive integer, it means the a, b, c after multiplication can become an AP
 *
 * to check if the number is integer or not... it can checked whether the division is generating 0 remainder or not 
 * and then if 0, it means its an integer... and then if the multiplier is greater than 0, and its a integer... hence 
 * its a POSITIVE INTEGER 
 * and voillaaaaaa!!!!
 * the question is done 
 */

#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t > 0){
        t--;

        int a, b, c;
        cin >> a >> b >> c;

        bool possible = false;
        
        if ((2*b - c) % a == 0){
            if ((2*b - c) / a > 0){
                possible = true;
            }
        }
        if ((c + a) % (2 * b) == 0){
            if ((c + a) / (2 * b) > 0){
                possible = true;
            }
        }
        if ((2*b - a) % c == 0){
            if ((2*b - a) / c > 0){
                possible = true;
            }
        }

        if (possible){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}
