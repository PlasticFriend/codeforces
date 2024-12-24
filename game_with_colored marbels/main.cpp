#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
int algo(vector<int>& arr){
    unordered_map<int, int> freqMap;
    for (int num : arr) {
        freqMap[num]++;
    }
    for(int i = 0; i<freqMap.size(); i++){
        if(freqMap[i] != 0 && freqMap[i] == 1){
            return i;
        }
    }
    for(int i = 0; i<freqMap.size(); i++){
        if(freqMap[i] != 0 && freqMap[i]%2 != 0){
            return i;
        }
    }
    for(int i = 0; i<freqMap.size(); i++){
        if(freqMap[i] != 0 && freqMap[i]%2 == 0){
            return i;
        }
    }
}
int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;vector<int> arr(n);int alice_score=  0; int bob_score = 0;
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        //frequency map for whole
        unordered_map<int, int> freqMap;unordered_map<int, int> AlicefreqMap;unordered_map<int, int> BobfreqMap;
    for (int num : arr) {
        freqMap[num]++;
    }
    //--------------------

        while(arr.size() != 0){
                //alice turn
            int alice  = algo(arr);
            AlicefreqMap[alice]++;
            auto it = find(arr.begin(), arr.end(), alice); // Find the first occurrence of 1
            if (it != arr.end()) {
                arr.erase(it); // Erase the element at the found position
            }
            alice_score++;
            if(freqMap[alice] == AlicefreqMap[alice]){
                alice_score++;
            }
            if(AlicefreqMap[alice]>1 && freqMap[alice] != AlicefreqMap[alice]){alice_score--;}
            if (arr.empty()) {
        break; // Break out of the loop if no elements are left
    }
        //bob turn
        int bob  = algo(arr);
        BobfreqMap[bob]++;
            auto iti = find(arr.begin(), arr.end(), bob); // Find the first occurrence of 1
            if (iti != arr.end()) {
                arr.erase(iti); // Erase the element at the found position
            }
            bob_score++;
            if(freqMap[bob] == BobfreqMap[bob]){
                bob_score++;
            }
            if(BobfreqMap[bob]>1 && freqMap[bob] != BobfreqMap[bob]){bob_score--;}
            if (arr.empty()) {
        break; // Break out of the loop if no elements are left
    }
        }
        cout<<alice_score<<endl;

    }
}
