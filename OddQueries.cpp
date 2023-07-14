#include <iostream>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
void solve()
{
    long long int length_array,q,sum=0;
    cin>>length_array>>q;
    long long int v[length_array];
    long long int arr[length_array];
    for(int i=0;i<length_array;i++){
        cin>>v[i];
        sum+=v[i];
        arr[i]=sum;
    }
    long long int l,r,num,e,ans=0;    
    for(int i=0;i<q;i++){ 
    ans = 0;
    cin>>l>>r>>num;
    if(l==r)
    {
        l--;
        r = abs(num-v[l]);
        if(v[l]>num)ans = arr[length_array-1]-r;
        else ans = arr[length_array-1]+r;        
        if(ans%2==1)cout<<"YES\n";
        else cout<<"NO\n"; 
    }
    else{    
        if(l!=r)e = (r-l)+1;
        else e = 1;
        l--,r--;
        if((l-1)>=0 && r+1 <= (length_array-1)){
            ans = arr[l-1]+(e*num)+(arr[length_array-1]-arr[r]);            
        }else{
            if(l-1<0){
                ans = (e*num)+(arr[length_array-1]-arr[r]);
            }
            if(l-1>=0 && r+1 > length_array-1)
            {
                ans = (e*num)+(arr[l-1]);
            }        
        }                
        if(ans%2 == 0)cout<<"NO\n";
        else cout<<"YES\n";        
        }
    }
}
int main() { fastio
    int t;
    cin>>t;
    while(t--)solve();
}
