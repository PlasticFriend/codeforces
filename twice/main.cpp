#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include<math.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;int arr[n+1];int hasharr[n+1]={0};int res = 0;
        for(int i = 0;i<n; i++){
            int x;cin>>x;arr[i] = x;
            hasharr[x]++;
        }
        for(int i = 0; i<n+1; i++){
            res += (hasharr[i]/2);
        }
        /*for(int i:hasharr){
            cout<<i<<" ";
        }*/
        //cout<<endl;
        cout<<res<<endl;
    }
}
