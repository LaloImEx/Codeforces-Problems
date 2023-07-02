#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    queue<int> q;
    q.push(n);
    int level = 0;
    int ans = -1;
    int* visited = new int [20000001];
    while(!q.empty())
    {
        int ce = q.size();                
        for(int i=0; i < ce; i++)
        {
            int temp = q.front();
            q.pop();
            visited[temp]=1;
            if(temp==m)
            {
                ans=level;
                break;
            }
            if(temp>=0 && visited[temp-1]==0){
                q.push(temp-1);
            }      
            if(temp<m && visited[2*temp]==0){
                q.push(2*temp);
            }              
        }    
        level++;
    }
    cout<<ans<<"\n";
}
