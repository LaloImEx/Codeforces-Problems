#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main() { fastio
    int tc, len;
    string s;
    cin>>tc;
    while(tc--)
    {
        cin>>len>>s;
        string finals = "";
        char aux = ' ';
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(int i=0;i<len;i++)
        {
            if(s[i] != aux)
            {
                finals+=s[i];
                aux = s[i];
            }
        }
        if(finals == "meow"){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
 
    }
} 
