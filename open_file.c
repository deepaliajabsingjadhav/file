//program on file system


#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
	int fd;
	char file_name[20]={'\0'};
	printf("enter file name\n");
	scanf("%s",file_name);
	fd=open(file_name,O_RDWR);
	if(fd == -1)
	{
		printf("Error : unable to open file");
		return -1;
	}

	printf(" file is successfully open with %d file descriptor",fd);

	close(fd);

}
