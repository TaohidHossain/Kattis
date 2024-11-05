/*
    https://open.kattis.com/problems/jollyjumpers
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
    while(cin >> n){
        vector<int> arr(n);
        for(auto &x: arr) cin >> x;

        vector<bool> seen(n, false);

        for(int i=1; i<n; i++){
            int diff = abs(arr[i] - arr[i-1]);
            if( diff >= 0 && diff < n ) seen[diff] = true;
        }
        bool works = true;

        for(int i=1; i<n; i++) works &= seen[i];
        works ? cout << "Jolly\n": cout << "Not Jolly\n";
    }
    return 0;
}
