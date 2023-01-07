#include <stdio.h>
int main()
{
printf("choose your favourite beverage from the following list\n");
printf("1.Coffee\t2.Tea\t3.coke\t4.Orange juice\n");
int i=1;
int coffee=0;
int tea=0;
int coke=0;
int num;
int juice=0;
while (num!=-1)
{
printf("please input the favourite beverage of person #%d\t Choose 1,2,3 or 4 from the menu or -1 to exit program\n",i);
scanf("%d",&num);

switch (num)
{
case 1:
coffee++;
break;
case 2:
tea++;
break;
case 3:
coke++;
break;
case 4:
juice++;
break;
default:
break;
}
i++;
}
printf("Beverage\t\tNumber of votes\n\n");
printf("coffee\t\t\t%d\n",coffee);
printf("Tea\t\t\t%d\n",tea);
printf("Coke\t\t\t%d\n",coke);
printf("Orange juice\t\t%d\n",juice);


return 0;
}
