/*
    https://open.kattis.com/problems/numbertree
    Time: O(n)
    Space: O(1)
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int h;
    string path;
    cin >> h >> path;
    int  root = (1 << (h+1)) - 1;
    int offset = 0;

    for(char& c: path){
        offset *= 2;
        c == 'L' ? offset++ : offset += 2;
    }
    cout << root - offset;
    return 0;
}
