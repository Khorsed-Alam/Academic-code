#include<iostream>
#include<stack>
#include<string>
#include<queue>
using namespace std;

bool ispalindrome(string s){
    stack<char>st;
    for(int i=0;i<s.length();i++){
        st.push(s[i]);
    }
    for(int i=0;i<s.length();i++){
        if(s[i]!= st.top()){
            return false;
        }
        st.pop();
    }
    return true;
}

int main(){
    cout<<"Please enter Number of test case: ";
    int n;
    cin>>n;
    cin.ignore();

    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        bool Palindrome= ispalindrome(s);
        cout<<s<<" "<<(Palindrome ? "Yes":"No")<<endl;
    }
    return 0;
}