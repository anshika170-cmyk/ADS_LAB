#include <bits/stdc++.h>
using namespace std;
class Stack{
    list<int>s;
public:
  void push(int val){
    s.push_front(val);
  }
  void pop(){
    s.pop_front();
  }
  int top(){
    return s.front();
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