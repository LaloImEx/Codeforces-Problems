#include <iostream>
using namespace std;
long long int n, k, m;
 
int main()
{
    long long int tc, sum, L, R;
    cin>>tc;
    
    while(tc--)
    {
        cin>>n>>k;
        if(n==1)cout<<k<<"\n";
        else if(n==k||n%k==0)cout<<1<<"\n";
        else {
        R = k, L = 1;
        while(L<R)
        {
            m = L+(R-L)/2;
            sum = m*n;
            if(sum>=k&&m>1)R=m;
            else L=m+1;
        }
        cout<<R<<"\n";
        }
    }
}
