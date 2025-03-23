#include<stdio.h>

void computeHomeValue(){
	int popularity, size;
	
	printf("Enter popularity: ");
	scanf("%d", &popularity);
	printf("Enter size: ");
	scanf("%d", &size);
	
	int homeValue = (popularity*popularity*popularity + size*size) * 10000;
	printf("Home value is: %d", homeValue);
	return;
}

int main(void){
	computeHomeValue();
	
	return 0;
}
