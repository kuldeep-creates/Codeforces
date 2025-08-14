#include <iostream>
#include <vector> 
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;
 
void solve() {
    int n,k,s,people=0,totalgold=0;
    vector<int>gold;
    cin>>n>>k;
    for(int i=0 ;i<n;i++){
        cin>>s;
        gold.push_back(s);
    }
    
    for(int i=0;i<n;i++){
        if(gold[i]>=k){
                totalgold+=gold[i];
            }
        if(totalgold!=0){
            if(gold[i]==0){
                totalgold--;
                people++;
            }
        }
    }
    cout<<people<<endl;
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