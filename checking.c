// #include <stdio.h>
// #include <stdlib.h> // Add missing include statement for the stdlib.h library

// // Function to generate Golomb sequence
// void generate_golomb_sequence(int length) {
//     int prev = 1; // First term is always 1
    
//     // Print the first term
//     printf("Golomb sequence of length %d: 1 ", length);
    
//     // Calculate and print the Golomb sequence
//     for (int i = 2; i <= length; i++) {
//         int curr = 1 + prev;
//         printf("%d ", curr);
//         prev = curr;
//     }
    
//     printf("\n");
// }

// int main() {
//     int length;
    
//     // Input the desired length of the Golomb sequence
//     printf("Enter the length of the Golomb sequence: ");
//     scanf("%d", &length);
    
//     // Generate and print the Golomb sequence
//     generate_golomb_sequence(length);
    
//     return 0;
// }

// creating array that taking user input 

// #include <stdio.h>
// int main(){
//     int a[]=[43,345,235,3245,32454];
//     // for(int i=0;i<5;i++){
//     //     printf("Enter the value of a[%d]: ",i);
//     //     scanf("%d",&a[i]);
//     // }
//     // for(int i=0;i<5;i++){
//     //     printf("The value of a[%d] is %d\n",i,a[i]);
//     // }
//     //printf("%u ", a);
//     // printf("%u ", a[0]);
//     // printf("%u ", a[2]);


//     return 0;
// }


// square of a number in array in another array
// #include<stdio.h>

// int main(){
//     int a[5],b[5];
//     for(int i=0;i<5;i++){
//         printf("Enter the value of a[%d]: ",i);
//         scanf("%d",&a[i]);
//     }

//     c = sizeof(a);
//     printf("%d\n", c);
    
//     for(int i=0;i<5;i++){
//         b[i]=a[i]*a[i];
//     }
//     for(int i=0;i<5;i++){
//         printf("The value of a[%d] is %d and square is %d\n",i,a[i],b[i]);
//     }
//     return 0;
// }


// // writing a  simple program with extern storage class

// #include<stdio.h>

// int a = 10;

// int main(){
//     extern int a;
//     printf("The value of a is %d\n",a);
//     return 0;
// }

// wap that input character and find it c

#include<stdio.h>

char predecessor(char c){
    if(c == 'a'){
        return 'z';
    }
    else if(c == 'A'){
        return 'Z';
    }
    else
    return c - 1;
}

int main(){
    char c;
    printf("Enter the character: ");
    scanf("%c",&c);
    printf("The predecessor of %c is %c\n",c,predecessor(c));
    return 0;
}

// armstrong number
#include<stdio.h>
#include<math.h>
int check_armstrong(int n){
    int sum = 0;
    int originaln = n;
    while(n>0){
        int lastdigit = n%10;
        sum += pow(lastdigit,3);
        n = n/10;
    }
    return sum == originaln;
}

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(check_armstrong(n)){
        printf("The number is armstrong\n");
    }
    else{
        printf("The number is not armstrong\n");
    }
    return 0;
}