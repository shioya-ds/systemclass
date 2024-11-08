#include <stdio.h>

int main()
{
    int k;
    printf("How many times a day do you brush your teeth?");
    scanf("%d", &k);
    
    int s;
    printf("How many times a year do you go to the dentist?");
    scanf("%d", &s);
    
    if(k < 1 && s < 1)
    {
        printf("Brush your teeth so you don't get cavities!");
    }
    
    else if(k >= 1 && s < 1)
    {
        printf("Go to the dentist!");
    }
    
    else if(k < 1 && s >= 1)
    {
        printf("Brush your teeth so you don't get cavities!");
    }
    
    else
    {
        printf("Your teeth are healthy!");
    }
    
    return 0;
}