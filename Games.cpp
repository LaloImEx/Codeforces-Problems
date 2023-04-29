#include <iostream>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
int main(){fastio
    int n,ans=0,h,g;
    cin>>n;
    int v[n*2];
    for(int i=0; i<n*2; i++)
        cin>>v[i];    
    for(int i=0; i < n*2-1; i+=2){
        h = v[i];
        g = v[i+1];        
        for(int y=0; y < n*2-1; y+=2){            
            if(h == v[y+1] && i != y)ans++;
            if(g == v[y] && i != y)ans++;
        }
    }
    cout<<ans/2;
}
