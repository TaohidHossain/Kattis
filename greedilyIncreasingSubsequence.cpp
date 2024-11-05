/*
    https://open.kattis.com/problems/greedilyincreasing
    Time: O(n)
    Space: O(n)
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<int> result;
    int prev, current;
    cin >> prev;
    result.push_back(prev);
    for(int i=1; i<n; i++){
        cin >> current;
        if(current > prev){
            result.push_back(current);
            prev = current;
        }
    }
    cout << result.size() << "\n";
    for(auto &x: result) cout << x << " ";

    return 0;
}
