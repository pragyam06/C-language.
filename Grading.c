#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    float mark;
    printf("Enter Mark obtained: ");
    {
        scanf("%f", &mark);
    }
    printf("\nMark = ");
    if(mark>=85 && mark<=100)
        printf("Grade A");
    else if(mark>=70 && mark<=84)
        printf("Grade B");
    else if(mark>=55 && mark<=69)
        printf("Grade C");
    else if(mark>=40 && mark<=54)
        printf("Grade D");
    else if(mark<40)
        printf("Grade F");
    else
        printf("Invalid!");
    getch();
    return 0;
}
