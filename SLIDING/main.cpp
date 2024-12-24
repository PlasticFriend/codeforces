#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int i = 0;
    long int res[n];
    while(n>0){
        long long int arr[4];
        for(int i = 0; i<4; i++){
            cin>>arr[i];
        }
        long long int result = (arr[0]-arr[2])*(2*arr[1]-1)+arr[1]-arr[3];

        cout<<result<<endl;
        i++;
        n--;
    }
    /*for(int j = 0; j<n; j++){
        cout<<res[j]<<endl;
    }*/
    return 0;
}
