#include <iostream>
using namespace std;

char max_occ_ch(string s) {
    if (s.empty()) return '\0';

    int occ_of_ch[26] = {0};

    for (char ch : s) {
        occ_of_ch[ch - 'a']++;
    }

    int maxi = -1, ans = 0;

    for (int i = 0; i < 26; i++) {
        if (occ_of_ch[i] > maxi) {
            maxi = occ_of_ch[i];
            ans = i;
        }
    }

    return ans + 'a';
}

int main() {
    cout << max_occ_ch("test") << endl;
}