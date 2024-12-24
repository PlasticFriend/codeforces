#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        int a,b;
        cin>>a;cin>>b;
        int m = (a<b)?a:b;
        int flag = 1;
        //cout<<"smallest is"<<m<<endl;
        while(flag ==1){
            if((m>=a || m>=b)&& (m%a == m%b)){
                cout<<m<<endl;
                flag = 0;
            }
           m++;
        }
    }
    return 0;
}
