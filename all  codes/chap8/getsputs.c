/// gets is used to take strings from user as a scan f function
/// puts used to print strings like a print f in othe r cases it has backslash n in it also


#include<stdio.h>

void main(){
    char ch[40];
    gets(ch);
    puts(ch);
    return 0;
}
///we must use fgets becaues it has buffer over flow problems 