#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long int ll;
using namespace std;
int main() { fastio
    int t,n,k;
    string str;
    cin>>t;        
    while(t--){        
        cin>>n>>k>>str;        
            map<char,int> letra;
            for(int i=0;i<n;i++){                
                letra[str[i]]++;
            }
            map<char,int>::iterator itr = letra.begin(); 
            char aux;       
            int comple = 0, I=0;   
            for(int i=0;i<k;i++){
                for(int j=0;j<letra.size();j++){
                    if(itr->second%2==1){                        
                        aux = itr->first;
                        letra[aux]--;
                        comple=1;
                        I++;
                    }
                    itr++;      
                    if(comple)break;              
                }
                itr = letra.begin();
                comple = 0;
            }
            k-=I;
            I = k+I;
            for(int i=0;i<k;i++){
                for(int j=0;j<letra.size();j++){
                    if(itr->second>0){                        
                        aux = itr->first;
                        letra[aux]--;
                        comple=1;
                    }
                    itr++;      
                    if(comple)break;              
                }
                itr = letra.begin();
                comple = 0;
            }
            comple = 0;
            itr = letra.begin();            
  
            if((n-I)%2==1){
                for(int i=0;i<letra.size();i++){                
                    if(itr->second%2==1)comple++;
                    if(comple>1)break;                
                    itr++;
                }                
                if(comple==1)cout<<"YES\n";
                else cout<<"NO\n";
            }      
            if((n-I)%2==0){
                for(int i=0;i<letra.size();i++){                
                    if(itr->second%2==1)comple++;
                    if(comple>0)break;
                    itr++;
                }
                if(comple==0)cout<<"YES\n";
                else cout<<"NO\n";
            }            
        

    }
}
