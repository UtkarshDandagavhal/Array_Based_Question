#include <iostream>
using namespace std;

int main() {
  int arr[] = {2,5,1,3};

  int n = sizeof(arr)/sizeof(arr[0]);
  
  int min = arr[0];

  for(int i=0;i<n;i++){
    if(arr[i] < min){
      min = arr[i];
    }
  }
  cout<<min;
  // return 0;
}
