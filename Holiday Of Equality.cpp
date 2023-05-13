#include <iostream>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main() { fastio
    int n, max=0,inp,ans=0;
    cin>>n;
    int v[n];
    for(int i=0;i<n;i++)
    {
        cin>>inp;
        if(inp>max)max=inp;
        v[i]=inp;
    }
    for(int i=0;i<n;i++)
    {
        ans+=max-v[i];
    }
    cout<<ans;
}
