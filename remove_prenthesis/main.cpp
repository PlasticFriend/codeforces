#include <iostream>

using namespace std;
    string removeit(string str){
        if (str.length() <= 2) {
            return "";
        }
        return str.substr(1, str.length() - 2);

    }
    string removeOuterParentheses(string s) {
        string temp; string ans = "";
        int left = 0; int right = 0; int i = 0;int n = s.size()-1;
        while(true){


        //cout<<"right is "<<right<<endl<<"left is "<<left<<endl;
            if (s[i] == '('){
                temp.push_back('(');
                left++;
            }
            else if(s[i] == ')'){
                temp.push_back(')');
                right++;
            }
            else{
                temp.push_back(s[i]);
            }
            if(left==right){
                string x = removeit(temp);
                ans = ans+x;
                temp.clear();
            }
            if(i == n){
                break;
            }
            i++;
        }
        return ans;
    }
int main()
{
    cout<<removeOuterParentheses("(()())(())(()(()))");
    return 0;
}
