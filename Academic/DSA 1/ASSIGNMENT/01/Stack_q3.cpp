#include<iostream>
#include<stack>
#include<string>

using namespace std;

bool isVal(string s){
    stack<char>stk;
    for(int i=0;i<s.length();i++){
        char c=s[i];
        if(c=='('|| c=='{'|| c=='['){
            stk.push(c);
        }else{
            if(stk.empty()){
                return false;
            }
            char top=stk.top();
            if((c==')' && top!= '(') ||(c=='}' && top!= '{') ||(c==']' && top!= '[') ){
                return false;
            }
            stk.pop();
        }
    }
    return stk.empty();
}


int main(){

    int n;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
    string s;
     cin>>s;
     cout<<(isVal(s)?  "ture": "false")<<endl;
    }
  
    return 0;
}
 