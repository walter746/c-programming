	
	
#include<stdio.h>

void determineevenodd(int number)
{if (number%2==0){
printf("%d even",number);}

else{printf("%d odd",number);}
}
	
	int main(){
		int number;
		printf("enter a number: ");
		scanf("%d",&number);
		determineevenodd(number);
		return 0;
	}
