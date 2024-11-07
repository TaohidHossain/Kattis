/*
    https://open.kattis.com/problems/teque
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> commands;
    int n;
    cin >> n;
    deque<int> l1, l2;
    for(int i=0; i<n; i++) {
        string cmd; int val;
        cin >> cmd >> val;
        if(cmd == "push_back"){
            l2.push_back(val);
            // balance
            if(l1.size() < l2.size()){
                l1.push_back(l2.front());
                l2.pop_front();
            }
        }
        else if(cmd == "push_front"){
            l1.push_front(val);
            // balance
            if(l1.size() - l2.size() > 1){
                l2.push_front(l1.back());
                l1.pop_back();
            }
        }
        else if(cmd == "push_middle"){
            l1.push_back(val);
            //balance
            if(l1.size() - l2.size() > 1){
                l2.push_front(l1.back());
                l1.pop_back();
            }
        }
        else if(cmd == "get"){
            if(l1.size() - 1 < val){
                cout << l2[val - l1.size()] << "\n";
            }
            else
                cout << l1[val] << "\n";
        }
    }
    return 0;
}
