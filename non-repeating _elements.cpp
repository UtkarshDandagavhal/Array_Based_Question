#include <iostream>
#include<vector>
using namespace std;

void nonrepeating(vector<int>nums,int n){
  bool chk;

  for(int i=0;i<n;i++){
    chk = false;
    for(int j=0;j<n;j++){
      if(i!=j && nums[i] == nums[j]){
        chk = true;
        break;
      }
    }

    if(!chk) cout<<nums[i]<<" ";
  }
}

int main() {
  vector<int> nums = {1,2,-1,1,3,1};

  int n = nums.size();

  nonrepeating(nums,n);

  return 0;
}
