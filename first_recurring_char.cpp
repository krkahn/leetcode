#include <iostream>
#include <unordered_map>

using namespace std;

char firstRecurringChar(string s) {
  unordered_map<char, int> hashMap;
  for (char c : s){
    if (hashMap.find(c) != hashMap.end()){
      return c; 
    }
    else hashMap[c] = 1;
  }
  return '\0';
}

int main(){
  char recurringChar = firstRecurringChar("EABCDE");
  cout << recurringChar << endl;
}
