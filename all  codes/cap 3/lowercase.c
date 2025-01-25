#include<stdio.h>

int main(){
    char ch;
 printf("enter character:\n");
scanf("%c", &ch);
//checking for lower case in ASCII
printf("the character is %c\n", ch);
printf("the value of character is %d\n", ch);

if(ch>=97 && ch<=122){
    printf("the given character is in loweer case");

}
else {
    printf("its an upper caed");
}

}
