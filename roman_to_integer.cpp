#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;
// Input: s = "MCMXCIV"
// Output: 1994
// Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
class Solution {
public:
  int romanToInt(string s){
    unordered_map<string, int> lookupTable = {
      {"I", 1},
      {"IV", 4},
      {"V", 5},
      {"IX", 9},
      {"X", 10},
      {"XL", 40},
      {"L", 50},
      {"XC", 90},
      {"C", 100},
      {"CD", 400},
      {"D", 500},
      {"CM", 900},
      {"M", 1000}
    };
    int sum = 0;
/*
For each character in the input string s, do the following:
a. Check if the current character and the next character form a valid two-letter Roman numeral. If yes, assign the corresponding string to the symbol variable and skip the next character by incrementing the loop index i by one.
b. Otherwise, assign the current character to the symbol variable.
c. Look up the decimal value corresponding to the symbol variable in the lookup table and add it to the sum.
Return the final value of sum.
*/
    for (int i = 0; i < s.length(); i++){
      string symbol(1, s[i]);
      if (i < s.length() - 1 && lookupTable[s.substr(i, 2)] > 0){
        symbol = s.substr(i, 2);
        i++;
      }
      sum += lookupTable[symbol]; 
    }
    return sum;
  }
};

int main(){
  Solution mySolution;
  cout << "Roman Number MCMXCIV = " << mySolution.romanToInt("MCMXCIV") << endl; 
  return 0;
}
