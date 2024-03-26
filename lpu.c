// #include<stdio.h>
// int main(){
//     int p,t;
//     float r;
//     scanf("%d\t%f\t%d",&p,&r,&t);
//     float si = p*r*t/100;
//     printf("%f",si);
//     return 0;
// }
// You are using GCC
// #include<stdio.h>
// int main(){
//     int x ;
//     printf("X:",x);
//     scanf("%d",&x);
    
//     int y = -x;
//     printf("negayted number: %d\n",y);
//     return 0;
// }

// FOR PRINTINTING THE VALUE UP TO NEEDED DECHEMALS
// #include<stdio.h>
// int main(){
//     const float pi = 3.14379;
//     printf("%.2f\n",pi);
//     return 0;
// }

// # include<stdio.h>
// int main(){
//     int a = 1 , b=1 ;
//     int result = !(a && b);
//     printf("%d",result);
//     return 0;
// }


// Ternary Operators
/*#include<stdio.h>
int main(){
    char o_char;
    scanf("%c",&o_char);
    char c_char=(o_char>='a' && o_char<='z') ? o_char - 'a'+'A' : o_char;
    printf("%c",c_char);
    return 0;
}*/


// using if else
/*#include <stdio.h>

int main() {
    int number;

    // Prompting the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Checking if the number is positive or negative
    if (number > 0) {
        printf("The number %d is positive.\n", number);
    } else if (number < 0) {
        printf("The number %d is negative.\n", number);
    } else {
        printf("The number is zero, neither positive nor negative.\n");
    }

    return 0;
}*/


// USING TERNARY OPERATOR
/*#include <stdio.h>

int main() {
    int number;

    // Prompting the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Using ternary operator to check if the number is positive or negative
    (number > 0) ? printf("The number %d is positive.\n", number) : 
                   (number < 0) ? printf("The number %d is negative.\n", number) :
                                  printf("The number is zero, neither positive nor negative.\n");

    return 0;
}*/
/*
#include<stdio.h>
int main(){
    int marks;
    scanf("%d",&marks);
    (marks>90)&&(marks<100)?printf("A"):(marks>70)&&?printf("B"):(marks>60)?printf("c"):(marks>50)?printf("D"):(marks>40)?printf("E"):printf("Reappear");
    return 0;
}
*/
/*#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    switch(a){
        case 1:
            printf("January has 31 days.");
            break;
        case '2':
            printf("February has 28 or 29 days.");
            break;
        case '7':
            printf("July has 31 days.");
            break;
        default:
            printf("Invalid month number.");
    }
    return 0;
    
}
*/

/*#include<stdio.h>
int main(){
    int i;
    for(i=1;i<=5;i){
        printf("%d",i++);
    }
    return 0;
}*/

/*#include <stdio.h>

int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    
    printf("Factors of %d are: ", number);
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            printf("%d, \n", i);
            if(i%2==0){
                printf("even factors: %d, \n",i);
            }else {
                printf("odd factors: %d, ",i);
            }
        }
    }
    
    return 0;
}
*/
/*#include <stdio.h>

int main() {
    int num;

    // Prompt the user to enter a number
    printf("Enter a number: ");

    // Read the number from the user
    scanf("%d", &num);

    // Track presence of even and odd factors
    int hasEven = 0, hasOdd = 0;

    // Print even factors
    printf("Even factors: ");
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0 && i % 2 == 0) {
            printf("%d ", i);
            hasEven = 1;  // Set flag if at least one even factor found
        }
    }
    if (!hasEven) {
        printf("unavailable\n");
    } else {
        printf("\n"); // Newline for separation
    }

    // Print odd factors
    printf("Odd factors: ");
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0 && i % 2 != 0) {
            printf("%d ", i);
            hasOdd = 1;   // Set flag if at least one odd factor found
        }
    }
    if (!hasOdd) {
        printf("unavailable\n");
    } else {
        printf("\n"); // Newline for readability
    }

    return 0;
}


#include<stdio.h>
int main{
    float a,b;
    scanf("%f",&a);
    scanf("%f",&b);
    float a = a+b;
    float b=a-b;
    float a = a-b;
    printf("Before Swapping %f %f",a,b);
    printf("After swapping %f %f",b,a);
    return 0;
}*/

/*#include<stdio.h>
int main(){
    float m1,n1,m2,n2;
    scanf("%f %f",&m1,&n1);
    scanf("%f %f",&m2,&n2);
    float c1=(m1+n1)/2;
    float c2=(m2+n2)/2;
    printf("Crop 1: %.2f kg\n",c1);
    printf("Crop 2: %.2f kg\n",c2);
    printf("\n");
    (c1>c2)?printf("Crop 1 had the highest average yield\n"):printf("Crop 2 had the highest average yield\n");
    return 0;
}*/

#include<stdio.h>
int main(){
    int count=0, n=100;
    do{
        if(n%7==0){
            count++;
        }
        n--;
    }
    while(n>0);
    printf("%d",count);
    return 0;
}

#include <stdio.h> 
int main() { 
    for(int k = 0; k < 5; k++) { 
        printf("%d ", k * k (k + k)); 
    } 
    return 0; 
}

#include <stdio.h>
    
int main() {
    int b=2;
    do{
        printf("%d ", b);
        b++;
    }while(b < 1);
    return 0;
}

#include <stdio.h> 
int main() { 
    int count = 0; 
    for (int i = 100; i >= 0; i -= 10) { 
        count++; 
    } 
    printf("%d", count); 
    return 0; 
}

#include <stdio.h>
    
int main() {
    int i = 5;
    while (i > 0) {
        printf("%d ", i--);
    }
    return 0;
}


// Perfect number 
#include <stdio.h>

int main() {
    int start, end, i, j, sum;
    int hasPerfect = 0; // Flag to check if there is at least one perfect number

    printf("Enter the starting value of the range: ");
    scanf("%d", &start);

    printf("Enter the ending value of the range: ");
    scanf("%d", &end);

    printf("Perfect numbers within the range %d to %d are:\n", start, end);

    for (i = start; i <= end; i++) {
        sum = 0;
        for (j = 1; j <= i / 2; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum == i) {
            printf("%d\n", i);
            hasPerfect = 1; // Set flag if at least one perfect number found
        }
    }

    if (!hasPerfect) {
        printf("No perfect numbers found in the range.\n");
    }

    return 0;
}


#include <stdio.h>

int main() {
    int num1, num2;
    char operator;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%d", &num2);

    switch (operator) {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%d / %d = %d\n", num1, num2, num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}


#include <stdio.h>

int hailstoneLength(int n) {
    int length = 1;
    printf("Hailstone sequence: %d ", n);
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        printf("%d ", n);
        length++;
    }
    printf("\n");
    return length;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int length = hailstoneLength(number);
    printf("Length of the Hailstone sequence starting from %d is %d\n", number, length);
    return 0;
}

#include <stdio.h>

int findSecondLargestDigit(int x) {
    int largest = 0;
    int secondLargest = 0;

    while (x > 0) {
        int digit = x % 10;

        if (digit > largest) {
            secondLargest = largest;
            largest = digit;
        } else if (digit > secondLargest && digit < largest) {
            secondLargest = digit;
        }

        x /= 10;
    }

    return secondLargest;
}

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    int secondLargest = findSecondLargestDigit(x);
    printf("The second largest digit in %d is %d\n", x, secondLargest);

    return 0;
}


// CHECKING THE NUMBER OF COINS USED
// #include <stdio.h>

// int main() {
//     int amount = 489;
//     int coins[] = {100, 10, 5, 2, 1};
//     int numCoins = sizeof(coins) / sizeof(coins[0]);
//     int count = 0;

//     for (int i = 0; i < numCoins; i++) {
//         count += amount / coins[i];
//         amount %= coins[i];
//     }

//     printf("Number of coins required: %d\n", count);

//     return 0;
// }

#include <stdio.h>

int main(){
    int amount;
    scanf("%d", &amount); 
    int count = 0;

    count += amount / 100;
    amount %= 100;

    count += amount / 10;
    amount %= 10;

    count += amount / 5;
    amount %= 5;

    count += amount / 2;
    amount %= 2;

    count += amount / 1;
    amount %= 1;

    printf("Number of coins required: %d\n", count);

    return 0;
}

// STAR PATTERN
#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}


// fibonacci series

#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    while (n > 0) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
        n--;
    }

    return 0;
}

// #include <stdio.h>

// int main() {
//     long int num;
//     printf("Enter a number: ");
//     scanf("%ld", &num);

//     long int originalNum = num;
//     int sum = 0;
//     while (num > 0) {
//         int digit = num % 10;
//         int fact = 1;
//         for (int i = 1; i <= digit; i++) {
//             fact *= i;
//         }
//         sum += fact;
//         num /= 10;
//     }

//     if (sum == originalNum) {
//         printf("%ld is a strong number.\n", originalNum);
//     } else {
//         printf("%ld is not a strong number.\n", originalNum);
//     }

//     return 0;
// }

// #include <stdio.h>

// int factorial(int n) {
//     int result = 1;
//     for(int i = 1; i <= n; i++) {
//         result *= i;
//     }
//     return result;
// }

// int main() {
//     int number = 5; // Change this to the number you want the factorial of
//     printf("Factorial of %d is %d", number, factorial(number));
//     return 0;
// }



// #include <stdio.h>

// int main() {
//     long int num;
//     printf("Enter a number: ");
//     scanf("%ld", &num);

//     long int originalNum = num;
//     int sum = 0;
//     do {
//         int digit = num % 10;
//         int square = digit * digit;
//         sum += square;
//         num /= 10;
//     } while (num > 0);

//     printf("Sum of squares of digits of %ld is %d\n", originalNum, sum);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     char name[100];
//     printf("Enter a name: ");
//     scanf("%s", name);

//     int i = 0;
//     while (name[i] != '\0') {
//         if (name[i] != 'a' && name[i] != 'e' && name[i] != 'i' && name[i] != 'o' && name[i] != 'u') {
//             printf("%c", name[i]);
//         }
//         i++;
//     }

//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char name;
//     printf("Enter a name: ");
//     while (scanf("%c", &name) ,name != '\n') {
//         if (name != 'a' && name != 'e' && name != 'i' && name != 'o' && name != 'u') {
//             printf("%c", name);
//         }
//     }
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int terms;
//     scanf("%d", &terms);

//     int sum = 0;
//     int num = 1;
//     for (int i = 0; i < terms; i++) {
//         sum += num;
//         num *= 11;
//     }

//     printf("%d", sum);

//     return 0;
// }


// printing character pattern
#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    char ch ='a';

    for (int i = rows; i >= rows; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%c ",ch++);
        }
        printf("\n");
        ch ='a';
    }

    return 0;
}

// for even and odd place in input numbers

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sumEven = 0;
    int sumOdd = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            sumEven += arr[i];
        } else {
            sumOdd += arr[i];
        }
    }

    int difference = sumEven - sumOdd;
    printf("Difference between sum of even places and odd places: %d\n", difference);

    return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, evenSum = 0, oddSum = 0, place = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        int digit = num % 10;

        if (place % 2 == 0) {
            evenSum += digit;
        } else {
            oddSum += digit;
        }

        num /= 10;
        place++;
    }

    int difference = abs(evenSum - oddSum);
    printf("Difference between sum of even places and odd places: %d\n", difference);

    return 0;
}


// #include <stdio.h>

// int isPalindrome(int num) {
//     int reversedNum = 0;
//     int originalNum = num;

//     while (num != 0) {
//         int remainder = num % 10;
//         reversedNum = reversedNum * 10 + remainder;
//         num /= 10;
//     }

//     if (originalNum == reversedNum) {
//         return 1; // Palindrome
//     } else {
//         return 0; // Not a palindrome
//     }
// }

// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     if (isPalindrome(num)) {
//         printf("%d is a palindrome.\n", num);
//     } else {
//         printf("%d is not a palindrome.\n", num);
//     }

//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     int reversedNum = 0;
//     int originalNum = num;
//     while (num!=0){
//         int remainder = num % 10;
//         reversednum = reversednum * 10 + remainder;
//         num /= 10;
//     }
//     printf("%d\n", reversedNum);    
//     return 0;
// }


// #include <stdio.h>

// int isPalindrome(int num) {
//     int reversedNum = 0;
//     int originalNum = num;

//     while (num != 0) {
//         int remainder = num % 10;
//         reversedNum = reversedNum * 10 + remainder;
//         num /= 10;
//     }

//     if (originalNum == reversedNum) {
//         return 1; // Palindrome
//     } else {
//         return 0; // Not a palindrome
//     }
// }

// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     if (isPalindrome(num)) {
//         printf("%d is a palindrome.\n", num);
//     } else {
//         printf("%d is not a palindrome.\n", num);
//     }

//     int marks;
//     printf("Enter marks: ");
//     scanf("%d", &marks);

//     if (marks >= 90) {
//         printf("Grade: A\n");
//     } else if (marks >= 80) {
//         printf("Grade: B\n");
//     } else if (marks >= 70) {
//         printf("Grade: C\n");
//     } else if (marks >= 60) {
//         printf("Grade: D\n");
//     } else {
//         printf("Grade: F\n");
//     }

//     return 0;
// }

// Palindrome
#include <stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int reversedNum = 0;
    int originalNum = num;
    while (num!=0){
        int remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    
}


// perfect number
#include <stdio.h>

int main() {
    int start, end, i, j, sum;

    printf("Enter the starting value of the range: ");
    scanf("%d", &start);

    printf("Enter the ending value of the range: ");
    scanf("%d", &end);
    int perfect = 0;

    for (i = start; i <= end; i++) {
        sum = 0;
        for (j = 1; j <= i / 2; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum == i) {
            printf("%d  ", i);
            perfect = 1; //At least one is perfect 
        }
    }
        if(!perfect){
            printf("No perfect number");
        }
    
    return 0;
}

// USING GO TO STATEMENT
// #include <stdio.h>

// int main() {
//     int num, lastDigit, prevDigit;
    
//     printf("Enter a number: ");
//     scanf("%d", &num);
    
//     lastDigit = num % 10;
//     num /= 10;
    
//     while (num > 0) {
//         prevDigit = num % 10;
//         num /= 10;
        
//         if (prevDigit < lastDigit) {
//             goto notDescending;
//         }
        
//         lastDigit = prevDigit;
//     }
    
//     printf("Yes, the number is written in descending order.\n");
//     goto end;
    
// notDescending:
//     printf("No, the number is not written in descending order.\n");
    
// end:
//     return 0;
// }


// STRONG NUMBER


#include <stdio.h>
int main(){
    long long int num;
    printf("Enter a number: ");
    scanf("%lld", &num);    
    long long int temp = num;
    int sum = 0;
     while(num>0){
        int digit = num%10;
        int fact = 1;
        for(int i = 1; i<=digit; i++){
            fact *= i;
        }     
        sum += fact;
        num /= 10;
     } 
     if(sum == temp){
         printf("Yes, the number is a strong number.\n");
     }
     else{
         printf("No, the number is not a strong number.\n");
     }
     return 0;
}



// Neon Number


#include<stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int sqr = n*n;
    printf("Square of number: %d\n",sqr);
    int sum = 0;
    int temp = n;
   
    while(sqr!=0){
        int digit = sqr%10;
        sum += digit;
        sqr /= 10;
    }
    
    printf("Sum: %d\n",sum);
    if(temp == sum){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}

// Not Print Prime Number Within Range
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {

        int isPrime = 1;
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                continue ;
            }
        }
        if (!isPrime) {
            printf("%d\n", i);
        }
    }
    return 0;
}


// ARMSTRONG NUMBER

 #include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int count = 0;
    int temp = num;
    
    while (num != 0) {
        num /= 10;
        count++;
    }
    
    num = temp; // Reset num to its original value
    
    int sum = 0;
    while (num != 0) {
        int digit = num % 10;
        int n_num = 1;
        
        // Calculate digit ^ count without using pow function
        int i;
        for (i = 1; i <= count; i++) {
            n_num *= digit;
        }
        
        sum += n_num;
        num /= 10;
    }
    
    if (temp == sum) {
        printf("Yes, it is an Armstrong number: %d\n", temp);
    } else {
        printf("No, it is not an Armstrong number\n");
    }
    
    return 0;
}

//reverse your name 

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char name[100];

//     printf("Enter your name: ");
//     scanf("%s", name);

//     printf("Reversed name: ");
//     for (int i = strlen(name) - 1; i >= 0; i--) {
//         printf("%c", name[i]);
//     }
//     printf("\n");

//     return 0;
// }



// ca QUESTION
// #include<stdio.h>
// int main()  
// {  
//     int n;  
//     printf("Enter the number of rows");  
//     scanf("%d",&n);  
//     for(int i=1;i<=n;i++)  
//     {  
//         for(int j=1;j<=n;j++)  
//         {  
//             if(i==1 ||i==n||j==1||j==n)  
//             {  
//             printf("@");
              
//             }  
//             else  
//             printf(" ");  
//         }  
//         printf("\n");  
//     }  
      
//     return 0;  
// }


// Common Factor betweem two numbers
// #include <stdio.h>

// int main() {
//     unsigned int num1, num2;
//     printf("Enter two integers: ");
//     scanf("%d %d", &num1, &num2);

//     printf("Common factors between %d and %d are: ", num1, num2);
//     for (int i = 1; i <= num1 && i <= num2; i++) {
//         if (num1 % i == 0 && num2 % i == 0) {
//             printf("%d ", i);
//         }
//     }

//     return 0;
// }


// product of digits

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int pdt=1;
    while(n != 0){
        int rem = n % 10;
        pdt *= rem;
        n /= 10;
    }
    printf("%d ",pdt);
    return 0;
}




// LEAP YEAR Using SWITCH CASE

// #include <stdio.h>

// int main() {
//     int year;
//     printf("Enter a year: ");
//     scanf("%d", &year);
    
//     int isLeapYear = 0;
    
//     switch(year % 4) {
//         case 0:
//             switch(year % 100) {
//                 case 0:
//                     switch(year % 400) {
//                         case 0:
//                             isLeapYear = 1;
//                             break;
//                     }
//                     break;
//                 default:
//                     isLeapYear = 1;
//                     break;
//             }
//             break;
//         default:
//             isLeapYear = 0;
//             break;
//     }
    
//     switch(isLeapYear) {
//         case 1:
//             printf("%d is a leap year.\n", year);
//             break;
//         default:
//             printf("%d is not a leap year.\n", year);
//             break;
//     }
    
//     return 0;
// }   


// SERIES


// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);
    
//     int increment = 40;
//     int num = 20;
    
//     for (int i = 0; i < n; i++) {
//         printf("%d ", num);
//         num += increment;
//         increment += 4;
//     }
    
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
    
//     printf("Factors of %d: ", num);
//     for (int i = 1; i <= num; i++) {
//         if (num % i == 0) {
//             printf("%d ", i);
//         }
//     }
//     printf("\n");
    
//     printf("Even factors: ");
//     for (int i = 1; i <= num; i++) {
//         if (num % i == 0 && i % 2 == 0) {
//             printf("%d ", i);
//         }
//     }
//     printf("\n");
    
//     printf("Odd factors: ");
//     for (int i = 1; i <= num; i++) {
//         if (num % i == 0 && i % 2 != 0) {
//             printf("%d ", i);
//         }
//     }
//     printf("\n");
    
//     return 0;
// }


// count number of digit and and sum of input number using for loop
#include <stdio.h>  
int main()  
{  
    int n, count = 0, sum = 0, rem;  
    printf("Enter a number: ");  
    scanf("%d", &n);  
    for (; n != 0; n = n / 10)  
    {  
        rem = n % 10;  
        count++;  
        sum = sum + rem;  
    }  
    printf("Number of digits: %d\n", count);  
    printf("Sum of digits: %d\n", sum);  
    return 0;  
}


// finding prime pairs

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void findPrimePair(int num) {
    int prime1, prime2;
    for (int i = 2; i <= num / 2; i++) {
        if (isPrime(i) && isPrime(num - i)) {
            prime1 = i;
            prime2 = num - i;
            break;
        }
    }
    printf("Minimum value pair: %d, %d\n", prime1, prime2);
}

int main() {
    int num;
    printf("Enter an even integer: ");
    scanf("%d", &num);
    findPrimePair(num);
    return 0;
}


// Next Palindrome

#include<stdio.h>
#include<stdbool.h>

bool isPalindrome(int num){
    int revno = 0;
    int temp = num;
    while(num!=0){
        int rem = num%10;   
        revno = revno*10 + rem;
        num = num/10;
    }

    return (temp == revno);
}

int findNext(int num){
    while(1){
        num++;

        if(isPalindrome(num)){
            return num;
        }
    }
}

int main(){
    int input;
    printf("Enter a number: ");
    scanf("%d", &input);
    printf("The next palindrome is: %d", findNext(input));
    return 0;
}


// Taylor Series    



#include <stdio.h>
#include <math.h>

double taylorSeries(double x, int n) {
    double result = 0.0;

    for (int i = 0; i <= n; i++) {
        result += pow(x, i) / tgamma(i + 1);
    }

    return result;
}

int main() {
    double x;
    int n;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    double approximation = taylorSeries(x, n);
    printf("Approximation of e^%.2lf using %d terms: %.6lf\n", x, n, approximation);

    return 0;
}


// nth Fibonacci number using recursion

#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The %dth Fibonacci number is: %d\n", n, fibonacci(n));

    return 0;
}