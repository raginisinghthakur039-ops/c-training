//recursion
//find 1 to 5 using recursion
// #include <stdio.h>
// void sum(int a){
//     if(a==0){
//         return;
//     }
//     sum(a-1);
//     printf("%d",a);
// }
// int main(){
//     sum(5);
//     return 0;
// }
//output-1,2,3,4,5



// #include <stdio.h>
// void sum(int a){
//     if(a==0)
//     {
//         return;
//     }
//     printf("%d",a);
//     sum(a-1);
// }
// int main(){
//     sum(5);
//     return 0;
// }
//output - 5,4,3,2,1




//sum of n natural numbers using recursion
// #include <stdio.h>
// int sum(int a)
//  {
//     if(a==0){
//         return 0;
//     }
//     return a+sum(a-1);
//  }
//  int main(){
//     int data=sum(5);
//     printf("%d",data);
//     return 0;
//  }
//output-15





//factorial of a number using recursion
// #include <stdio.h>
// int fact(int a)
//  {
//     if(a==0 || a==1){
//         return 1;
//     }
//     return a *fact(a-1);
//  }
//  int main(){
//     int data=fact(3);
//     printf("%d",data);
//     return 0;
//  }
//output-6


//find value of 2^3 using recursion
// #include <stdio.h>
// int power(int a,int b){
//     if(b==0){
//         return 1;
//     }
//     return a*power(a,b-1);
// }
// int main(){
//     int data = power(2,3);
//     printf("%d",data);
// }
    

//find th sum of array using recursion
#include <stdio.h>
int sum(int arr[],int n){
    if(n==0){
        return 0;
    }
    return arr[n-1]+sum(arr,n-1);
}
int main(){
int arr[5]={5,4,3,2,1};
int n=5;
int data = sum(arr,n);
printf("%d",data);
}
