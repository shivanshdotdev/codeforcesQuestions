#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    if (n == 1){
        cout << 1 << endl;
        return 0;
    }
    
    int bookMark = 0;
    int pos = bookMark + 1;

    while (true){

        if (s.length() < 2){
            break;
        }

        if (s[bookMark] != s[pos]){
            s.erase(bookMark, 2);
            bookMark--;

            if (bookMark < 0){
                bookMark = 0;
            }

            pos = bookMark + 1;
            continue;
        }

        bookMark++;
        pos = bookMark + 1;

        if (bookMark >= s.length() - 2){
            break;
        }

    }

    if (s.length() > 1 && bookMark == 0 && s[bookMark] != s[pos]){
            s.erase(bookMark, 2);
    }

    cout << s.length() << endl;
}
