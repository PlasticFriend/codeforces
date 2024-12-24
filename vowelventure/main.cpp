#include <cmath>
#include <cstdio>
#include <vector>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

void vowelVenture(string s){
    int siz = sizeof(s)/sizeof(char);
    char rs[siz];
    int sl = 0;
    int l = siz-1;
    for (int i =0; i<siz; i++){
        int x = s[i];
        if(x== 97 ||x== 101 ||x== 105||x== 111 ||x== 117 ){
            rs [l] = s[i]; l--;
        }
        else{
            rs[sl] = s[i]; sl++;
        }

    }
    cout<<rs;

}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s;
    cin>>s;
    //vowelVenture(s);
    int siz = s.length();
    //cout<<"size is"<<siz<<endl;
    char rs[siz];
    int sl = 0;
    int l = siz-1;
    for (int i =0; i<siz; i++){
        int x = s[i];
        if(x== 97 ||x== 101 ||x== 105||x== 111 ||x== 117 ){
            rs [l] = s[i]; l--;
        }
        else{
            rs[sl] = s[i]; sl++;
        }

    }
    for(int i = 0; i<siz; i++){
        cout<<rs[i];
    }
    return 0;
}
