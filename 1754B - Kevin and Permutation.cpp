#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int t, n , x, z = 0, u = 0;

    cin>>t;
    for(int s = 0; s < t; s++){

        cin>>n;

        for(int o = 0; o < n; o++)
        {
            x = (o+1) % 2;     
            if(x == 1)
            {
                u++;
                cout<<(n/2)+u<<" ";
            }
            if(x == 0)            
            {
                z++;
                cout<<z<<" ";
            }  
        }

        z = 0;
        u = 0;
        cout<<"\n";
    }   
}
