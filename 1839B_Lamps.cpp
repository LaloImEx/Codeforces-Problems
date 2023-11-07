#include <algorithm>
#include <iostream>
#include <vector>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long int ll;
using namespace std;
int main() { fastio
    int t;
    cin>>t;        
    while(t--){
        int n=0,a,b;
        cin>>n;
        vector<vector<ll> > vec;
        vec.assign(n,vector<ll>());
        for(int i=0;i<n;i++){
            cin>>a>>b;
            vec[a-1].push_back(b);
        }
        for(int i=0;i<n;i++){
            sort(vec[i].begin(), vec[i].end(), greater<ll>());
        }        
        ll ans = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<vec[i].size();j++){
                ans+=vec[i][j];
                if(j==i)break;
            }
        }
        cout<<ans<<"\n";
    }
}
