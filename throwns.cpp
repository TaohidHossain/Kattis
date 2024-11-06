/*
    https://open.kattis.com/problems/throwns
    Time: O(n)
    Space: O(1)
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> commands;
    int n, k;
    cin >> n >> k;

    for(int i=0; i<k; i++) {
        cin.ignore();
        if(cin.peek() == 'u') {
            string undo;
            cin >> undo;
            int drops;
            cin >> drops;
            for(int i = 0; i < drops; i++) {
                commands.pop_back();
            }
        }
        else {
            int n;
            cin >> n;
            commands.push_back(n);
        }
    }
    int spot = 0;
    for(int& x: commands){
        spot += x;
        spot %= n;
        if(spot < 0) spot += n;
    }
    cout << spot;
    return 0;
}
