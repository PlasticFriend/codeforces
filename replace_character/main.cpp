#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include<math.h>
using namespace std;
bool func(vector<int>& a){
    int maxi = *max_element(a.begin(), a.end());
    for(int i = 0; i<a.size(); i++){
        if(a[i] != 0 && a[i]!=maxi){
            return false;
        }
    }
    return true;
}
int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n; string s;cin>>s; vector<int> arr(26);
        for(int i = 0; i<s.size(); i++){
            int x = s[i]-'a';
            arr[x]++;
        }
        if(func(arr)){
            for(int i = 1; i<s.size(); i++){
                if(s[i] != s[i-1]){
                    s[i] = s[i-1];
                    break;
                }
            }
            cout<<s<<endl;
        }else{
            int maxima = *max_element(arr.begin(), arr.end());
            int z = 0;
            for(int i = 0; i<arr.size(); i++){
                if(arr[i] == maxima){
                    z =i;break;
                }
            }
            char maxa = z+'a';
            int mini = maxima;
            int idx = 0;
            for(int i = 0; i<arr.size(); i++){
                if(arr[i]!=0 && arr[i]<mini){
                    mini = arr[i];
                    idx = i;
                }
            }
            char charac = idx+'a';
            for(int i = 0; i<s.size(); i++){
                if(s[i] == charac){
                    s[i] = maxa;
                    break;
                }
            }
            cout<<s<<endl;


        }

    }
}
