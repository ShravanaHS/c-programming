
#include<stdio.h>
int fun(int x){
    printf("enter the value of i in %d \n", x *10);
    return x *10;
}
int main(){
    int i =10;
    printf("enter the value of i is %d \n", i);
    fun(i);

}


#include<stdio.h>
int fun(int *x){
    printf("enter the value of i in %d \n", *x *10);
    return 0;
}
int main(){
    int i =10;
    int *ptr = &i;
    printf("enter the value of i is %d \n", *ptr);
    fun(ptr);

}