#include <iostream>
using namespace std;
int main()
{
    int w,exa,jw;
    cin>>w;
    long long int worms[w];
    for(int i=0;i<w;i++){
        cin>>exa;
        worms[i]=exa;
        if(i>0)worms[i]+=worms[i-1];
    }
    long long int l=0,r=w-1,m=0;
    cin>>jw;
    for(int lie=0;lie<jw;lie++){
        cin>>exa;
        l=0,r=w-1,m=0;
        while(l<r){
            m = (l+r)/2;
            if(worms[m]>=exa)r=m;
            else l=m+1;
        }
        cout<<l+1<<"\n";
    }
}