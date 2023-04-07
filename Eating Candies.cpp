#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main()
{
    int tc,L,R,cont,n,ali,bob,sz;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        vector<int>mxc;
        int v[n];
        L = 0,R = n-1;
        ali = 0,bob = 0;        
        for(int i = 0; i < n; i++)cin>>v[i];
        mxc.push_back(0);
        if(n>1)
        {                   
            ali+=v[L];L++;
            bob+=v[R];R--;            
            int cont = 2;      
            if(bob==ali)mxc.push_back(cont);
            while(L<=R)
            {                        
                if(ali>=bob)
                {
                    bob+=v[R];R--;
                    cont++;
                }
                else
                {                    
                    ali+=v[L];L++;
                    cont++;                    
                }
                if(bob==ali)mxc.push_back(cont);                
            }
            sz = mxc.size()-1;                         
            if(mxc.size()>1)cout<<mxc[sz]<<"\n";
            else cout<<"0\n";
        }
        else cout<<"0\n";   
    }
}

