/* 
Instructions and operators
*/
#include<stdio.h>

//#define PROGRAM_1
//#define PROGRAM_2
#define PROGRAM_3


#ifdef PROGRAM_1 // What will the output an integer or float ?
int main() {
    float a = 3.0/8-2;
    printf("Value of a  = %f", a);
    return 0;
}
#endif

#ifdef PROGRAM_2  // find out the word is divisible by 97 ?
int main(){
    int a = 3349895 ;
    int b = 97 ;
    printf("The remainder when we divide a by b is %d",a%b);
    return 0;
}
#endif

#ifdef PROGRAM_3 // Evaluate 3*x/y - z+k, where x=2, y=3, z=3, k=1
int main(){
    int x=2 , y=3, z=3, k=1;
    float e = 3*x/y-z+k ;
    printf("the answer is %f", e);
}
#endif
