#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <fcntl.h>
#include<string.h>

int main()
{
    char input[50];
    printf("Enter Assignment number");
    scanf("%s",input);
    
    int i;
    int fd =0;
    char buf[15];
    char buf1[40];
    snprintf(buf, 15, "Assignment%s", input);
    printf("%s\n\n\n", buf); // outputs so you can see it

   for (i = 1; i < 11; i++) 
   {
                    snprintf(buf1, 40, "%s_%d.py", buf,i); // puts string into buffer
                    fd = creat(buf1,0777);
                    
                    if(fd == -1)
                    {
                        printf("Unable to create the file\n");
                    }
                    else
                    {
                        printf("File succesfully created\n");
                    }
                    printf("%s\n", buf1); // outputs so you can see it
    }

}

