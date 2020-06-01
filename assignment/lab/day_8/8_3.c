#include <stdio.h>

typedef struct citytemp
{
    char cityName[25];
    int temp[7];
    float avgTemp;
} ct;

int main(void)
{
    int i, j;
    ct a[5];

    // taking input of city name and temperature
    for (i = 0; i < 5; i++)
    {
        printf("Enter %d city name: ", i + 1);
        gets(a[i].cityName);
        int s = 0;
        for (j = 0; j < 7; j++)
        {
            printf(" Enter the temperature of day %d: ", j + 1);
            scanf("%d", &a[i].temp[j]);
            s = s + a[i].temp[j];
        }
        a[i].avgTemp = s / 7.0;
        getchar();
    }

    for (i = 0; i < 4; i++)
    {
        if (a[i].avgTemp > a[i + 1].avgTemp)
        {
            // swapping average temperature
            int d = a[i].avgTemp;
            a[i].avgTemp = a[i + 1].avgTemp;
            a[i + 1].avgTemp = d;

            // swapping the city names
            for (j = 0; j < 20; j++)
            {
                char t = a[i].cityName[j];
                a[i].cityName[j] = a[i + 1].cityName[j];
                a[i + 1].cityName[j] = t;
            }
        }
    }

    printf("City name \t Avg.temp.\n ");
    for (i = 0; i < 5; i++)
    {
        printf("%s \t %f", a[i].cityName, a[i].avgTemp);
    }
    return 0;
}