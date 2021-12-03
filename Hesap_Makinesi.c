//Hesap Makinesi

#include <stdio.h>
#include <stdlib.h>
#include <math.h>>

int main()
{
    printf("*****Hesap Makinesi*****\n");
    int islem1,islem2,komut,mod;
    while(0==0)
    {
        printf("\n\n-->Islem yapmak icin '1'\n-->Cikmak icin '0' i tuslayiniz.\n");
        scanf("%d",&komut);



        if(komut==0)


            break;

        if(komut==1)
        {
            printf("--->Basit islem(Toplama_Cikarma_Carpma_Bolme)icin '11' i\n\n--->Gelismis islem(Mod Alma_Karekok_Us Alma_Logaritma)icin '22'i tuslayiniz\n");
            scanf("%d",&mod);
        }

        if(mod==11)
        {

            printf("\n\nHangi islemi yapmak istiyorsunuz?\n");
            printf("-TOPLAMA ve CIKARMA(1)\n-CARPMA(2)\n-BOLME(3)\n");
            scanf("%d",&islem1);

            if(islem1==1)
            {
                double toplam=0,sayi;
                printf("///Toplama ve Cikarma islemi yapiyorsunuz///\n****Sayiyi '0' girdiginiz zaman isleminiz yapilacaktir.****\n\n****Cikarmak istediginiz sayinin basina '-(eksi)' isareti koyunuz.****\n");

                while(sayi==sayi)
                {
                    printf("Sayi Giriniz: ");
                    scanf("%lf",&sayi);
                    if(sayi==0)
                    {

                        printf("isleminizin sonucu: %lf",toplam);
                        break;
                    }
                    toplam=toplam+sayi;
                }
            }

            else if(islem1==2)
            {
                double carpim=1,sayi;
                printf("///Carpma islemi yapiyorsunuz///\n****Sayiyi '1' girdiginiz zaman isleminiz yapilacaktir.****\n");

                while(sayi==sayi)
                {
                    printf("Sayi Giriniz: ");
                    scanf("%lf",&sayi);
                    if(sayi==1)
                    {
                        printf("Isleminizin sonucu: %lf",carpim);
                        break;
                    }

                    carpim=carpim*sayi;
                }

            }
            else if(islem1==3)
            {
                double bolum,s1,s2;
                printf("///Bolme islemi yapiyorsunuz///\nBolunen sayiyi giriniz: ");
                scanf("%lf",&s1);
                printf("Bolen sayiyi giriniz: ");
                scanf("%lf",&s2);
                bolum=s1/s2;
                if(s2==0)
                    printf("--Tanimsiz--");
                else
                    printf("Isleminizin sonucu: %lf",bolum);

            }
        }
        else if(mod==22)
        {


            printf("\n\nHangi islemi yapmak istiyorsunuz?\n");
            printf("-Mod Alma(4)\n-Karekok(5)\n-Us Alma(6)\n-Logaritma(7)\n");
            scanf("%d",&islem2);

            switch(islem2)
            {
                int kalan,s1,s2;
                double sayi,sonuc,s3,s4;

            case 4:

                printf("///Mod Alma islemi yapiyorsunuz///\n---Tam Sayi Giriniz---\nSayilari sirasiyla Giriniz:\n(Once bolunen sonra bolen)\n");
                scanf("%d %d",&s1,&s2);
                kalan=s1%s2;
                printf("Kalan: %d",kalan);
                break;
            case 5:


                printf("///Karekok islemi yapiyorsunuz///\nSayi Giriniz: ");
                scanf("%lf",&sayi);
                sonuc = sqrt(sayi);
                if(sonuc>0)
                    printf("sonuc:%lf",sonuc);
                else
                    printf("--Tanimsiz--");
                break;
            case 6:


                printf("///Us Alma islemi yapiyorsunuz///\nTaban Giriniz: ");
                scanf("%lf",&s3);
                printf("Us Giriniz: ");
                scanf("%lf",&s4);
                sonuc=pow(s3,s4);
                printf("Sonuc: %lf",sonuc);
                break;
            case 7:
                printf("///Logaritma islemi yapiyorsunuz.///\n");
                printf("Taban Giriniz:\n");
                scanf("%lf",&s3);
                printf("Us Giriniz:\n");
                scanf("%lf",&s4);
                sonuc=log10(s4)/log10(s3);
                if(s4<1)
                    printf("--Tanimsiz--");
                else if(s3<=1)
                    printf("--Tanimsiz--");


                else
                    printf("Sonuc: %lf",sonuc);
                break;

            }

        }

    }

    return 0;
}
