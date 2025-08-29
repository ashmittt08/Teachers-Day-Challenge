#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int count = 1;
    for (int i = 0; i < (int)s.size() - 1; i++) {
        if (s[i] == s[i + 1]) {
            count++;
            if (count >= 7) {
                cout << "YES" << endl;
                return 0;
            }
        } else {
            count = 1;
        }
    }

    cout << "NO" << endl;
    return 0;
}
