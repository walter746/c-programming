#include<stdio.h>

struct employee{
	char name[25];
	int id;
	char department[20];
	float salary;
	char email[50];
};
emp;	
int main(){
	
	struct employee emp={
		"john doe",
		 12345,
		"human resource",
	    55000.50f,
		"john.doe@gmail.com"};
	printf("name:%s\n",emp. name);
	printf("id:%d\n",emp. id);
	printf("department:%s\n",emp. department);
	printf("salary:%f\n",emp. salary);
	printf("email:%s\n",emp .email);
	
	
	return 0;
	
}