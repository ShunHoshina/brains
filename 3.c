#include <stdio.h>

int main (void){
	int a;
	scanf("%d",&a); 
	if (a % 15 == 0){
		printf("%dは15の倍数です\n",a);}
	else if (a % 5 == 0){
		printf("%dは5の倍数です\n",a);}
	else if (a % 3 == 0){
   printf("%dは3の倍数です\n",a);}
	else {
		printf("%dはそれ以外の数です\n",a);}				







return 0;
}
