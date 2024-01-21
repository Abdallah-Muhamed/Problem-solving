#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main() {
    string s, t;
    cin >> s >> t;

   unordered_map<char, int> Scnt, Tcnt;
    for (char c : s) Scnt[c]++;
    for (char c : t) Tcnt[c]++;

    for (char c : "atcoder") {
        int M = std::max(Scnt[c], Tcnt[c]);
        if (Scnt['@'] < M - Scnt[c] || Tcnt['@'] < M - Tcnt[c]) {
            std::cout << "No" << std::endl;
            return 0;
        }
        Scnt['@'] -= M - Scnt[c];
        Scnt[c] = M;
        Tcnt['@'] -= M - Tcnt[c];
        Tcnt[c] = M;
    }

    cout << (Scnt == Tcnt ? "Yes" : "No") << endl;

    return 0;
}
