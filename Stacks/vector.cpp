#include <bits/stdc++.h>
using namespace std;
class Stack{
    vector<int>s;
public:
  void push(int val){
    s.push_back(val);
  }
  void pop(){
    s.pop_back();
  }
  int top(){
    return s[s.size()-1];
  }
  bool empty(){
    return s.size()==0;
  }

};
int main(){
    Stack st;
    st.push(43);
    st.push(65);
    st.push(3);
    st.push(74);
    st.push(14);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }return 0;
    
}