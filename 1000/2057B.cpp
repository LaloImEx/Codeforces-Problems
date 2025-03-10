#include <iostream>
#include <set>
using namespace std;
#define laloimex ios_base::sync_with_stdio(0);cin.tie(0);
int main(){ laloimex
    int tc,n,k,xxx;
    cin>>tc;
    while(tc--){
        cin>>n>>k;
        if(k==0){
            set<int>aux;
            for(int i=0;i<n;i++){
                cin>>xxx;
                aux.insert(xxx);
            }
            cout<<aux.size();
            continue;
        }
        if(k==n||k+1==n){
            cout<<"1\n";
        }
    }
}
