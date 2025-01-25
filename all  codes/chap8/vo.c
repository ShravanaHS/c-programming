#include<stdio.h>
int main(){
    char str[9];
    for(int i =0;i<8; i++)
    {
        scanf("%c", &str[i]);
        fflush(stdin);
    }
   str[5] = '\0';
   
   return 0;
}