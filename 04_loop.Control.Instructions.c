#include<stdio.h>
//#define Logic_1
//#define Logic_2
//#define Logic_3
//#define Logic_4
//#define Logic_5
//#define Logic_6
//#define Logic_7
//#define Logic_8
#define Logic_9

#ifdef Logic_1 /* To generate 'Times Table' for any number given by user*/
int main() {
    int n;
    printf("Enter a Number for which Times Table till 10 will be displayed \n");
    scanf("%d",&n);
    for (int i=1 ; i<58571;i++)  //incremental for loop 
    {
        printf("%d * %d = %d \n",n,i,n*i);}
}
#endif

#ifdef Logic_2 /* Generate Times Tabel in reverse of 10*/
int main(){
    int n=10;
    for(int i=10;i;i--){
        printf("%d *%d =%d\n",n,i,n*i); //decrementing for loop
    }
    return 0;
}
#endif

#ifdef Logic_3 // program to sum first 10 natural # using 'while' loop 
int main(){
    int i = 1;
    int sum =0;
    while(i<=10){
        sum+=i;
        i++;
    }
    printf("The sum of first 10 natural numbers is %d",sum);
    return 0;
    
}
#endif

#ifdef Logic_4 // program to sum first 10 natural # using 'do while' loop
int main(){
    int i =1;
    int sum =0;
    do{
        sum +=i;
        i++;
    }while (i<=10);
    printf("The Sum of first 10 natural numbers is %d\n",sum);
    return 0;
}
#endif

#ifdef Logic_5 // to generate the sum of time table for 8 till 10times
int main(){
    int sum=0;
    for (int i = 1; i<=10; i++)
    {
        sum += (8*i);
    }
    printf("The Sum of time table of 8 till 10 is %d", sum);
    return 0;
}
#endif

#ifdef Logic_6 // calculate factorial of given number (here 8) using a for loop
int main (){
    int product=1;
    int n=8 ;
    for (int i=1;i<=n; i++)
    {
        product *=i;
    }
    printf("The Factorial is %d",product);
    return 0;
    }
#endif

#ifdef Logic_7 //Calculate factorial using while loop, N will be factorial u need
int main (){
    int i=1;
    int product=1;
    int n = 5;
    while (i<=n);
    {
        product *=i;
        i++;
    }
    printf("The Factorial is %d",product);
}
#endif

#ifdef Logic_8 //check if number is prime or not using for loops
int main (){
    int n ;
    printf("Enter the number to check for prime category check\n");
    scanf("%d",&n);
    int prime=0;
    if (n==0 ||n==1)
    {
        prime=1;
    }
    else{
    for (int i=2; i<n; i++)
    {
        if(n%i == 0 ){
        prime=1; 
        break;    
        }
    }
    }
    if(prime){
        printf("%d is not a prime\n",n);
    }
        else { 
            printf("%d is prime\n",n);
            }
    return 0;
    } 
#endif

#ifdef Logic_9 //check if number is prime or not using while loops
int main (){
    int n ;
    printf("Enter the number to check for prime category check\n");
    scanf("%d",&n);
    int prime=0;
    if (n==0 ||n==1)
    {
        prime=1;
    }
    else{
    int i=2 ;
   while (i<n)
    {
        if(n%i == 0 ){
        prime=1; 
        break;    
        } 
        i++;
    }
    }
    if(prime){
        printf("%d is not a prime\n",n);
    }
        else { 
            printf("%d is prime\n",n);
            }
    return 0;
    } 
#endif