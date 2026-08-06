#include<stdio.h>
#include<sys/stat.h>

int main(){
	mkdir("DemoDir",0777);
	printf("Directory created.\n");
	
	rmdir("DemoDir");
	printf("Directory removed.\n");
	
	return 0;
}