/*
    https://open.kattis.com/problems/pairingsocks
    Time: O(n)
    Space: O(n)
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, val, moves = 0;
    cin >> n;
    stack<int> stk;

    for(int i=0; i<2*n; i++){
        cin >> val;
        if(!stk.empty() && stk.top() == val){
            stk.pop();
        }
        else{
            stk.push(val);
        }
        moves++;
    }
    stk.size() ? cout << "Impossible": cout << moves;

    return 0;
}
