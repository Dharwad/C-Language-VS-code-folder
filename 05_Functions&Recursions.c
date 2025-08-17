/* 
Concepts: 
1) User defined functions
prototype, definition, call

2) Recursion

*/
#include <stdio.h>
#include <math.h> // Library for math functions
//#define Logic_1
//#define Logic_2
//#define Logic_3
//#define Logic_4
//#define Logic_5
//#define Logic_6
//#define Logic_7
//#define Logic_8
#define Logic_9

#ifdef Logic_1 //calculate area of square use library function "pow"
int main() {
    double a = 8; // Make 'a' a double for precision
    printf("area of square %.0f\n",a*a);
    //printf("The area of the square: %f\n", pow(a, 2)); //a to the power of 2
    return 0;
}
#endif


/* recursion to call the function again ,for example to 
to calculate the factorial of number*/

#ifdef Logic_2
int factorial(int n) //function prototype
{
    if (n == 0 || n == 1) // Base condition
        return 1;
    else
        return n * factorial(n - 1); // Recursive case
}

int main() //function definition
{
    int num = 4;
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}
#endif

#ifdef Logic_3 /* write function to find average of 3 numbers */
double average (double a, double b, double c ); //fucntion prototype
double average (double a , double b, double c)  //funtion definition
{
    return (a+b+c)/3;
}
int main(){
    double a =3, b=6, c=5;
    printf("the average of three number is %lf\n", average (a,b,c)); //function call
    return 0;
}
#endif


#ifdef Logic_4 // convert celcius to fahrenhite
float c2f (float c); // function prototype
float c2f(float c){  // function definition 
    return 9.0/5.0*c + 32.0 ; // adding decimal point is important as to include the decimal value
}

int main ()
{
    float c= 16;
    printf("The temperature %.1f celsius in Fanhrenheit is %.3f\n",c,c2f(c)); //function call
    return 0;
    
}
#endif

#ifdef Logic_5 //force of attraction on body mass 'm',with gravity 'g' = 9.8m/s^2
float force(float mass, float gravity); //funtion prototype
float force(float mass, float gravity){ //function definition
    return mass * gravity;  // caluculation assigning the value of 'force'
}

int main (){
    float mass=72.0 , gravity=9.8;
    printf("The Force on body with mass %.2fkgs on earth is %.3fNewton",mass,force(mass,gravity)); //function call
    return 0;
}
#endif

#ifdef Logic_6 //recursion to calculate nth element in Fibonacci series
int fibonacci(int);
int fibonacci(int n){
    if (n==1 || n==2){ //this to return if n is 1 or 2 base case
        return n-1;
    }
    return fibonacci(n-1)+fibonacci(n-2); // This logic createst the series by recursion 
}
int main (){
    int n =1095;
    printf("the value of fibonacci series at %d is %d\n",n,fibonacci(n));
    return 0;
}
#endif

#ifdef Logic_7 //undefined behavious example, order needs to defined vs undefined
int main (){
    int a=4;
    int x=a; // by defining these 3 lines below we define order, best practice
    int y=++a;
    int z=a++;
    printf("%d,%d,%d",x,y,z); //out put 4,5,5
       // printf("%d,%d,%d",a,a++,++a); undefined behavious output :6,6,4
    return 0;
}
#endif

#ifdef Logic_8 //recursive funstion to calculate the sum of first 'n' natural numbers
int sum_natural(int)  ;           //prototype
int sum_natural(int n){          //definition
    if (n == 1){
        return 1;
    }
    return sum_natural(n-1)+n;   //math logic that creates the recursion for creating sum 
}
int main (){
    int n =5;
    printf("the sum of natural numbers is %d",sum_natural(n));
    return 0;
}
#endif

#ifdef Logic_9 //writing a program to print Start patterns in lines

int main (){
    int n=5;
    for (int i=0;i<n;i++)
    {
        //this loop count 0 to 2
        //We need start in odd numbers in each line like 1, 3, 5
        //# of stars = (2*i+1) that the for loop below prints
        for (int j=0;j<2*i+1;j++){
            printf("*");
        }
        printf("\n"); // this prints in new line for every for loop iteration
    }
    
    return 0;
}
#endif