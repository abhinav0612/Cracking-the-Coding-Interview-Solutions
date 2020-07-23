#include <bits/stdc++.h>

using namespace std;

bool solve(string str){
    bool res = true;
    unordered_map<char,int> map;
    for(char c : str){
        if(map.count(c) == 1)
            map.erase(c);
        else
        {
            map[c] = 1;
        }
    }
    if(map.size() == 1 || map.size() == 0)
        return true;
    else
        return false;

}

int main(){
    string input = "";

    cout<<(solve(input) ? "true" : "false")<<endl; 
    return 0;
}