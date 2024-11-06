/*
    https://open.kattis.com/problems/evenup
    Time: O(n)
    Space: O(n)
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, val;
    cin >> n;
    stack<int> stk;

    for(int i=0; i<n; i++){
        cin >> val;
        val %= 2;
        if(!stk.empty() && stk.top() == val){
            stk.pop();
        }
        else
            stk.push(val);
    }
    cout << stk.size();

    return 0;
}
