#include <stdio.h>

int main()
{
    int choice, b, f, p, s, ps, Burger, French, Pizza, Sandwiches, Pasta;
    printf("1.Pizza\n2.Burger\n3.Pasta\n4.French Fries\n5.Sandwich\n");
    printf("Please select your choice from 1,2,3,4,5\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("You selected Pizza.\n");
        Pizza = 239;
        printf("Price: %d", Pizza);
        scanf("%d", &p);
        break;
    case 2:
        printf("You selected Burger. \n");
        Burger = 129;
        printf("Price: %d", Burger);
        scanf("%d", &b);
        break;
    case 3:
        printf("You selected Pasta.\n");
        Pasta = 179;
        printf("Price: %d", Pasta);
        scanf("%d", &ps);
        break;
    case 4:
        printf("You selected French Fries. \n");
        French = 99;
        printf("Price: %d", French);
        scanf("%d", &f);
        break;
    case 5:
    	printf("You selected Sandwiches.\n");
    	Sandwiches = 149;
        printf("Price: %d", Sandwiches);
        scanf("%d", &s); 
        break;
    default:
        printf("Invalid choice");
        break;
    }
}
