#include <vector>
#include <iostream>
#include <algorithm> 
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main() { fastio
    int tc, len, n;
    cin>>tc;
    n = 1;
    while(tc--)
    {    
        cin>>len;
        vector<int>v;    
        for(int j=0;j<len;j++){
            cin>>n;
            v.push_back(n);
        }
        n = 1;
        sort(v.begin(),v.end());
        for(int j=0;j<len-1;j++){
            if(abs(v[j]-v[j+1]) > 1)
            {
                cout<<"NO\n";
                n = 0;
                break;
            }
        }        
        if(n==1)cout<<"YES\n";     
    }
}
