#include <iostream>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main() { fastio
    int n,c=0,sum;
    cin>>n;        
    for(int i=1;i<=n;i++)
    {
        sum = (i*(i+1))/2;
        n-=sum;
        c++;
    }
    if(n<0)c--;
    cout<<c;
}
