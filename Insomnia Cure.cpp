#include <iostream>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
int main(){
    fastio
    int k,j,l,o,d;
    int cont = 0;
    cin>>k>>j>>l>>o;
    cin>>d;
    int v[d];
    int b[d] = {0};
    for(int z = 0; z < d; z++)
    {
        v[z] = z+1;
    }
    for(int c = 0; c < d; c++){
        if( v[c]% k == 0)b[c] = 1;        
    }   
    for(int c = 0; c < d; c++){        
        if( v[c]% j == 0)b[c] = 1;        
    }
    for(int c = 0; c < d; c++){        
        if( v[c]% l == 0)b[c] = 1;
    }
    for(int c = 0; c < d; c++){        
        if( v[c]% o == 0)b[c] = 1;       
    }
    for(int lp = 0; lp < d; lp++){
        if(b[lp] == 1)cont++;
    }
    cout<<cont;
} 
