#include <iostream>
#include <vector>

using namespace std;
 
void solve() {
    int a,b;
    cin>>a;
    cin>>b;
    if(a<b){
        cout<<a<<" "<<b<<endl;
        return ;
    }
    cout<<b<<" "<<a<<endl;
    return ;
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    // t = 1;
    while (t--) {
        solve();
    }
    return 0;
}