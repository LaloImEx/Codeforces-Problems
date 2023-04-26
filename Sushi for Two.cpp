#include <iostream>
#include <algorithm>
#include <vector>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){fastio
    int n, s, maxi=0, in, sum;
    vector<int> vec;
    cin >> n >> s;
    sum = 1;
    for (int i = 0; i < n - 1; i++)
    {        
        cin >> in;
        if (s != in)
        {
            vec.push_back(sum);
            sum = 1;
            s = in;
        }
        else sum++;        
    }
    vec.push_back(sum);   
    for (int i = 0; i < vec.size()-1; i++)
    {        
        s = min(vec[i],vec[i+1])*2;
        if(maxi < s)maxi = s;
    }
    cout<<maxi;    
}
