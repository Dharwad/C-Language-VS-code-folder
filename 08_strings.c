/* 
In C programming, strings are essentially arrays of characters
terminated by a null character ('\0'). Unlike some other languages,
C does not have a built-in string type—strings are handled as arrays of char.
char str1[] = "Hello";         // Automatically adds '\0' at the end
char str2[6] = "World";        // Must allocate space for '\0'
char str3[] = {'H', 'i', '\0'}; // Manual initialization

fgets() to read input instread of scanf,
puts() to print the character string with a new line
*/
#include<stdio.h>
#include <string.h> // required for strlen()
//#define Logic_01
//#define Logic_02
//#define Logic_03
//#define Logic_04
//#define Logic_05
//#define Logic_06
//#define Logic_07
#define Logic_08


#ifdef Logic_01/*program to take a string as an input from user 
%c and %s confirming tthat the strings are equal*/
int main() {
    char str[6];
    for (int i=0;i<5;i++){
        scanf("%c",&str[i]);
        fflush (stdin);// to ignore the "enter" after each character input
    }
    str[5]='\0'; //to account for the last null character
    printf("%s",str);
    return 0;
}
#endif

#ifdef Logic_02 //usig strlen() function from <string.h>
int main() {
    char s[]="Cielo ok";
    int length_alt= strlen(s); //counts length of excluding '\0'
    char c ;
    int i=0;
    do {
        c=s[i];
        i++;
    }while (c!='\0');
        int length = i-1; // to exclude last null character
        //printf("%d",length);
printf("%d",length_alt);
return 0;
}
#endif

#ifdef Logic_03 /*function slice() to slice a string, It should
change the original string , m and n as start and ending 
position for the slice*/
char* slice(char str[],int m,int n){
    int i=0,count;
    char *ptr1 =&str[m];
    char *ptr2 =&str[n];
    str =ptr1;
    str[n]='\0';
    return str;
} 
int main() {
    char str[]  = "Emilie Clark";
    printf("Her last name is %s\n", slice(str,6,10));
    return 0;
}
#endif

#ifdef Logic_04 /* write you own version of 
strcpy function from <string.h>*/
int mystrlen (char str[]){
    int i = 0,count;
    char c = str[i];
    while (c!='\0'){
        c=str[i];
        i++;
    }
    count =i-1;
    return count;
}
void mystrcpy(char target[], char source[] ){
    for (int i = 0; i < mystrlen (source);i++)
    {
        target[i] = source[i];
    }
    target[mystrlen(source)]= '\0';
}
int main() {
    char source[] = "Cielo";
    char target[30];
    mystrcpy(target,source);
    printf("%s %s\n",source, target);
    return 0;
}
#endif

#ifdef Logic_05 /* write a program to encrypt the string by adding 1 to the
ascii value of its characters*/
int main() {
    char str[] = "The is under the rear door mat";
    for (int i=0;i< strlen(str);i++){
        str [i]=str[i]+i; //encryption logic
    }
    printf("%s",str);
}
#endif



#ifdef Logic_06 // decrpt the output provided by logic_05
int main() {
    char str[] = "paste the out put received in logic_05";
    for (int i=0;i< strlen(str);i++){
        str [i]=str[i] - i; //decryption logic, only change is here i.e. '-'
    }
    printf("%s",str);
}
#endif





#ifdef Logic_07 /*program to count the occurrence of
a given character in a string*/
int main() {
    char c = 'l';
    int count = 0;
    char str[] = "Cielo";
    for (int i=0; i<strlen(str);i++){
        if (str[i]==c){
            count;
        }
    }
    printf("%d",count);
    return 0;
}
#endif





#ifdef Logic_08/*program to check   whether a given number is present 
in a string or not*/
int main() {
    char c = 'z';
    int count = 0;
    char str[] = "Cielo";
    for (int i=0; i<strlen(str);i++){
        if (str[i]==c){
            count =1;
            break;
        }
    }
    if (count){
        printf("Yes it contains\n");
    }
    else{
        printf("Does not contain\n");
    }
    return 0;
}
#endif