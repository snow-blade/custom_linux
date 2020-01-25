#include <stdio.h> 
#include <stdlib.h>
void show(char *fname, int n) 
{ 
    FILE *fp = fopen(fname, "r"); 
    int curr_lines = 0, ch;    
    if (fp == NULL) 
    { 
        printf("File doesn't exist\n"); 
        
        return; 
    } 
  
    // Read contents of file 
    while ((ch = fgetc(fp)) != EOF) 
    { 
        printf("\033[1;34m");
        putchar(ch); 
        printf("\033[0m");

        if (ch == '\n') 
        { 
            curr_lines++; 
  
            // If count of current lines reaches limit, then 
            // wait for user to enter a key 
            if (curr_lines == n) 
            { 
                curr_lines = 0;
               int l= getchar(); 
           if(l=='q')
               exit(0);           
                  } 
        } 
    } 
  
    fclose(fp); 
} 
  
// Driver program to test above function 
int main(int argv,char *argc[]) 
{ 
    printf("\033[1;33m");
    printf("Press any key to continue or 'q' to exit\n\n");
    printf("\033[0m"); 
    int n = 5; 
    show(argc[1], n); 
    return 0; 
} 

