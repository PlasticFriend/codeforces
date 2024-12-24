#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
    int c;
    cin>>c;
    for(int i =0; i<c;i++){
        int n,k;
        cin>>n>>k;
        vector <int> v;
        for(int i = 0; i<n; i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());

        int sum = 0;
        int idx = 0;
        for(int m = (n-1); m>=0; m--){
            sum = sum+v[m];

            if(sum>=k){

                idx = m;
                break;
            }

        }
    //cout<<idx<<" "<<sum<<endl;
        if (sum == k){
            cout<<0<<endl;
        }
        else if(sum>k){
            int remain = k-(sum -v[idx]);
            cout<<remain<<endl;
        }
        else{
            int remain = k-sum;
            cout<<remain<<endl;
        }
    }
    return 0;
}
