#include <stdio.h>
#include <string.h>

void main()
{
    int n;
    scanf("%d", &n);

    int order_number[100];
    char customer_name[100][100];
    char dish_name[100][100];
    int quantity[100];
    int price[100];

    char Max_Dish[100];
    strcpy(Max_Dish, dish_name[0]);
    int total_revenue = 0;
    int temp = quantity[0];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &order_number[i]);
        getchar();
        fgets(customer_name[i], sizeof(customer_name[i]), stdin);
        customer_name[i][strcspn(customer_name[i], "\n")] = '\0';
        fgets(dish_name[i], sizeof(dish_name[i]), stdin);
        dish_name[i][strcspn(dish_name[i], "\n")] = '\0';
        scanf("%d %d", &quantity[i], &price[i]);

        total_revenue += (quantity[i]*price[i]);
        if (quantity[i] > temp){
        temp = quantity[i];
        strcpy(Max_Dish, dish_name[i]);
        }
    }

    printf("%d\n%s\n%d\n", n, Max_Dish, total_revenue);
}