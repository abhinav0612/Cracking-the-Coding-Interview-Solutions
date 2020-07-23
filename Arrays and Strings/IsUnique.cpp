#include <iostream>
#include <bits/stdc++.h>


using namespace std;

bool isUnique(string str){
    unordered_set<char> set;
    for(char s : str){
        if(set.count(s) == 1)
            return false;
        else
            set.insert(s);
    }
    return true;
}

int main(){
    
    cout<<"Enter the string: ";
    // vector<string> vec;
    // vec.push_back("Abhinav");
    // vec.push_back("abcdeuip");
    // vec.push_back(" ");
    // vec.push_back("aabbhihih");
    // vec.push_back("mqirklal");

    string input;
    cin>>input;
    cout<<(isUnique(input) ? "true" : "false")<<endl; 
    return 0;
}