#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,sayi,sakla;


        printf("Dizilerde Siralama Algoritmasi\n\n");
         printf("Dizinin eleman sayisini giriniz:");
          scanf("%d",&sayi);
           int dizi[sayi];

        for(i=0;i<sayi;i++){
            printf("%d.sayiyi giriniz:",i+1);
             scanf("%d",&dizi[i]);
        }

        printf("\nDizi elemanlari\n");

        for(i=0;i<sayi;i++){
            printf("%d ",dizi[i]);
        }

            printf("\n\n");
            printf("Dizi elemanlarinin buyukten kucuge siralanisi\n\n");

        for(i=0;i<sayi;i++){

            for(j=i+1;j<sayi;j++){

                if(dizi[i]<dizi[j]){

                    sakla=dizi[i];
                    dizi[i]=dizi[j];
                    dizi[j]=sakla;

                }
            }
        }

        for(i=0;i<sayi;i++)
            printf("%d ",dizi[i]);

            printf("\n\n");
            printf("Dizi elemanlarinin kucukten buyuge siralanisi\n\n");

        for(i=0;i<sayi;i++){

            for(j=i+1;j<sayi;j++){

                if(dizi[i]>dizi[j]){

                    sakla=dizi[i];
                    dizi[i]=dizi[j];
                    dizi[j]=sakla;

                }
            }
        }

        for(i=0;i<sayi;i++)
            printf("%d ",dizi[i]);

            printf("\n\n");


    return 0;
}
