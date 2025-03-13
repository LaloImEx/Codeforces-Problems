#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
#define laloimex ios_base::sync_with_stdio(0);cin.tie(0);

bool cmp(pair<int, int>& a,pair<int, int>& b) { 
    return a.second < b.second; 
} 

void answ(map<int, int>& M, int k) 
{ 
    int ans = M.size();
    vector<pair<int, int> > A; 
     
    for (auto& it : M) { 
        A.push_back(it); 
    } 
  
    sort(A.begin(), A.end(), cmp); 
   
    for (auto& it : A) { 
        if(k<=0)break;                
        if(k-it.second>=0){
            ans--;
            k-=it.second;
        }
    } 
    cout<<ans<<"\n";
} 
 
int main(){ laloimex
    int tc,n,k,xxx;
    cin>>tc;
    while(tc--){
        cin>>n>>k;
        if(k==0){
            set<int>aux;
            for(int i=0;i<n;i++){
                cin>>xxx;
                aux.insert(xxx);
            }
            cout<<aux.size()<<"\n";
            continue; 
        }
        if(k==n||k+1==n){
            for(int i=0;i<n;i++)cin>>k;
            cout<<"1\n";
            continue;
        }
        else{
            map<int,int> nums;
            int aux;
            for(int i=0;i<n;i++){
                cin>>aux;
                nums[aux]++;
            }
            answ(nums,k);
        }
    }
}
