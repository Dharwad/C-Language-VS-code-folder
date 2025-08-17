/* 
Arrays: an array is a collection of elements that are all of the same data type, 
stored contiguously (side by side, with no gaps) in memory. It allows you to store and access multiple values
using a single variable name, with each value identified by an index.
 
*/
#include<stdio.h>
//#define Logic_01
//define Logic_02
//#define Logic_03
//#define Logic_04
//#define Logic_05
//#define Logic_06
//#define Logic_07
#define Logic_08



#ifdef Logic_01 /* create array of 10 numbers , verify pointer arithmetic 
that (ptr+2) points to the third element where ptr is a pointer pointing
to the first element of the array*/
int main() {
   int a[]= {1,2,3,4,5,6,7,8,9,10};
    int *ptr =a ;
    printf("The value at address %u is %d",ptr+2 , *(ptr+2));
}
#endif

#ifdef Logic_02 /* Create an array of 10 integers and store multiplication table of 5 in it */
int main() {
   int t[10];
   for (int i=0;i<10;i++)
   {
       t[i]= 5* (i+1);
   }
   for (int i=0 ; i<10 ; i++)
   {
       printf("5 time %d is %d\n",i+1,t[i]);
   }
    return 0;
}
#endif

#ifdef Logic_03 /*using scanf for the logic_02*/
int main() {
    int n;
    printf("Enter the Number for which you need times table\n");
    scanf("%d", &n); // &n address of n
   int t[10];
   for (int i=0;i<10;i++)
   {
       t[i]= n* (i+1);
   }
   for (int i=0 ; i<10 ; i++)
   {
       printf("%d time %d is %d\n",n,i+1,t[i]);
   }
    return 0;
}
#endif

#ifdef Logic_04 /*wrting a program containing a function which reverses 
the aray passed to it*/
/* logic used in reverser function is temp=a, a=b, b=temp*/
void printArray(int a[],int n){
    for (int i=0;i<n;i++){
        printf("%d", a[i]);
    }
    printf("\n");
}
void reverse(int arr[],int n){
    int temp;
    for (int i =0; i<n/2; i++){
        temp = arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
}
int main() {
    int arr[]= {10 , 20 , 30 , 40 , 50 ,60};
    printArray(arr,6);
    reverse(arr,6);
    printArray(arr,6);
    return 0;
}
#endif



#ifdef Logic_05 /*program to count the + integers in an array*/
int count(int a[],int n){
    int no_of_positive=0;
    for (int i=0; i<n; i++){
        if (a[i]>0){
            no_of_positive++;
        }
    }
    return no_of_positive;
}

int main() {
    int a[] = {1,2,3,-4,-5,6,7,8,-9,10};
        printf("The number of positive numbers is %d", count(a,10));
        return 0;
}
#endif



#ifdef Logic_06/*create array size 3x10 containing times table of numbers
2, 7, 9 */
int main() {
    int arr[3][10];
    int mul[]={2,7,9};
    for (int i=0 ;i<3;i++)
    {
        for (int j=0;j<10;j++){
            arr[i][j] = mul[i] * (j+1);
        }
    }
    for (int i=0 ;i<3;i++)
    {
        for (int j=0;j<10;j++){
            printf("The value of array [i][j] is %d\n",arr[i][j]);
        }
        printf("\n"); 
    }
    return 0;
}
#endif

#ifdef Logic_07/* repeating the logic 6 with user input */
int main() {
    int x,y,z;
    printf("Enter 3 number for which you need times table\n");
    scanf("%d %d %d",&x,&y,&z);
    int arr[3][10];
    int mul[]={x,y,z};
    for (int i=0 ;i<3;i++)
    {
        for (int j=0;j<10;j++){
            arr[i][j] = mul[i] * (j+1);
        }
    }
    for (int i=0 ;i<3;i++)
    {
        for (int j=0;j<10;j++){
            printf("The value of array [i][j] is %d\n",arr[i][j]);
        }
        printf("\n"); 
    }
    return 0;
}
#endif



#ifdef Logic_08/*Create three Dimensional array & print the
address of its elements in increasing order */
int main(){
 int arr [2][3][4];   
    for (int i =0 ; i<2 ; i++){
        for (int j=0; j<3 ;j++){
            for (int k=0; k<4; k++){
                printf("%u\n", &arr[i][j][k]);
            }
        }
    }
    return 0;
}
#endif




