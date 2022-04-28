#include <iostream>
using namespace std;
bool search(int arr[],int size,int key){
  for(int i=0;i<size;i++){
    if(arr[i]==key){
      return 1;
    }
  }
  return 0;
}
  int main() {
  int arr[4] = {1,2,3,4};
    cout << "Enter the element to be search" <<endl;
    int key;
  cin >> key ;
  int found = search(arr,4,key);
    if(found){
      cout << "element is found" << endl;
      }
    else{
      cout << "element is not found" << endl;
    }
   return 0;
}