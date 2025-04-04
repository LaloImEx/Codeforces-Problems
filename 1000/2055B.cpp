#include <iostream>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n,aux;
        cin>>n;
        int cm[n];
        int al[n];
        int pool[n];
        for(int i=0;i<n;i++){
            cin>>cm[i];            
        }        
        for(int i=0;i<n;i++){
            cin>>aux;
            al[i]=cm[i]-aux;            
            if(al[i]<0)pool[i]=al[i];
            else pool[i]=0;
        }
        int h=0;
        for(int i=0;i<n;i++){
            if(pool[i]<0){
                for(int j=0;j<n;j++){
                    if((al[j]+pool[i])<0&&j!=i){
                        h=1;
                        cout<<"NO\n";                        
                        break;
                    }
                    else if(j!=i)al[j]-=pool[i];
                }
                if(h==1){
                    break;
                }
            }
        }
        if(h==0)cout<<"YES\n";
    }

    return 0;
}