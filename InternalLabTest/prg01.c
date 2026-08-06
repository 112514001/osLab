#include<stdio.h>
#include<stdlib.h>

int main(){
	printf("Redirect output:\n");
	system("echo Hello linux>file.txt");
	
	printf("\nAppend output:\n");
	system("echo welcome>>file.txt");
	
	printf("\nReading file:\n");
	system("cat<file.txt");
	
	printf("\nUsing pipe:\n");
	system("cat file.txt|wc -l");
	
	return 0;
}
