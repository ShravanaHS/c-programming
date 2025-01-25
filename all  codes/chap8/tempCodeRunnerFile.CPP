#include<iostream.h>
using namespace std ::

int linsearch(int x[] ,int y, int target){
    for(int i =0 ; i<= size ; i++){
        if(x[i] == target){
            return i;
        }
        else 
        return (-1);
    }

}
void main(){

    int target =5;
    int arr[] = {1,2,3,4,5,6,7,8};
    int size = 9;
    linsearch(arr[] , size , target);
    return 0;
}