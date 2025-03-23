#include<stdio.h>

int computeHomeValue(int popularity, int size){
	int homeValue = (popularity*popularity*popularity + size*size) * 10000;
	return homeValue;
}

int main(void){
	int popularity, size;
	
	printf("Enter popularity: ");
	scanf("%d", &popularity);
	printf("Enter size: ");
	scanf("%d", &size);
	
	printf("Home value is: %d", computeHomeValue(popularity, size));
	
	return 0;
}
