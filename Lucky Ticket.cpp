#include <iostream>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main() { fastio
    int lefsum = 0,rigsum = 0, tc;
    string str;
    cin>>tc>>str;
    tc = tc/2;
    for(int k = 0; k < tc; k++)
    {
        if(str[k] != '7' && str[k] != '4')
        {
            cout<<"NO";            
            return 0;
        }
        lefsum += int(str[k]-'0');     
    }
    for(int k = tc; k < (tc*2); k++)
    {
        if(str[k] != '7' && str[k] != '4')
        {
            cout<<"NO";            
            return 0;
        }
        rigsum += int(str[k]-'0');
    }    
    if(rigsum == lefsum)cout<<"YES";
    else cout<<"NO";
}
