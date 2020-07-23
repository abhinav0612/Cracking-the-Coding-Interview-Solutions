#include <bits/stdc++.h>
#include <algorithm>
#include<cstdlib>

using namespace std;

bool solve(string first, string second){
    int diff  = first.size()-second.size();
    if(abs(diff) >  1)
        return false;

    unordered_map<char,int> map;
    for(char c : first){
        map[c]++;
    }

    for(char c : second){
        if(map.count(c) == 1){
            map[c]--;
            if(map[c] == 0)
                map.erase(c);
        }
        else
            map[c]++;
    }

    if(map.size() > 2)
        return false;
    else if(map.size() == 2){
        for(auto it : map){
            if(it.second!=1)
                return false;
        }
        return true;
    }
    else if(map.size() == 1 &&  map.begin()->second != 1)
        return false;
    else
        return true;

}

int main(){
    string first = "pale";
    string second = "palee ";
   // cin>>first>>second;

    cout<<(solve(first,second) ? "true" : "false")<<endl; 
    return 0;
}