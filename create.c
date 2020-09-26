//application to create new file


#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
	int fd;
	char file_name[20]={'\0'};
	printf("enter file name\n");
	scanf("%s",file_name);
	fd=creat(file_name,0777);
	if(fd == -1)
	{
		printf("Error : unable to create file");
		return -1;
	}

	printf(" file is successfully created  with %d file descriptor",fd);

	close(fd);

}
