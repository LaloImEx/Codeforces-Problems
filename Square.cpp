#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void solve()
{
    int in;
    vector<int> v1;
    vector<int> v2;
    for(int x=0; x < 2; x++)
    {
        cin>>in; v1.push_back(in);
    }
    for(int x=0; x < 2; x++)
    {
        cin>>in; v2.push_back(in);
    }
    sort(v1.begin(), v1.end(), greater<int>());
    sort(v2.begin(), v2.end(), greater<int>());
    
    if(v1[0]==v2[0] && v1[0]==v2[1] && v1[0]==v1[1])
    {
        cout<<"NO\n";
    }
    else{
        if(v1[0]==v2[0] && v1[1]+v2[1]==v1[0])
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }    
}


int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
}
