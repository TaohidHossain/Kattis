/*
    https://open.kattis.com/problems/baloni
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
    int answer = 0;

    vector<int> count(1000001);

    for(int i=0; i<n; i++){
        int val;
        cin >> val;
        count[val]++;
        if(count[val + 1] == 0){
            answer++;
        }
        else{
            count[val + 1]--;
        }
    }
    cout << answer;

    return 0;
}
