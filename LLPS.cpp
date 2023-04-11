#include <iostream>
#include <map>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main(){ fastio

    string a;
    cin>>a;

    map<char,int> charats;

    for(int b = 0; b < a.length(); b++)
    {
        charats[a[b]]++;
    }

    map<char,int>:: iterator inicio = charats.end();
    inicio--;

    map<char,int>:: iterator max = charats.end();
    max--;

    for(int b = 0; b < charats.size(); b++)
    {
        if(max->second < inicio->second && max->first < inicio->first)
        {
            max = inicio;
        }
        inicio--;
    }
    int op = max->second;    

    for(int c = 0; c < op; c++) cout<<max->first;

}
