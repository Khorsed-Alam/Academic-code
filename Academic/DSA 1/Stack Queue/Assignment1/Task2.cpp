#include<iostream> 
#include<stack>
#include<string >
using namespace std;

bool ispalindrome( string str){
    stack<char> st;

    for(int i=0;i<str.length();i++){
        st.push(str[i]);
    }

    for(int i=0;i<str.length();i++){
        if(str[i]!= st.top()){
            return false;
        }
        st.pop();
    }
    return true;
}


int main(){
    int N;
    cin>>N;

    cin.ignore();

    for(int i=0;i<N;i++){
        string str;
        cin>>str;

        bool palindrome = ispalindrome(str);

        cout<<str<<" "<<(palindrome ? "Yes": "NO")<<endl;
    }
    return 0;
}