#include<stdio.h>
int main()
{
    FILE* ptr = fopen("textFile.txt","r"); // "r" => read file ; treat FILE as a data type ; * ptr to access file 
    return 0 ;
}