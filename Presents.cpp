#include <iostream>
using namespace std;
#define laloimex ios_base::sync_with_stdio(0);cin.tie(0);
int main(){ laloimex
    int t,inp;
    cin>>t;
    int v[t] = {0};
    for(int i=0;i<t;i++)
    {
        cin>>inp;
        v[inp-1]=i+1;
    }
    for(int i=0;i<t;i++)
    {
        cout<<v[i]<<" ";
    }
}
