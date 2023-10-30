#include <stdio.h>

int main()
{
    
    float num1, num2, num3, num4, sonuc;
    int islemimiz;
    
    printf(" ------------------------------------------\n");
    printf("|            ORTALAMA HESAPLAMA            |\n");
    printf("|                                          |\n");
    printf("|                                          |\n");
    printf("| Kaç tane sayının ortalamasını alacaksan  |\n");
    printf("| aşağıya yaz en az 2 en fazla 4 tane      |\n");
    printf("| sayının ortalamasını alabilirsin.        |\n");
    printf("|                                          |\n");
    printf("|> ");
    scanf("%d", &islemimiz);
    
    
    if(islemimiz == 2) {
        
    printf(" ------------------------------------------\n");
    printf("|            ORTALAMA HESAPLAMA            |\n");
    printf("|                                          |\n");
    printf("|                                          |\n");
    printf("| Ortalamasını almak istediğiniz iki tane  |\n");
    printf("| sayı yazınız.                            |\n");
    printf("|                                          |\n");
    printf("|                                          |\n");
    printf("|> ");
    scanf("%f%f", &num1, &num2);    
    
    sonuc = ( num1 + num2 ) / 2;
        
    printf(" ------------------------------------------\n");
    printf("|            ORTALAMA HESAPLAMA            |\n");
    printf("|                                          |\n");
    printf("|                                          |\n");
    printf("| İşlem başarılı..                         |\n");
    printf("|                                          |\n");
    printf("| 1. Sayı = %.2f                          |\n", num1);
    printf("| 2. Sayı = %.2f                          |\n", num2);
    printf("| Ortalama = %.2f                         |\n", sonuc);
    printf("|                                          |\n");
    printf("|                                          |\n");
    printf(" ------------------------------------------\n");
    }; 
    
    if(islemimiz == 3) {
        
    printf(" ------------------------------------------\n");
    printf("|            ORTALAMA HESAPLAMA            |\n");
    printf("|                                          |\n");
    printf("|                                          |\n");
    printf("| Ortalamasını almak istediğiniz iki tane  |\n");
    printf("| sayı yazınız.                            |\n");
    printf("|                                          |\n");
    printf("|                                          |\n");
    printf("|> ");
    scanf("%f%f%f", &num1, &num2, &num3);           
        
    sonuc = ( num1 + num2 + num3 ) / 2;
        
    printf(" ------------------------------------------\n");
    printf("|            ORTALAMA HESAPLAMA            |\n");
    printf("|                                          |\n");
    printf("|                                          |\n");
    printf("| İşlem başarılı..                         |\n");
    printf("|                                          |\n");
    printf("| 1. Sayı = %.2f                          |\n", num1);
    printf("| 2. Sayı = %.2f                          |\n", num2);
    printf("| 3. Sayı = %.2f                          |\n", num3);
    printf("| Ortalama = %.2f                         |\n", sonuc);
    printf("|                                          |\n");
    printf("|                                          |\n");
    printf(" ------------------------------------------\n");
    }; 
    
    if(islemimiz == 4) {
        
    printf(" ------------------------------------------\n");
    printf("|            ORTALAMA HESAPLAMA            |\n");
    printf("|                                          |\n");
    printf("|                                          |\n");
    printf("| Ortalamasını almak istediğiniz iki tane  |\n");
    printf("| sayı yazınız.                            |\n");
    printf("|                                          |\n");
    printf("|                                          |\n");
    printf("|> ");
    scanf("%f%f%f", &num1, &num2, &num3, &num4);           
        
    sonuc = ( num1 + num2 + num3 + num4 ) / 2;
        
    printf(" ------------------------------------------\n");
    printf("|            ORTALAMA HESAPLAMA            |\n");
    printf("|                                          |\n");
    printf("|                                          |\n");
    printf("| İşlem başarılı..                         |\n");
    printf("|                                          |\n");
    printf("| 1. Sayı = %.2f                          |\n", num1);
    printf("| 2. Sayı = %.2f                          |\n", num2);
    printf("| 3. Sayı = %.2f                          |\n", num3);
    printf("| 4. Sayı = %.2f                          |\n", num4);
    printf("| Ortalama = %.2f                         |\n", sonuc);
    printf("|                                          |\n");
    printf("|                                          |\n");
    printf(" ------------------------------------------\n");
    }; 
    
    if(islemimiz < 2) {
        printf("Hata: En az 2 sayının ortalamasını alabilirsin.");
    }
    
    if(islemimiz > 4) {
        printf("Hata: En fazla 4 sayının ortalamasını alabilirsin.");
    }
    
    // Düzenlenip sınırı kolaylıkla arttırılabilecek ve geliştirilebilecek basit bir ortalama hesaplama aracı 
    
    
    return 0;
}
