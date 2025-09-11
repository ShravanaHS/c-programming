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


## Assignment 8: Sum of Digits of a 3-Digit Number  

### Problem Statement  
Take a 3-digit number from the user and print the sum of its digits. 

### Solution Approach  
1. Start the program.  
2. Declare an integer variable to store the input number.  
3. Prompt user to enter a 3-digit number.  
4. Read number using `scanf` with `%d`.  
5. Extract the most significant digit using integer division by 100.  
6. Extract the middle digit using `(number % 100) / 10`.  
7. Extract the least significant digit using `(number % 100) % 10`.  
8. Add the three digits to get the sum.  
9. Print the entered number and the sum of its digits. 
10. End the program.
    
### Code  
```
#include <stdio.h>
int main()
{
int num;
printf("enter a number");
scanf("%d", &num);
printf("entered number is %d", num);
int sum = (num / 100) + (num % 100) / 10 + (num % 100) % 10;
printf(" sum is : %d ", sum);
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
## Assignment 9: Reverse Digits of a 2-Digit Number  

### Problem Statement  
Take a 2-digit number from the user and print the reverse of its digits.  

### Solution Approach  
1. Start the program.  
2. Declare an integer variable to store the input number.  
3. Prompt user to enter a 2-digit number.  
4. Read number using `scanf` with `%d`.  
5. Extract the most significant digit (MSB) using division by 10.  
6. Extract the least significant digit (LSB) using modulus `% 10`.  
7. Form the reversed number as `LSB * 10 + MSB`.  
8. Print the entered number and the reversed number.  
9. End the program.
    
### Code  
```
#include <stdio.h>
int main()
{
int num;
printf("enter a 2 digit number");
scanf("%d", &num);
printf("entered number is %d", num);
int rev = (num / 10) + (num % 10) * 10;
printf(" reverse is : %d ", rev);
return 0;
}
```
---
## Assignment 10: Reverse Digits of a 3-Digit Number  

### Problem Statement  
Take a 3-digit number from the user and print the reverse of its digits.

### Solution Approach  
1. Start the program.  
2. Declare an integer variable to store the input number.  
3. Prompt user to enter a 3-digit number.  
4. Read number using `scanf` with `%d`.  
5. Extract the most significant digit (MSB) using division by 100.  
6. Extract the middle digit using `(number % 100) / 10`.  
7. Extract the least significant digit (LSB) using `(number % 100) % 10`.  
8. Form the reversed number as `LSB * 100 + Middle * 10 + MSB`.  
9. Print the entered number and the reversed number.  
10. End the program.
    
### Code  
```
#include <stdio.h>
int main()
{
int num;
printf("enter a number");
scanf("%d", &num);
printf("entered number is %d", num);
int rev = (num / 100) + ((num % 100) / 10) * 10 + ((num % 100) % 10) * 100;
printf(" rev is : %d ", rev);
return 0;
}
```
---

## Assignment 11: Reverse the 2 MSB Digits of a 4-Digit Number 

### Problem Statement  
Take a 4-digit number from the user and print the result of reversing the two most significant digits.  

### Solution Approach  
1. Start the program.  
2. Declare an integer variable to store the input number.  
3. Prompt user to enter a 4-digit number.  
4. Read number using `scanf` with `%d`.  
5. Extract the most significant digit (msb) by dividing by 1000.  
6. Extract the 2nd digit (middlem) using `(number % 1000) / 100`.  
7. Extract the last two digits (middlm) using `(number % 1000) % 100`.  
8. Reverse the positions of the msb and middlem, and reconstruct the number as `middlem * 1000 + msb * 100 + middlm`.  
9. Print the entered number and the new number with reversed MSB digits.  
10. End the program.
     
### Code  
```
#include <stdio.h>
int main()
{
int num;
printf("enter a number: ");
scanf("%d", &num);
printf("entered number is %d", num);
int msb = num / 1000;
int middlem = (num % 1000) / 100;
int middlm = (num % 1000) % 100;
int rev = middlem * 1000 + msb * 100 + middlm;
printf(" rev is : %d ", rev);
return 0;
}
```
---
## Assignment 12: Check in 2-Digit Number if the Digits are Equal

### Problem Statement  
Take a 2-digit number from the user and print `1` if both digits are equal, otherwise print `0`.

### Solution Approach  
1. Start the program.  
2. Declare an integer variable to store the input number.  
3. Prompt user to enter a 2-digit number.  
4. Read number using `scanf` with `%d`.  
5. Print the entered number.  
6. Extract the most significant digit (msb) using integer division by 10.  
7. Extract the least significant digit (lsb) using modulus `% 10`.  
8. Use the ternary operator to compare `msb` and `lsb`:  
   - Print `1` if they are equal.  
   - Print `0` if they are not equal.  
9. End the program.
    
### Code  
```
#include<stdio.h>
int main(){
int num;
printf("enter a number: ");
scanf("%d", &num);
printf("your entered number is %d \n", num);
int msb = num / 10;
int lsb = num % 10;
msb == lsb ? printf("1") : printf("0");
return 0;
}
```
---

## Assignment 13: Check Equality of 4,3 Digits with 2,1 Digits in 4-Digit Number  

### Problem Statement  
Get a 4-digit number from the user and print `1` if the number formed by the 4th and 3rd digits is equal to the number formed by the 2nd and 1st digits, otherwise print `0`.  

### Solution Approach  
1. Start the program.  
2. Declare an integer variable to store the input number.  
3. Prompt user to enter a 4-digit number.  
4. Read number using `scanf` with `%d`.  
5. Print the entered number.  
6. Extract the 4th digit (`b4`) by dividing by 1000.  
7. Extract the 3rd digit (`b3`) by taking the remainder after dividing by 1000, then dividing by 100.  
8. Extract the 2nd digit (`b2`) by taking the remainder after dividing by 100, then dividing by 10.  
9. Extract the 1st digit (`b1`) by taking the remainder after dividing by 10.  
10. Form two numbers: one from 4th and 3rd digits (`b4*10 + b3`), one from 2nd and 1st digits (`b2*10 + b1`).  
11. Use the ternary operator to check if the two numbers are equal:  
    - Print `1` if equal, `0` if not.  
12. End the program.
    
### Code  
```
#include<stdio.h>
int main(){
int num;
printf("enter a number: ");
scanf("%d", &num);
printf("your entered number is %d \n", num);
int b4 = num / 1000;
int b3 = (num % 1000) / 100;
int b2 = ((num % 100) / 10);
int b1 = num % 10;
(b4 * 10 + b3) == (b2 * 10 + b1) ? printf("1") : printf("0");
return 0;
}
```
---

## Assignment 14: Check If 4-Digit Number is Greater Than or Equal to 50  

### Problem Statement  
Get a 4-digit number from the user and print `"success"` if the number is greater than or equal to 50, otherwise print `"failure"`.  

### Solution Approach  
1. Start the program.  
2. Declare an integer variable to store the input number.  
3. Prompt the user to enter a 4-digit number.  
4. Read the number using `scanf` with `%d`.  
5. Print the entered number.  
6. Use the ternary operator to check if the number is greater than or equal to 50:  
   - If true, print `"success"`.  
   - If false, print `"failure"`.  
7. End the program.
   
### Code  
```
#include<stdio.h>
int main(){
int num;
printf("enter a number: ");
scanf("%d", &num);
printf("your entered number is %d \n",num);
num >= 50 ? printf("success") : printf("failure");
return 0;
}
```
---
```
Check if a number is a palindrome:
Get any integer from user and determine if the number reads the same forward and backward.
Find the sum of the first and last digits of a number:
Get a number from the user and add the first digit (MSB) and the last digit (LSB) together.
Swap first and last digits of a number
Take a multi-digit number and print the number after swapping the first and last digits.
Print digits of a number in words
Get a number and print each digit as a word, e.g., 145 → "One Four Five".
Check if a number is an Armstrong number:
For a 3-digit number, print "Yes" if sum of cubes of its digits equals the number, else print "No".
Find the product of digits of a given number:
Multiply all digits of the input number and print the result.
Reverse the digits of any n-digit number:
Print the reverse of an integer input by the user (not just two/three/four digits, but for any length number).
```
---

# C Programming Loops: Theory and Assignments

## What are Loops in C?
Loops in C programming allow the repeated execution of a block of code as long as a specified condition is true. This helps avoid repetitive code and makes programs more efficient and readable.

---

## Types of Loops in C
There are three types of loops:

1. **for Loop**  
2. **while Loop**  
3. **do-while Loop**

---

## for Loop
The `for` loop is an **entry-controlled** loop, meaning the condition is checked before each iteration. It consists of three main parts: initialization, condition, and update statement.

### Syntax
```
for (initialization; condition; update) {
// Code to execute
}
```


---

## while Loop
The `while` loop is also an entry-controlled loop. The condition is checked before the execution of the loop body. The loop continues as long as the condition is true.

### Syntax
```
while (condition) {
// Code to execute
}
```
---

## do-while Loop
The `do-while` loop is a **post-controlled** loop. The loop body is executed at least once before the condition is checked.

### Syntax
```
do {
// Code to execute
} while (condition);
```
---


## Assignment 1: Print Numbers from 1 to N using goto Loop  

### Problem Statement  
Take a number `N` from the user and print numbers from 1 up to `N` using a loop structure.  

### Code  
```
#include<stdio.h>
int main(){
int num;
int i = 0;
printf("enter a number: ");
scanf("%d", &num);
loop : if( i < num ){
i++;
printf("%d", i);
goto loop;
}
return 0;
}
```

---

## Assignment 2: Print Numbers from N down to 1 using goto Loop  

### Problem Statement  
Take a number `N` from the user and print numbers from `N` down to 1 using a loop structure.  

### Code  
```
#include<stdio.h>
int main(){
int num;
int i = 0;
printf("enter a number: ");
scanf("%d", &num);
loop : if(i < num){
printf("%d \n", num);
num--;
goto loop;
}
return 0;
}
```

---

## Assignment 3: Sum Numbers from 0 to N Using For Loop  

### Problem Statement  
Calculate the sum of all integers from 0 up to a given number `N` using a `for` loop. 

### Code 
```
#include<stdio.h>
int main(){
int num = 5;
int i, sum = 0;
for(i = 0; i <= num; i++){
sum += i;
}
printf("%d", sum);
return 0;
}
```
---

## Assignment 4: Sum Numbers from N down to 0 Using For Loop  

### Problem Statement  
Calculate the sum of all integers from `N` down to 0 using a `for` loop.  

### Code  
```
#include<stdio.h>
int main(){
int num = 6;
int i, sum = 0;
for(i = num; i >= 0; i--){
sum += i;
}
printf("%d", sum);
return 0;
}
```
---

## Assignment 5: Print Odd Numbers from N down to 1  

### Problem Statement  
Print all odd numbers from the entered number `N` down to 1.  
### Code  
```
#include<stdio.h>
int main(){
int num = 9;
int i;
for(i = num; i > 0; i -= 2){
printf("%d \n", i);
}
return 0;
}
```
---

## Assignment 6: Print Numbers in Given Range with Step 2 Using For Loop

### Problem Statement  
Take two numbers `i` and `j` from the user representing the range and print numbers from `i` to `j` (exclusive) incrementing by 2.  

### Code  
```
#include<stdio.h>
int main(){
int i, j, k;
printf("enter the range : ");
scanf("%d %d", &i, &j);
for(k = i; k < j; k += 2){
printf("%d \n", k);
}
return 0;
}
```
---

## Assignment 7: Print Odd Numbers Whose Sum of Digits Equals a Given Number  

### Problem Statement  

Given a number `num`, print all odd numbers between 0 and 999 whose digits sum up to `num`.  

### Code  
```
#include<stdio.h>
int main(){
int num, i;
printf("enter a number: ");
scanf("%d", &num);
for(i = 0; i < 999 ; i++){
int msb = i / 100;
int middle = (i % 100) / 10;
int lsb = i % 10;
if(msb + middle + lsb == num && i % 2 != 0){
printf("%d \n", i);
}
}
return 0;
}
```
---

## Assignment 8: Print Even Numbers Whose Sum of Digits Equals a Given Number  

### Problem Statement  
Given a number `num`, print all even numbers between 0 and 999 whose digits sum up to `num`.  

### Code  
```
#include<stdio.h>
int main(){
int num, i;
printf("enter a number: ");
scanf("%d", &num);
for(i = 0; i < 999 ; i += 2){
int msb = i / 100;
int middle = (i % 100) / 10;
int lsb = i % 10;
if(msb + middle + lsb == num){
printf("%d \n", i);
}
}
return 0;
}
```
---

## Assignment 9: Count Number of Digits in a Number  

### Problem Statement  
Take a number from the user and count how many digits it contains, including large and negative numbers.  

### Code  
```
#include <stdio.h>
int main() {
long long num;
int count = 0;
printf("Enter a number: ");
scanf("%lld", &num);
if (num == 0) {
count = 1;
} else {
if (num < 0) {
num = -num;
}
while (num != 0) {
num = num / 10;
count++;
}
}
printf("The number has %d digits.\n", count);
return 0;
}

```
---

## Assignment 10: Count and Sum Digits of a Number  

### Problem Statement  
Take a number from the user, count its digits and calculate the sum of the digits.  

### Solution Approach  
1. Start the program.  
2. Declare `long long` variables `num` and `temp` to handle large numbers.  
3. Declare integer variables `count` initialized to 0 for counting digits, `sum` initialized to 0 for summing digits, and `digit` to hold individual digits.  
4. Prompt the user to enter a number and read it using `scanf`.  
5. Handle the special case where the number is 0: print 1 digit and sum 0, then terminate.  
6. If the number is negative, convert it to positive for digit processing.  
7. Copy the input number into `temp` to preserve the original.  
8. Use a `while` loop to count digits by dividing `temp` by 10 until it becomes 0, incrementing `count` at each step.  
9. Reset `temp` to the original number for summing digits.  
10. Use another `while` loop to extract each digit using modulo 10, add it to `sum`, and then divide `temp` by 10 until it becomes 0.  
11. Print the total digit count and sum of digits.  
12. End the program.
    
### Code  
```
#include <stdio.h>
int main() {
long long num, temp;
int count = 0, sum = 0, digit;
printf("Enter a number: ");
scanf("%lld", &num);
if (num == 0) {
printf("Number of digits = 1\nSum of digits = 0\n");
return 0;
}
if (num < 0) {
num = -num;
}
temp = num;
while (temp != 0) {
temp = temp / 10;
count++;
}
temp = num;
while (temp > 0) {
digit = temp % 10;
sum = sum + digit;
temp = temp / 10;
}
printf("Number of digits = %d\n", count);
printf("Sum of digits = %d\n", sum);
return 0;
}
```
---
