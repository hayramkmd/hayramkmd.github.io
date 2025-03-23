#include<stdio.h>




int main(void){
	int popularity, size;
	
	printf("Enter popularity: ");
	scanf("%d", &popularity);
	printf("Enter size: ");
	scanf("%d", &size);
	int homevalue = ( popularity * popularity * popularity + size * size)*10000;
	printf ("Home Value is:%d",homevalue);
	return 0;
}
