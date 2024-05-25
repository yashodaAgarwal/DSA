#include <iostream>
#include <vector>
using namespace std;

int searchInNearlySortedArray(vector<int> arr, int target){
  int s=0;
  int e=arr.size()-1;
  int mid = s+(e-s)/2;

  while(e>=s){
    if(arr[mid] == target){
      return mid;
    }
    if(arr[mid-1] == target){
      return mid-1;
    }
    if(arr[mid+1] == target){
      return mid+1;
    }
    else if(arr[mid]>target){
      e=mid-2;
    }
    else{
      s=mid+2;
    }
    mid =s+(e-s)/2;
  }
  return -1;
}
int main() {
  vector<int> arr ={2,1,3,4,5,6,8,7};
  int target=8;
  int result = searchInNearlySortedArray(arr,target);
  cout<<"The missing element is at: "<<result<<endl;
  
  return -1;
}