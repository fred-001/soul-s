#include <stdio.h>

int main (){
  int subject1,subject2,subject3;  
  int average;

  printf("Enter the value for subject1: ");
  scanf("%d", &subject1);

 printf("Enter the value for subject2: ");
  scanf("%d", &subject2);

 printf("Enter the value for subject3: ");
  scanf("%d", &subject3);

average=(subject1+subject2+subject3)/3

if(average=100 && average>=70)
printf("Grade A");

else if(average=69 && average>=60)
printf("Grade B");

else if(average=59 && average>=50)
printf("Grade C");

else if(average=49 && average>=40)
printf("Grade D");

else if(average=39 && average<=30)
printf("Grade E");

    return 0;
}