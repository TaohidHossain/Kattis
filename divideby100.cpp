/*
    https://open.kattis.com/problems/divideby100
    Time: O(n)
    Space: O(1)
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2;
    cin >> s1 >> s2;

    // pop trailing zeros
    while(s2.back() == '0' && s1.back() == '0'){
        s1.pop_back();
        s2.pop_back();
    }

    if(s2.length() == 1){
        cout << s1;
        return 0;
    }
    ll len1 = s1.length(), len2 = s2.length();
    if(len1 < len2){
        ll len = len2 - len1 - 1;
        cout << "0.";
        for(int i=0; i<len; i++){
            cout << '0';
        }
        cout << s1;
    }
    else{
        ll len = len1 - len2 + 1;
        for(int i=0; i<len; i++){
            cout << s1[i];
        }
        cout << '.';
        for(int i=len; i<len1; i++){
            cout << s1[i];
        }
    }
    return 0;
}
