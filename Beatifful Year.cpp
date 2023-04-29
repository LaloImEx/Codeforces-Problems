#include <iostream>
#include <map>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main() { fastio
    map<char,int> chrs;
    int y;
    string s;
    cin>>y;
    while(1){
        y++;
        s = to_string(y);
        for(int i = 0; i < 4; i++)chrs[s[i]]++;        
        if(chrs.size() == 4){
            cout<<y;
            return 0;
        }
        else chrs.clear();
    }
}
