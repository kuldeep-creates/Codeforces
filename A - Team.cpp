#include <iostream>
using namespace std;
 
void solve() {
    int n,a,count=0;
    cin>>n;
    while(n){
        int a,b,c;
        cin>>a;
        cin>>b;
        cin>>c;
        int k=a+b+c;
        if(k>=2){
            count++;
        }
        n--;
    }
    cout<<count;
    return ;
 
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