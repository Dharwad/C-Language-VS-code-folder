/* 

In C programming, structures are user-defined
data types that allow you to group variables of
different types under a single name. This is 
especially useful for representing complex data
models like a record in a database, a point in 2D
space, or a student with multiple attributes. 

struct StructureName {
    dataType member1;
    dataType member2;
    // more members
};

*/
#include<stdio.h>
//#define Logic_01
//#define Logic_02
//#define Logic_03
//#define Logic_04
//#define Logic_05
//#define Logic_06
//#define Logic_07
#define Logic_08



#ifdef Logic_01 /*Creating a two dimensional 
vector using structures in C */
    struct vector {
        int i ;
        int j;
    };
    int main() {
        struct vector v= {1,2};
        printf("The value of vector is %di +%dj",v.i,v.j);
        return 0;
}
#endif

#ifdef Logic_02 /* write a function 'sumVector' 
which returns the sum of two vectors passed to it
& the vector must be two dimensional*/
struct vector {
    int i;
    int j;
};

struct vector sumVector(struct vector v1,struct vector v2){
    struct vector v3 ={(v1.i + v2.i),(v1.j + v2.j)};
    return v3;
}

int main() {
    struct vector v1 ={1,2};
    struct vector v2={1,2};
    struct vector v3 = sumVector(v1,v2);
    printf("The value of vector v3 is %di + %dj",v3.i,v3.j);
    return 0;
}
#endif



#ifdef Logic_03 /* Program to illustrate the use
of arrow operator in C 
Why Use ->?
When you have a pointer to a structure, you can't use 
the dot (.) operator directly. Instead, you use -> to 
access the structure's members.
pointer_to_struct->member   //equivalent to
(*pointer_to_struct).member
*/
typedef struct details{
    int salary;
    int credit_score;
}Employee;

int main() {
Employee Nikesh;
Employee* ptr =&Nikesh;
ptr-> salary = 10000;
ptr-> credit_score = 801;

printf("Salary is %d and credit is %d",ptr->salary,ptr->credit_score);
return 0;
}
#endif



#ifdef Logic_04 /*Program with a structure 
representing a complex number

A complex number is a number that has both a real part 
and an imaginary part. It is usually written in the form:
z=a+bi
Where:
a is the real part
b is the imaginary part
i is the imaginary unit
*/
typedef struct c{
    
    int real;  //the order of this variable definition matters
    int imaginary;
    
} Complex;

int main() {
    Complex c ={1,2}; // 1 is value of real and 2 imaginary as per the order in declaration in typedef
    printf("The value of complex number is %d + i%d",c.real,c.imaginary);
    return 0;
}
#endif



#ifdef Logic_05 /* Creating an array with 5 complex
numbers in Logic_04 and display them with the help 
of display function.The values must be taken as an
input from the user*/

typedef struct c{
    int real;
    int imaginary;
}Complex;

void display (Complex c){
    printf("The value od complex number is %d + %di\n",c.real ,c.imaginary);
}


int main() {
Complex carr[5];
for (int i=0 ; i<5; i++){
    printf("Enter the real part \n");
    scanf("%d",&carr[i].real);
    printf("Enter imaginary part \n");
    scanf("%d",&carr[i].imaginary);
    display (carr[i])  ;
}

}
#endif


#ifdef Logic_06 /*writing logic_04 structure with 
typedef keyword*/
typedef struct c{
    
    int real;  //the order of this variable definition matters
    int imaginary;
    
} Complex;

int main() {
    Complex c ={1,2}; // 1 is value of real and 2 imaginary as per the order in declaration in typedef
    printf("The value of complex number is %d + i%d",c.real,c.imaginary);
    return 0;
}
#endif

#ifdef Logic_07 /*write a structure representing a bank
account of a customer, What field did we use and why ?*/
struct Bank_Acc{
    int acc_number;
    char swift_code[6];
    float balance;
};

int main() {
    struct Bank_Acc Eric= {343,"sdfue",24245.5};
    //acc_number=345245;
    //swift_code=DNDJF;
    //balance = 23;
    printf("ACC #: %d, swift code: %s, balance: %.1f",Eric.acc_number,Eric.swift_code,Eric.balance);
}
#endif



#ifdef Logic_08 /*write a structure capable of storing
date. write a function to compare those dates*/ 
typedef struct Date{
    int mm;
    int dd;
    int yyyy;
}DT ;

int compare (DT d1 , DT d2)
{
    if ((d1.yyyy == d2.yyyy) && (d1.mm == d2.mm) && (d1.dd == d2.dd))
    {
        return 0;
    }
    if (d1.yyyy > d2.yyyy)
    {
       printf("Date 1 is recent year");
       // return 1;
    }
    else if (d1.yyyy < d2.yyyy)
    {
        return -1;
    }
    else if (d1.mm< d2.mm)
    {
        return 1;
    }
    else if (d1.mm > d2.mm)
    {
        return -1;
    }
    else if (d1.dd < d2.dd)
    {
        return 1;
    }
    else if (d1.dd > d2.dd)
    {
        return 0;
    }
}
int main() {
    struct Date d1 ={12,24,1900};
    struct Date d2 ={11,13,1924};
    printf("%d",compare(d1,d2));
    return 0;
}
#endif