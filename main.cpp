#include <stdio.h>
#include <stdlib.h>
void reverse(char string[]);
int main(int argc, char *argv[])
{

  char string[50];
  
  printf("Please enter a string: "); 
  gets(string);
  reverse(string);
  
  
  system("PAUSE");	 
  return 0;
}
void reverse(char string[]){
	int x=0,y=0;
	while(string[x]!='\0'){
		x++;
	}
	printf("Reverse output: ");
	for(y=x-1;y>=0;y--){
		printf("%c",string[y]);
	}
	printf("\n");
}
