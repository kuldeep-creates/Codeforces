 
#include <iostream>
using namespace std;
 
void solve() {
    int position;
    cin>>position;
    int div=position/5;
    int rem=position%5;
    if(rem<5 && rem >0){
        cout<<div+1;
        return;
    }
    cout<<div;
    return;
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    // cin >> t;
    t = 1;
    while (t--) {
        solve();
    }
    return 0;
}