#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    float number, result;
    int count;
    
    printf(" ------------------------------------------\n");
    printf("|            ORTALAMA HESAPLAMA            |\n");
    printf("|                                          |\n");
    printf("|                                          |\n");
    printf("| Kaç tane sayının ortalamasını almak      |\n");
    printf("| istiyorsan aşağıya yazıp sayıların       |\n");
    printf("| ortalamasını alabilirsin.                |\n");
    printf("|                                          |\n");
    printf("|> ");
    scanf("%d", &count);
    
    float numbers[count];
    
    system("clear");

    for(int i = 0; i < count; i++) 
    {
    if(i == 0) 
    {
    printf(" ------------------------------------------\n");
    printf("|            ORTALAMA HESAPLAMA            |\n");
    printf("|                                          |\n");
    printf("|                                          |\n");
    printf("| Ortalamasını almak istediğiniz %d tane   |\n", count);
    printf("| sayı yazınız.                            |\n");
    printf("|                                          |\n");
    printf("|                                          |\n");
    printf("|> ");
    scanf("%f", &number);
    } else 
    {
    printf("|> ");
    scanf("%f", &number);    
    }
    
    numbers[i] = number;
    result += number;
    }
    
    result = result / count;
    system("clear");

    printf(" ------------------------------------------\n");
    printf("|            ORTALAMA HESAPLAMA            |\n");
    printf("|                                          |\n");
    printf("|                                          |\n");
    printf("| İşlem başarılı..                         |\n");

    for(int c = 0; c < count; c++) 
    {
    printf("| %d. Sayı = %.2f                          |\n", c+1, numbers[c]);
    }

    printf("|                                          |\n");
    printf("| Ortalama = %.2f                         |\n", result);
    printf("|                                          |\n");
    printf("|                                          |\n");
    printf(" ------------------------------------------\n");

    return 0;
}
