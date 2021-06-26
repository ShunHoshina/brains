#include <stdio.h>

int main (void){
	int data[10] ={1,2,3,4,5,6,7,8,9,10};
	int a, b = 0;
	for(a = 0; a < 10 ;a++){
	b +=data[a];
	}
  printf("%d\n", b);
	return (0);
}
	
