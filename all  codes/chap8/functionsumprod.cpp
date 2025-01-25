// 2 pointer apporach

#include <iostream>
using namespace std;
prodof(int arr[], int size){
    int prod = 1;
    for (int i =1; i< size ; i++){
        prod = prod*i;
    }
    return prod;
}
sumof(int arr[ ] , int size){
 int sum =0;
    for(int i =0; i< size ; i++){
     sum = sum + arr[i];
     
}
return sum;
}

int main() {
    
    int arr[] = {1, 2, 3,  5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]); 
  int sum =   sumof(arr, size);
  int prod = prodof(arr, size);
 cout << sum <<endl;
 cout << prod ;
   
    return 0;
}
