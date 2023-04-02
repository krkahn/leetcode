#include <iostream>
#include <vector>
#include <unordered_map>


using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int>& nums, int target) {
  vector<int> result;
  unordered_map<int, int> hashMap;
  
  for (int i = 0; i < nums.size(); i++){
    int difference = target - nums[i]; 
    if (hashMap.find(difference) != hashMap.end()){
      result.push_back(hashMap[difference]);
      result.push_back(i); 
      return result;
    }
    hashMap[nums[i]] = i;
  }
  return result;  
  }
};


int main(){
  vector<int> myVector {3,2,4};
  int target = 6;
  Solution mySolution;
  vector<int> result = mySolution.twoSum(myVector,target);

  for (int i = 0; i < result.size(); i++){
    cout << result[i] << " ";
  }
  cout << endl;
  return 0;
}
