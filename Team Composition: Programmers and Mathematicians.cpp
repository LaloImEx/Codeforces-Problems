#include <iostream>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
void solve(long long int a, long long int b)
{
    long long int ans[2];
    ans[0] = min(a,b);
    ans[1] = (a+b)/4;
    cout<<min(ans[0],ans[1])<<"\n";    
}

int main(){fastio
    long long int tc,n,m;
    cin>>tc;
    while(tc--)
    {        
        cin>>n>>m;        
        if(n==m)
        {
            cout<<(m*2)/4<<"\n";
        } 
        else{
            solve(n,m);   
        }
    }
}
