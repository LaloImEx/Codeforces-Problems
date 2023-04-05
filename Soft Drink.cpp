#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main() { fastio
    int a,b,c,d,e,f,g,j;
    cin>>a>>b>>c>>d>>e>>f>>g>>j;
    int bxc = b*c;
    vector<int> v;
    v.push_back(bxc/g);
    v.push_back(d*e);
    v.push_back(f/j);
 
    sort(v.begin(),v.end());   
    cout<<v[0]/a;
}
