#include<stdio.h>
int array(int arr[], int n);
int reva(int arr[] , int n);

int array(int arr[], int n){
    for (int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int reva(int arr[] , int n){
    int temp;
     for (int i = 0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = arr[i];
    }
    printf("\n");
}
int main (){
    int arr[7] = {1,2,3,4,5,6,7};
     array(arr, 7);
     reva(arr,7);
     array(arr, 7);
}