#include<bits/stdc++.h>
bool isValidParenthesis(string s)
{
    
    // Write your code here.
    //cout<<s<<""<<endl;
    stack<char> st;
    for(int i = 0;i<s.size();i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            st.push(s[i]);
           // cout<<st.top()<<" ";
        }
        
        else{
            if(st.size() == 0) return false;
             char ch = st.top();
             st.pop();
        if((ch == '(' && s[i] == ')') || (ch == '{' && s[i] == '}') || (s[i] == ']' && ch == '[') ){
            continue;
        }
        else{
            return false;
        }
            //cout<<st.top()<<" ";
        }
       
    }
  //  return st.empty();
    if(st.empty()){
         return true;
    }
    return false;
        
}
