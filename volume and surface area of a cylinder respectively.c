// Volume and surface area 6f cylinders respectively
#include<stdio.h>
int main(){
    int radius,height;
     double π=22/7;
      double Volume=π * radius * radius * height;
       double Surfacearea=2*π*(radius)*(radius)+2*π*radius*height;

    printf("To find volume of the cylinder: \nEnter radius(r) :");
      scanf("%d", &radius);
    
    printf("Enter height(h) :");
      scanf("%d", &height);
    
    Volume=π * radius * radius * height;
      printf("The volume of the cylinder is %.2f \n",Volume);
    
    printf("\nTo find the surface area of the cylinder: \nEnter radius(r) :");
      scanf("%d", &radius);
    
    printf("Enter height(h) :");
      scanf("%d", &height);
    
    Surfacearea=2*π*(radius)*(radius)+2*π*radius*height;
      printf("The Surfacearea of the cylinder is %.2f \n",Surfacearea);
return 0;
}