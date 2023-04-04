#include <iostream>
#include <stack> 
#include <string>

using namespace std;

class Solution {
public:
  bool isValid(string s){
    stack<char> st;
    for (char c : s){
      if (c == '(' || c == '[' || c == '{'){
        // push opening parens onto stack
        st.push(c);
      } else if (!st.empty() && ((c == ')' && st.top() == '(') ||
                                 (c == ']' && st.top() == '[') || 
                                 (c == '}' && st.top() == '{'))) {
        // Pop corresponding opening parens if we encounter a closing one
        st.pop();
      } 
      else {
        // if we encounter an unexpected closing parens or unpaired opening, the string is invalid
      return false;
      }
      // if the stack is empty the string is valid (all parens matched and popped)
    }
      return st.empty();
  }
};

int main(){
  Solution mySolution;
  bool result = mySolution.isValid("({[]})");
  cout << "result is: " << result << endl;
}
