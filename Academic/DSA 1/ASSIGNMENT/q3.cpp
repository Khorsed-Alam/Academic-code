#include<iostream>
#include<stack>
#include<string>

using namespace std;

bool isVal(string s){
    stack<char>stk;
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        if(ch=='('|| ch=='{'|| ch=='['){
            stk.push(ch);
        }else{
            if(stk.empty()){
                return false;
            }
            char topCh=stk.top();
            if((ch==')' && topCh!= '(') ||(ch=='}' && topCh!= '{') ||(ch==']' && topCh!= '[') ){
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
