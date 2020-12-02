// Application which accepts file name from user and display whole file on screen

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

// Function used to open and read whole data of the file.
void DisplayWholeFile(char FName[])
{
    int fd = 0;
    char arr[100] = {'\0'};
    int ret = 0;
    
    // fopen() -> open();
    fd = open(FName, O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return;
    }
    printf("Data from the file is : \n");
    
    
    
    while((ret = read(fd,arr,100)) != 0)     
    {
        
        write(1,arr,ret);  
    }
    close(fd);
}

int main()
{
    char name[50] = {'\0'};
    
    printf("Enter file name\n");
    scanf("%s",name);
    
    DisplayWholeFile(name);
    return 0;
}
