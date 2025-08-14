#include <iostream>
#include <set>
#include<cctype>
using namespace std;
 
void solve() {
    string A1,A2;
    cin>>A1>>A2;
    for(char &i :A1){
        i=tolower(i);
    }
    for(char &i : A2){
        i=tolower(i);
    }
    for(int i=0;i<A1.length();i++){
        if(A1[i]<A2[i]){
            cout<<-1;
            return;
        }
        if(A1[i]>A2[i]){
            cout<<1;
            return;
        }
    }
    cout<<0;
 
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