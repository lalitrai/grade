#include<stdio.h>
int main()
{
int marks=0;
float k=0;
printf("enter the marksnof the student:-");
scanf("%d",&marks);

if(marks>84  && marks<101 )
printf("Grade A");

else if(marks>69  && marks<85 )
printf("Grade B");

else if(marks>54  && marks<70 )
printf("Grade C");

else if(marks>39  && marks<55 )
printf("Grade E");

else if(marks<40 && marks>=0 )
printf("Grade F");

else 
printf("enter a valid no.");

return 0;
}
