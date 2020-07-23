#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isPermutation(string first, string second){

    int arr[128] = {0};
    for(char c : first){
        arr[(int)c]++;
    }
    for(char c : second){
        if(arr[(int)c] > 0)
            arr[(int)c]--;
        else
            arr[(int)c]++;
            
    }
    int sum = 0;
    for(int val : arr){
        sum+=val;
    }
    if(sum == 0)
        return true;
    else
        return false;
    
}

int main(){

    string a = "abcd ";
    string b = "dbca ";

    cout<<(isPermutation(a,b) ? "true" : "false")<<endl; 
    return 0;
}