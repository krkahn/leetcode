#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
  bool isPalindrome(int x){
    string num = to_string(x);
    int length = num.length(); 
    int left = 0;
    int right = num.length() - 1; 

    while (left < right) {
      if (num[left] != num[right]) {
        return false;
      }
      left++; 
      right--;
    }
    return true;
  }
};

int main(){
  Solution mySolution;
  int num;
  string input;
  while(true){
  cout << "Enter a number, EXIT to exit:"; 
  cin >> input;
  if(input == "EXIT"){
      break;
  }
  num = stoi(input);
    if(mySolution.isPalindrome(num)){
        cout << "The string is a palindrome" << endl;
    }
    else {
        cout << "The string is not a palindrome." << endl;
    }
  }
  return 0;
}
