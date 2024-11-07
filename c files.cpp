#include<stdio.h>
#include<stdlib.h>

void writeparagraph(){
	char paragraph[200];
	File*file=fopen("output.txt","W");
	
	if(file==Null){
		perror("error opening file for writing");
		return 0;
	}
printf("enter a paragraph (upto 200 characters): ");
fgets(paragraph , size of (paragraph) ,stdin);
fprintf(file,"%S",paragraph);
fclose(file);}

void readparagraph(){
	char buffer[200];
	File*file=fopen("output.txt","r");
	
	if(file==null){
		perror("error opening file for reading: ");
		return 0;}
printf("enter additional paragraph(up to 200 characters):");
fgets(paragraph,size of (paragraph),stdin);
fprintf(file,"%s",paragraph);
fclose(file);}


int main(){
	int choise;
	do{
		printf("\nchoose an option:\n");
		printf("1.write paragraph to file\n");
        printf("2.read content from file\n");
		printf("3.append a paragraph to file\n");
		printf("4.exit\n");
		printf("enter your thought choice: ");
		scanf("%d",&choice);
		getchar();
		switch (choice){
			case 1:
				write paragraph();
				break;
			case 2:
				read content();
				break;
			case 3:
				append a paragraph();
				break;
			case 4:
				printf("exiting program\n");
				break;
			default:
				printf("invalid choice,please try again.\n");}}

while(choice!=4);
return 0;}
				
	


	