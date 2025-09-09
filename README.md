# c-programming
This repository contains simple to advanced C programming assignments. Thanks to Code with Harry and Etalvis, from whose tutorials I have learned the most. In this repository, I take problem statements and solve them, starting from simple code and gradually progressing to more complex solutions. This is a collection of my learning journey and practice to improve my C programming skills.

## Assignment 1: Add 2 to a Number
### Problem Statement
Get a number from the user, add 2 to it, and print the result.

### Solution Approach
1. Start the program.  
2. Declare an integer variable.  
3. Prompt user to enter a number.  
4. Read number using `scanf` with `%d`.  
5. Add 2 to the number with `+`.  
6. Print original number.  
7. Print result after addition.  
8. End the program.
 

### Code
```
#include<stdio.h>
int main(){
int x;
printf("enter a number: ");
scanf("%d", &x);
printf("input : %d \n", x);
printf("output : %d", x + 2);
return 0;
}
```

---
## Assignment 2: Subtract 5 from a Number  
### Problem Statement  
Get a number from the user, subtract 5 from it, and print the result.  

### Solution Approach  
1. Start the program.  
2. Declare an integer variable.  
3. Prompt user to enter a number.  
4. Read number using `scanf` with `%d`.  
5. Subtract 5 from the number using `-`.  
6. Print original number.  
7. Print result after subtraction.  
8. End the program.
   
### Code  
```
#include<stdio.h>
int main(){
int x;
printf("enter a number: ");
scanf("%d", &x);
printf("input : %d \n", x);
printf("output : %d", x - 5);
return 0;
}
```
---


## Assignment 3: Multiply a Number by 5  

### Problem Statement  
Get a number from the user, multiply it by 5, and print the result.  

### Solution Approach  
1. Start the program.  
2. Declare an integer variable.  
3. Prompt user to enter a number.  
4. Read number using `scanf` with `%d`.  
5. Multiply the number by 5 using `*`.  
6. Print original number.  
7. Print result after multiplication.  
8. End the program.  

### Code
```
#include<stdio.h>
int main(){
int x;
printf("enter a number: ");
scanf("%d", &x);
printf("input : %d \n", x);
printf("output : %d", x * 5);
return 0;
}
```
---
## Digit Extraction Algorithm for N-digit Numbers

### For 2-digit number (e.g., 34)
- Most Significant Digit (MSB, 1st digit): Divide number by 10 → 34 / 10 = 3
- Least Significant Digit (LSB, 0th digit): Take remainder when dividing by 10 → 34 % 10 = 4

### For 3-digit number (e.g., 159)
- MSB (2nd digit): Divide by 100 → 159 / 100 = 1
- Middle digit (1st digit):
  1. Take remainder after dividing by 100 → 159 % 100 = 59
  2. Divide that remainder by 10 → 59 / 10 = 5
- LSB (0th digit): Remainder when dividing by 10 → 159 % 10 = 9

### For 4-digit number (e.g., 2357)
Extract each digit from MSB (3rd) to LSB (0th):
- Digit 3 (MSB): number / 1000
- Digit 2: (number % 1000) / 100
- Digit 1: (number % 100) / 10
- Digit 0 (LSB): number % 10

### For 5-digit number (e.g., 85642)
Extract digits similarly:
- Digit 4 (MSB): number / 10000
- Digit 3: (number % 10000) / 1000
- Digit 2: (number % 1000) / 100
- Digit 1: (number % 100) / 10
- Digit 0 (LSB): number % 10

### For 6-digit number (e.g., 918273)
Same idea:
- Digit 5 (MSB): number / 100000
- Digit 4: (number % 100000) / 10000
- Digit 3: (number % 10000) / 1000
- Digit 2: (number % 1000) / 100
- Digit 1: (number % 100) / 10
- Digit 0 (LSB): number % 10

---

### General Approach: think

---
## Assignment 4: Print 0th Digit of Number (Least Significant Digit)  
### Problem Statement  
Print the last digit of a number.  

### Solution Approach  
1. Start the program.  
2. Declare an integer variable.  
3. Prompt user to enter a number.  
4. Read number using `scanf` with `%d`.  
5. Find remainder when number is divided by 10 using `%`.  
6. Print original number.  
7. Print the last digit (remainder).  
8. End the program.

### Code  
```
#include<stdio.h>
int main(){
int x;
printf("enter a number: ");
scanf("%d", &x);
printf("input : %d \n", x);
printf("output : %d", x % 10);
return 0;
}

```
---

## Assignment 5: Print Most Significant Digit (MSB) of Number 

### Problem Statement  
Print the most significant digit of a number by integer division.

### Solution Approach  
1. Start the program.  
2. Declare an integer variable.  
3. Prompt user to enter a number.  
4. Read number using `scanf` with `%d`.  
5. Divide the number by 10 (for 2-digit number).  
6. Print original number.  
7. Print most significant digit (result of division).  
8. End the program.
   
### Code 
```
#include<stdio.h>
int main(){
int x;
printf("enter a number: ");
scanf("%d", &x);
printf("input : %d \n", x);
printf("output : %d", x / 10);
return 0;
}
```
---
## Assignment 6: Middle Digit of 3-Digit Number  

### Problem Statement  
Extract the middle digit from a 3-digit number.  

### Solution Approach  
1. Start the program.  
2. Declare integer variables.  
3. Prompt user to enter a 3-digit number.  
4. Read number using `scanf` with `%d`.  
5. Get remainder of number divided by 100 to remove the most significant digit.  
6. Integer divide the remainder by 10 to isolate the middle digit.  
7. Print original number.  
8. Print the middle digit.  
9. End the program.  

### Code
```
#include<stdio.h>
int main(){
int x, y;
printf("enter a number: ");
scanf("%d", &x);
y = x % 100;
printf("input : %d \n", x);
printf("output : %d \n", y / 10);
return 0;
}
```
---

## Assignment 7: Sum of Digits of 3-Digit Number  

### Problem Statement  
Find the sum of digits of a 3-digit number.  

### Solution Approach  
1. Start the program.  
2. Declare integer variables for the number and its digits.  
3. Prompt user to enter a 3-digit number.  
4. Read number using `scanf` with `%d`.  
5. Extract the most significant digit (MSB) by dividing by 100.  
6. Extract the middle digit by taking remainder of division by 100, then dividing by 10.  
7. Extract the least significant digit (LSB) by taking remainder of division by 10.  
8. Sum all three digits.  
9. Print original number.  
10. Print the sum of the digits.  
11. End the program.
    
### Code  
```
#include<stdio.h>
int main(){
int x, msb, mid, lsb;
printf("enter a number: ");
scanf("%d", &x);
msb = x / 100;
mid = (x % 100) / 10;
lsb = x % 10;
printf("input : %d \n", x);
printf("sum = %d", msb + mid + lsb);
return 0;
}
```

---




## Assignment 8: Sum of Digits of Any Number  

### Problem Statement  
Calculate sum of digits of any number.  

### Solution Approach  
1. Start the program.  
2. Declare a variable to store the input number (use `long long` for large numbers).  
3. Declare variables for sum and digit.  
4. Prompt user to enter a number.  
5. Read number using `scanf` with `%lld`.  
6. Use a loop to extract each digit until number becomes 0:  
   - Find the last digit using modulus `% 10`.  
   - Add the digit to sum.  
   - Remove the last digit by dividing number by 10.  
7. Print the sum of digits.  
8. End the program.
   
### Code  
```
#include <stdio.h>
int main() {
long long n;
int sum = 0, digit;
printf("Enter a number: ");
scanf("%lld", &n);
while (n > 0) {
digit = n % 10;
sum += digit;
n /= 10;
}
printf("Sum of digits = %d\n", sum);
return 0;
}
```
---



