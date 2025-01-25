 /*#include<stdio.h>

int swap(int, int);
int swap(int x, int y){
    
    int temp = x;
    x =y;
    y = temp;
    return (x,y);
    
}
int main(){
    int a =20;
    int b =10;
    
    printf(" a = %d and b = %d is:\n", a ,b);
    swap(a,b);
     printf(" a = %d and b = %d is:\n" ,a ,b);
    return 0;

} 
*/


#include<stdio.h>

int swap(int *, int *);
int swap(int *x, int *y){
    
    int temp = *x;
    *x = *y;
    *y = temp;
    return (&x,&y);
    
}
int main(){
    int a =20;
    int b =10;
    
    printf(" a = %d and b = %d is:\n", a ,b);
    swap(&a,&b);
     printf(" a = %d and b = %d is:\n" ,a ,b);
    return 0;

}