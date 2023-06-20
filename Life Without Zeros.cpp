#include <iostream>
#include <algorithm>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main() { fastio
    int a,b;
    cin>>a>>b;
    string equation = to_string(a+b), eq = "";    
    string as = to_string(a), bs = to_string(b);    
    equation.erase(remove(equation.begin(), equation.end(), '0'), equation.end());
    as.erase(remove(as.begin(), as.end(), '0'), as.end());
    bs.erase(remove(bs.begin(), bs.end(), '0'), bs.end());
    int XD = stoi(as), XDD = stoi(bs);
    if(XD+XDD == stoi(equation)){
        cout<<"YES";        
    }else{
        cout<<"NO";        
    }        
}
