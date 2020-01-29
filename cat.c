#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void display(char *filename){
FILE *fp = fopen(filename, "r"); 
int ch;    
    if (fp == NULL) 
    { 
        printf("File doesn't exist\n"); 

        return;
    }
    while ((ch = fgetc(fp)) != EOF) 
    {
      	printf("\033[1;34m");
        putchar(ch); 
        printf("\033[0m");
    }
    fclose(fp);
}
int main(int argc,char *argv[]){
if(argc==1)
printf("No file selected");
else
 for(int i=1;i<argc;i++)
     display(argv[i]);
}
