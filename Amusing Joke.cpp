#include <iostream>
#include <map>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
int main(){fastio
    string l;
    cin>>l;
    map<char,int> letters;
    for(int i=0; i<l.size(); i++)letters[l[i]]++;    
    cin>>l;
    for(int i=0; i<l.size(); i++)letters[l[i]]++;    
    cin>>l;
    map<char,int>:: iterator inicio = letters.begin();    
    for(int i=0; i < l.size();i++)
    {        
        letters[l[i]]--;
        if(letters[l[i]] < 0)
        {
            cout<<"NO";
            return 0;
        } 
        inicio++;
    }
    inicio = letters.begin();
    for(int i=0; i<letters.size();i++)
    {        
        if(inicio->second>0)
        {
            cout<<"NO";
            return 0;        
        }
        inicio++;        
    }
    cout<<"YES";
    return 0;
}
