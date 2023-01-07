#include <stdio.h>
int main(int argc, char const *argv[])
{
    int exit,count=1,orange=0,coke=0,coffee=0,tea=0;
    printf("Choose your favourite beverage from the following list\n");
    printf("1.Coffee   2.Tea   3.Coke   4.Orange Juice\n");
    do
    {
        printf("Please input the favourite beverage of person #%d ",count);
        printf("Choose 1,2,3,or 4 from the above menu or -1 to exit the program:");
        scanf("%d",&exit);
        switch (exit)
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
        orange++;
            break;
        }

        count++;

    } while (exit!=-1);
    printf("Beverage    Number of Votes\n");
    printf("**********************************\n");
    printf("Coffee\t\t%d\n",coffee);
    printf("Tea\t\t%d\n",tea);
    printf("Coke\t\t%d\n",coke);
    printf("Juice\t\t%d\n",orange);
    printf("**********************************\n");
    
    return 0;
}

