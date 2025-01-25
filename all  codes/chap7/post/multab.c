#include<stdio.h>

int main(){
    int n1,n2,n3;
    printf("enter the number which you want multi tab:\n");
    scanf ("%d %d %d " , &n1, &n2, &n3 );
    int arr[] = {n1,n2,n3};
    for (int i=0;i<3; i++){
        printf("multi tab of %d \n ", i+1);

        for (int j=0;j<11; j++){
        printf ("%d X %d = %d \n " , arr[i] , j , arr[i]*j );
    } 
    }
    return 0;
    }