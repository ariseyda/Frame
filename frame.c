#include<stdio.h>
#include<string.h>
#define size 100

//A computer program receives a word from user and the received word is framed as shown below.  
//You may use size_t strlen(const char*str) function from <string.h> library
// +--------+
// | monday |
// +--------+

int main(){
	
	char word[size];
	printf("Enter a word:");
	scanf("%s",word);
	int lenght=strlen(word);
	
	int i;
	for(i=0;i<=lenght+3;i++){
		if(i==0 || i==lenght+3){
		  printf("+");
		}
		else{
		  printf("-");
		}
	}
	printf("\n");
	
	for(i=0;i<=lenght+3;i++){
		if(i==0 || i==lenght+3){
		  printf("|");
		}
		else if(i>=2 && i<size+3){
		  printf("%c",word[i-2]);
		}
		else{
			printf(" ");
		}
	}
	
	printf("\n");
	
	for(i=0;i<=lenght+3;i++){
		if(i==0 || i==lenght+3){
		  printf("+");
		}
		else{
		  printf("-");
		}
	}
	
	return 0;
}
