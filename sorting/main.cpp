#include <iostream>

using namespace std;
int alice_sort(int *s, int n){
        for(int i = 0; i < n; ++i){
            for(int j = i + 1; j < n; ++j){
                if(s[i] > s[j]){
                    int swap = s[i];
                    s[i] = s[j];
                    s[j] = swap;
      }
    }
  }
  return 0;
    }
int main()
{
    int n;
    cin>>n;

    int a;
    int *s = &a;
    for (int i = 0; i<n; i++){
        cin>> *(s+1);
    }


    return 0;
}
