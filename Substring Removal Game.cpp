#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main() { fastio
    int tc, sum, n;    
    string str;
    cin>>tc;
    while(tc--)
    {
        n = 0, sum = 0;
        cin>>str;
        vector<int> v;            
        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] == '1')sum++;
            else
            {
                if(sum>0)v.push_back(sum);                
                sum = 0;
            }
        }
 
        v.push_back(sum);
        sort(v.begin(),v.end(), greater<int>());
 
        for(int o = 0; o < v.size(); o++)
        {                        
            if(o%2 == 0)n+=v[o];
        }
 
        if(v.size() == 0 && str[0] == '1')cout<<str.length()<<"\n";
        else cout<<n<<"\n";
 
    }
}
