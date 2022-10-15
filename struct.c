#include <stdio.h>
#include <string.h>

struct item
{
    char itemName[50];
    int quantity;
    float price;
}gamingConsole;

int main()
{
    strcpy(gamingConsole.itemName, "Playstation 5");
    gamingConsole.quantity = 500;
    gamingConsole.price = 599.0;
    
    printf("Console Name: %s\n", gamingConsole.itemName);
    printf("Consoles in stock: %d\n", gamingConsole.quantity);
    printf("Price of the gaming console: %.1f$\n", gamingConsole.price);

    return 0;
}
