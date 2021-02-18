#include <stdio.h>
#include <stdlib.h>

int main()
{
    int month;
    int day;

    printf("Enter your Birth Month (1 to 12): ");
    scanf("%d", &month);
    printf("Enter your Birth Day (1 to 31): ");
    scanf("%d", &day);

    if(month==3 && day>= 21 || month==4 && day<= 19)
    {
    printf("Your Horoscope is AERIES.");
    }
    else if (month==4 && day>= 20 || month== 5 && day<=20)
    {
    printf("Your Horoscope is TAURUS.");
    }
    else if (month==5 && day >=21 || month== 6 && day<=20)
    {
    printf("Your horoscope is GEMINI.");
    }
    else if (month==6 && day>=21 || month== 7 && day<=22 )
    {
    printf("Your Horoscope is CANCER.");
    }
    else if (month==7 && day>=23 || month== 8 && day<=22 )
    {
    printf("Your Horoscope is LEO.");
    }
    else if (month==8 && day>=23 || month== 9 && day<=22 )
    {
    printf("Your Horoscope is VIRGO.");
    }
    else if (month==9 && day>=23 || month== 10 && day<=22 )
    {
    printf("Your Horoscope is LIBRA.");
    }
    else if (month==10 && day>=23 || month== 11 && day<=21 )
    {
    printf("Your Horoscope is SCORPIO.");
    }
    else if (month==11 && day>=22 || month== 12 && day<=21 )
    {
    printf("Your Horoscope is SAGITTARIUS.");
    }
    else if (month==12 && day>=22 || month== 1 && day<=19 )
    {
    printf("Your Horoscope is CAPRICORRN.");
    }
    else if (month==1 && day>=20 || month== 2 && day<=18 )
    {
    printf("Your Horoscope is AQUARIUS.");
    }
    else if (month==2 && day>=19 || month== 3 && day<=20 )
    {
    printf("Your Horoscope is PISCES.");
    }
    else
    {
    printf("INVALID ENTRY!");
    }
    return 0;
}
