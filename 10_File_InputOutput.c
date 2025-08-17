/* 
A file is data stored in a storage device
The random access memory is volatile and its content 
is lost once the program terminates. In order to 
persist the data forever we use files.
A file is a data stored in a storage device.
A c program can talk to the file by reading content from it
and writing content to it.

FILE pointer : A 'FILE' pointer is needed for communication
between the file and the program
FILE *ptr;
ptr =fopen("filename.ext","mode");

Text file (.txt,.c); Binary files (.jpg,.dat)
*/
#include<stdio.h>

int main() {
    int x=10;
    int y=25;
    int z=x+y;
    printf("Sum of x+y = %i", z);
}