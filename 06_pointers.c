/* 
Pointers in C: Pointer is a variable which stores the memory address of another variable

concept: 1) Call by reference , 
2) Call by value
3) Swap with temporary fucntion
*/
#include<stdio.h>
//#define pointer
//#define pointer_call_by_reference
//#define Swap
//#define Logic_01
//#define Logic_02
//#define Logic_03
//#define Logic_04
//#define Logic_05
//#define Logic_06
#define Logic_07


#ifdef pointer
int main() {
    long int x=867893405829;
    long int *u = &x; //pointer to integer variable
    char i = 'A'; 
    char *j= &i;    //pointer to character variable 
    float m= 9.8;
    float *n= &m; //pointer to float variable
        printf("address of x is %p\n", *u);
        printf("address of i is %p\n", j);
        printf("address of m is %p", n);
        return 0;
}
#endif

#ifdef pointer_call_by_reference
int sum(int* a,int* b){
    *a =4;
    return (*a +*b);
}
int main(){
    int x=2 ,y=6;
    printf("the sum of x and y is %d\n", sum(&x, &y)); //by using &x we assign value of pointer a to x
    printf("the value of x is %d\n", x);
}
#endif

#ifdef Swap
void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
}
int main(){
    int a=13,b=101;
    swap (&a,&b);
    printf("the value of a is %d & value of b is %d",a,b);
    return 0;
}
#endif

#ifdef Logic_01 //program to print address of a variable and use this address to get the value 
int main(){
    int i =3;
    printf("the address of i is %u\n",&i);  //%u is unsigned non-negative integer
    int *ptr= &i;
    printf("the value of address %u is %d\n",&i,*ptr);
    return 0;
}
#endif

#ifdef Logic_02 //passing the variable 'i' to a function and check if both addresses are same ? why ?
int returning_5(int* ptr){
    printf("THe value of ptr is %d\n", ptr);
    printf ("The value of ptr is %d\n", *ptr);
    return 5;
}
int main(){
    int i =3;
    int *ptr= &i;
    printf("the address of i is %u\n",&i);  //%u is unsigned non-negative integer
    returning_5(ptr);
    return 0;
}
#endif


#ifdef Logic_03 //program to change the value of the variable to 30 times of its current value
void change_to_thirty_times(int*); //function prototype
void change_to_thirty_times(int* a){ 
    *a = *a * 30;}
int main(){ 
 int  x = 10;
 printf("value of x is %d\n", x);
 change_to_thirty_times(&x);
 printf("The value of x is %d\n",x);
 return 0;
}
#endif

#ifdef Logic_04 //Write a function and pass the value by reference ; address of a function gets destroyed after its executed
void pass_function(int*); //function prototype
void pass_function(int* a){ 
    *a = *a * 30;}
int main(){ 
 int  x = 30;
 printf("value of x is %d\n", x);
 pass_function(&x); // passing the value of 'x' in the intial function initiated, similar to example before
 printf("The value of x is %d\n",x);
 return 0;
}
#endif

#ifdef Logic_05 // write function for average and sum of 2 numbers , use pointers and print them in main()
int* sum(int a,int b){
    int s=a+b;
    printf("he sum is %d\n", s);
    int * ptr= &s;
    return ptr;
//printf("The sum is %d", a+b);
}
float* average(int a ,int b){
    float avg= (a+b)/2;
    printf("he average is %f\n", avg);
    float* ptr= &avg;
    return ptr;

}
int main(){
    int x=5;
    int y=5;
    //printf("the sum is %d\n",s);
    //printf("the average is %f\n",avg);
    
    int* ptr1;
    float* ptr2;
    ptr1= sum(x,y);
    ptr2= average(x,y);
    sum(x,y);   // The value of x and y will be passed through the function sum loop above
    average(x,y); // The value of x and y will be passed through the function sum loop above
    
    printf("the address of sum is %u and the address of average is %u\n", ptr1,ptr2);
    return 0;
}
#endif

#ifdef Logic_06 // write a program to print value of variable 'i' using pointer to pointer type of variable

int main(){
    int i =3;
    int *ptr1 = &i;
    int **ptr2 = &ptr1;
    printf("the address of i is %u\n",&i);  
    printf("the address of i is %u\n",&*ptr1);
    printf("the address of i is %u\n",&**ptr2); // passing the address value from ptr1 to ptr2 of value 'i' 
    return 0;
}
#endif

#ifdef Logic_07 /* trying logic_3 using call by value and verify that it does not change the value of the said variable*/
void change_to_thirty_times(int); //function prototype
void change_to_thirty_times(int a){ 
    a = a * 30;}
int main(){ 
 int  x = 10;
 printf("value of x is %d\n", x);
 change_to_thirty_times(x);
 printf("The value of x is %d\n",x); // the value does not change as passing copy not the address unlike in logic_03
 return 0;
}
#endif