// C variables and data types
//Preprocessor directives
#include <stdio.h>
int main(){
    //Dec=laration and initialisation
    char x;
    char name[]=("");
    int age;
    float area;
    float salary;
    
    printf("Enter x character :");
    scanf("%c",&x);
    printf("The character is %c \n",x);
    
    printf("Enter the name :");
    scanf("%s",&name);
    printf("The name is %s \n",name);
    
    printf("Enter the age :");
    scanf("%d years",&age);
    printf("The age is %d years \n",age);
    
    printf("Enter the area :");
    scanf("%f",&area);
    printf("The area is %.2f \n",area);
    
    printf("Enter the salary :");
    scanf("%f", &salary);
    printf("The salary is %.2f \n",salary);