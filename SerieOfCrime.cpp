#include<iostream>
using namespace std;

int main()
{
    int n,m, posne = 0, i=0, as = 0, lastp = 0, los = 0, r1 = 0, r2 = 0;
    cin>>n>>m;  
    string c, aux;
    for(int u = 0; u < n; u++)
    {
        cin>>c;
        for(int o = 0; o < m; o++)
        {
            if(c[o] == '*') 
            {                
                i++;            
                if(i==1)lastp = o+1;
                if(i==2)los = o+1;
            }            
            
            if(lastp > 0 && los > 0)
            {
                r1 = lastp-1;
                r2 = los-1;
            }        
        }
        lastp = 0, los = 0;
        if(i == 1) posne = u, aux = c;
        i = 0;     
    }

    if(aux[r1] == '.')
    {
        cout<<posne+1<<" "<<r1+1;
    }else{
        cout<<posne+1<<" "<<r2+1;
    }


}
