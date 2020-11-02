#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hr, min, sec, s;
    printf("Enter time in seconds: ");
    scanf("%d", &sec);
    hr=(sec/3600);//1 hour is 3600 seconds
    min=(sec-(3600*hr))/60;//1 minute is 60 seconds
    s=(sec-(3600*hr)-(min*60));
    printf("%d seconds = %d hours: %d minutes: %d seconds:", sec,hr,min,s);
    return 0;
}
