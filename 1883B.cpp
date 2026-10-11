#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    for (int z = 0; z < t; z++){

        int l, td;
        cin >> l >> td;

        int finalLetterCount = l - td;

        string s;
        cin >> s;

        int hash[26] = {0};

        for (char c : s){
            hash[c - 97]++;
        }

        int count = 0;

        if (finalLetterCount % 2 == 0){
            // int because any number other than 0 is true and 0 is false 
            int canIgnore = td;
            bool isPalindrome = true;
            // iterate over each element
            for (int i : hash){
                // if the number is odd 
                // to check if it can be removed
                if (i % 2 != 0){
                    // if can ignore it, basically trying to remove the odd numbers
                    if (canIgnore){
                        canIgnore--; // lower the canIgnore limit 
                        continue; // skip the current iteration now
                    }
                    // if cannot ignore now and the number was odd 
                    // the size of string is even and hence cannot be a palindrome
                    // print NO and move to the next itearation
                    isPalindrome = false;
                    cout << "NO" << endl;
                    break;
                }
            }

            // if no odd number found or bad odd numbers are removed 
            // each character now has even frequency
            // hence the string can be palindrome 
            if (isPalindrome){
                cout << "YES" << endl;
            }
        }
        else {
            // same logic as above but since humko ek odd number hi chaiye rest even to hum 
            // jitte remove karne allowed hai usse ek etc odd number ignore kardenge and BOOM
            // yaar ho gya ab zyada dimaag na poocho 
            int canIgnore = td + 1;
            bool isPalindrome = true;
            for (int i : hash){
                if (i % 2 != 0){
                    if (canIgnore){
                        canIgnore--; 
                        continue; 
                    }
                    isPalindrome = false;
                    cout << "NO" << endl;
                    break;
                }
            }

            if (isPalindrome){
                cout << "YES" << endl;
            }
        }
    }
}
