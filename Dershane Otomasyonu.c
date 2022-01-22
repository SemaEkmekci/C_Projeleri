//Numara=21100011050
//Ad Soyad=Sema Nur EKMEKCİ


#include <stdio.h> //Giris cikis fonksiyonlarýnýn bulundugu kutuphane
#include <stdlib.h>
#include <string.h> //strcpy fonksiyonu kullanmak için yazilan kütüphane.

struct ogrenci_net_bilgi //otomasyonda ogrencilerin netlerini tutan struct yapýsý.
{
    double tytneti;
    double aytneti;

}netler;
struct ogrenci  // otomasyonda ogrencilerin bilgilerinin tutan struct yapýsý.
{

    int ogrenci_no;
    char ad_soyad[30];
    int toplamtytdogru;
    int toplamtytyanlis;
    int toplamaytdogru;
    int toplamaytyanlis;
    double tytneti;
    double aytneti;
    struct netler *net;
    struct ogrenci *OGRENCI; //ogrenci bilgilerini kaydetmek icin pointer tanýmladým.

};

int tus;
void ogrenci_kayit(struct ogrenci *OGRENCI,int ogrencisayisi)
{
    int i;
    int ogrenci_no;
    char ad_soyad[30];
    int toplamtytdogru;
    int toplamtytyanlis;
    int toplamaytdogru;
    int toplamaytyanlis;
    for(i=1;i<ogrencisayisi;i++) //i, ogrencisayisinden kucuk oldugu sürece dongý devam ediyor.
    {
        OGRENCI++; //OGRENCI pointerini her artýrdýgýmda diger ogrencinin bilgilerinin bulundugu bellek adresini gosteriyor.
    }
    printf("%d. Ogrenci Bilgileri Giriniz\n",i);
    printf("----------------------------------------\n");
    printf("Ogrenci No-->");
    scanf("%d",&ogrenci_no);
    printf("%d. Ogrenci Ad ve Soyad-->",i);
    scanf("%s",&ad_soyad);
    printf("\n");
    printf("%s Isimli Ogrenci Tyt Dogru Sayisi-->",ad_soyad);
    scanf("%d",&toplamtytdogru);
    printf("\n");
    printf("%s Isimli Ogrenci Tyt Yanlis Sayisi-->",ad_soyad);
    scanf("%d",&toplamtytyanlis);
    printf("\n");
    printf("%s Isimli Ogrenci Ayt Dogru Sayisi-->",ad_soyad);
    scanf("%d",&toplamaytdogru);
    printf("\n");
    printf("%s Isimli Ogrenci Ayt Yanlis Sayisi-->",ad_soyad);
    scanf("%d",&toplamaytyanlis);

    OGRENCI->ogrenci_no=ogrenci_no; //yukarýda almýs oldugum ogrenci_no yu  OGRENCI pointerimin icinde bulunan ogrenci_no nun adresine kopyalýyor.
    strcpy(OGRENCI->ad_soyad,ad_soyad);//yukarýda almýs oldugum ad_soyad ý  OGRENCI pointerimin icinde bulunan ad_soyad ýn adresine kopyalýyor. ad_soyad string bir ifade oldugu icin strcopy fonksiyonu ile kopyalýyoruz.
    OGRENCI->toplamtytdogru=toplamtytdogru;//yukarýda almýs oldugum toplamtytdogru yu  OGRENCI pointerimin icinde bulunan toplamtytdogru nun adresine kopyalýyor.
    OGRENCI->toplamtytyanlis=toplamtytyanlis;//yukarýda almýs oldugum toplamtytyanlis i  OGRENCI pointerimin icinde bulunan toplamtytyanlis ýn adresine kopyalýyor.
    OGRENCI->toplamaytdogru=toplamaytdogru;//yukarýda almýs oldugum toplamaytdogru yu  OGRENCI pointerimin icinde bulunan toplamaytdogru nun adresine kopyalýyor.
    OGRENCI->toplamaytyanlis=toplamaytyanlis;//yukarýda almýs oldugum toplamaytyanlis i  OGRENCI pointerimin icinde bulunan toplamaytyanlis in adresine kopyalýyor.
    OGRENCI->tytneti=toplamtytdogru-((double)toplamtytyanlis/4);//yukarýda almýs oldugum toplamtytdogru ve toplamtytyanlisla neti hesaplayýp tytneti nin adresine kopyalýyor.
    OGRENCI->aytneti=toplamaytdogru-((double)toplamaytyanlis/4);//yukarýda almýs oldugum toplamaytdogru ve toplamaytyanlisla neti hesaplayýp aytneti nin adresine kopyalýyor.
    printf("OGRENCI BASARIYLA KAYIT EDILDI\n");

}
void ogrenci_listele(struct ogrenci *OGRENCI, int ogrencisayisi)
{

    int i;

    printf("Kayitli Ogrenci Bilgileri\n");
    printf("**********************************************************************************************************\n");
    printf("%s|\t%s |\t %s |\t %s |\t %s |\t %s","OGRENCI NO","AD-SOYAD","TYT DOGRU","TYT YANLIS","AYT DOGRU","AYT YANLIS\n");
    for(i=0; i<ogrencisayisi; i++)
    {

        printf("\n**********************************************************************************************************\n");

        printf("  %d",OGRENCI->ogrenci_no);  //OGRENCI pointerinin icinde bulunan ogrenci_no ya -> isaretini kullanarak ulasýyoruz ve ekrana ogrenci_no adresinin icinde bulunan degerin cýktýsýný veriyor.
        printf("\t|\t");
        printf("  %s",OGRENCI->ad_soyad);
        printf("\t|\t");
        printf("  %d",OGRENCI->toplamtytdogru);
        printf("\t|\t");
        printf("    %d",OGRENCI->toplamtytyanlis);
        printf("\t|\t");
        printf("   %d",OGRENCI->toplamaytdogru);
        printf("\t|\t");
        printf("   %d",OGRENCI->toplamaytyanlis);

        OGRENCI++; ////OGRENCI pointerini her artýrdýgýmda diger ogrencinin bilgilerinin bulundugu bellek adresini gosteriyor.

    }
    printf("\n\n");
    printf("LISTELEME ISLEMI BASARIYLA TAMAMLANDI");
}

void ogrenci_guncelle(struct ogrenci *OGRENCI,int ogrencisayisi)
{
    int i;
    int ogrenci_no;
    int ogrenci_noo;
    char ad_soyad[30];
    int toplamtytdogru;
    int toplamtytyanlis;
    int toplamaytdogru;
    int toplamaytyanlis;
    ogrenci_listele(OGRENCI,ogrencisayisi);
    printf("\nGuncellemek Istediginiz Ogrenci No-->");
    scanf("%d",&ogrenci_noo);
    printf("ogrencisayisi-->%d\n",ogrencisayisi);

    for(i=0; i<ogrencisayisi; i++)
    {
        if(OGRENCI->ogrenci_no==ogrenci_noo) //kullanýcýdan aldýgým ogrenci_noo yu OGRENCI pointerinin icinde bulunan ogrencilerin ogrenci_no larý ile karsýlastýrarak ayný degere sahip ogrenci var mý diye kontrol ediyor.
        {
            printf("%d Numarali Ogrenci Bilgileri Giriniz\n",ogrenci_noo);
            printf("----------------------------------------\n");
            printf("Yeni Ogrenci No-->");
            scanf("%d",&ogrenci_no);
            printf("%d No'lu Ogrenci Ad ve Soyadi-->",ogrenci_no);
            scanf("%s",&ad_soyad);
            printf("\n");
            printf("%s Isimli Ogrenci Tyt Dogru Sayisi-->",ad_soyad);
            scanf("%d",&toplamtytdogru);
            printf("\n");
            printf("%s Isimli Ögrenci Tyt Yanlis Sayisi-->",ad_soyad);
            scanf("%d",&toplamtytyanlis);
            printf("\n");
            printf("%s Isimli Ogrenci Ayt Dogru Sayisi-->",ad_soyad);
            scanf("%d",&toplamaytdogru);
            printf("\n");
            printf("%s Isimli Ogrenci Ayt Yanlis Sayisi-->",ad_soyad);
            scanf("%d",&toplamaytyanlis);

            OGRENCI->ogrenci_no=ogrenci_no; //guncellenen degeri eski degerin yerine atýyor.
            strcpy(OGRENCI->ad_soyad,ad_soyad);
            OGRENCI->toplamtytdogru=toplamtytdogru;
            OGRENCI->toplamtytyanlis=toplamtytyanlis;
            OGRENCI->toplamaytdogru=toplamaytdogru;
            OGRENCI->toplamaytyanlis=toplamaytyanlis;

            printf("GUNCELLEME ISLEMI BASARIYLA TAMAMLANDI");
        }


        OGRENCI++;
    }
}
int net_hesapla(struct ogrenci *OGRENCI,int ogrencisayisi)
{

    double tytneti;
    double aytneti;
    printf("Kayitli Ogrenci Net Bilgileri\n");
    printf("************\n");
    printf("%s|\t%s |\t %s |\t%s","OGRENCI NO","AD-SOYAD","TYT NET","AYT NET\n");
    for(int i=0; i<ogrencisayisi; i++)
    {
        printf("  %d\t  |\t%s\t |\t%f |%f\n",OGRENCI->ogrenci_no,OGRENCI->ad_soyad,OGRENCI->tytneti,OGRENCI->aytneti);
        OGRENCI++;
    }


}

void ogrenci_sil(struct ogrenci *OGRENCI,int ogrencisayisi)
{
    int ogrenci_no;
    int ogrenci_noo;
    if(OGRENCI==NULL) //Eger OGRENCI pointerýnin icine hicbir veri kaydedilmediyse ekrana KAYITLI OGRENCI YOK cýktýsýný veriyor.
    {
        printf("KAYITLI OGRENCI YOK");
    }

    else
    {
        ogrenci_listele(OGRENCI,ogrencisayisi);
        printf("\nSilmek Istediginiz Ogrenci No-->");
        scanf("%d",&ogrenci_noo);
        for(int i=0; i<ogrencisayisi; i++)
        {
            if(OGRENCI->ogrenci_no==ogrenci_noo)
            {
                free(OGRENCI); //Silmek istedigimiz ogrenciyi siliyor.

                printf("Silme islemi basariyla tamamlandi");
            }

        }
OGRENCI++;
    }

}

void en_basarili_ogrenci(struct ogrenci *OGRENCI,int ogrencisayisi)
{
    double yuksek_ayt=OGRENCI->aytneti;
    double yuksek_tyt=OGRENCI->tytneti;
    char tyt_birincisi[20];
    char ayt_birincisi[20];
    int i;
    strcpy(tyt_birincisi,OGRENCI->ad_soyad); //tytbirincisi degiskenine ad_soyad ý kopyalýyor.
    strcpy(ayt_birincisi,OGRENCI->ad_soyad);
    for(i=1; i<=ogrencisayisi; i++)
    {
        if(OGRENCI->tytneti>yuksek_tyt)
        {
            strcpy(tyt_birincisi,OGRENCI->ad_soyad);
            yuksek_tyt=OGRENCI->tytneti;
        }
        if(OGRENCI->aytneti>yuksek_ayt)
        {
            strcpy(ayt_birincisi,OGRENCI->ad_soyad);
            yuksek_ayt=OGRENCI->aytneti;
        }
        OGRENCI++;
    }
    printf("%s isimli ogrenci %.2f  net yaparak tyt birincisi olmustur\n",tyt_birincisi,yuksek_tyt);
    printf("%s isimli ogrenci %.2f  net yaparak ayt birincisi olmustur\n",ayt_birincisi,yuksek_ayt);
}

int AnaMenu()
{

    printf("\t\t\n\nDERSHANE OTOMASYONU\n");
    printf("\n\n\t\t----------------------------------------\n");
    printf("\t\t[1]OGRENCI KAYIT\n");
    printf("\t\t[2]OGRENCI LISTELEME\n");
    printf("\t\t[3]OGRENCI GUNCELLEME\n");
    printf("\t\t[4]OGRENCI SILME\n");
    printf("\t\t[5]NET HESAPLA\n");
    printf("\t\t[6]OGRENCI BASARI SIRASI\n");
    printf("\t\t[0]OTOMASYONU KAPAT\n");
    printf("Seciminiz-->");
    scanf("%d",&tus);
    return tus;
}


int main()
{

    int ogrencisayisi=0; //baslangýcta ogrencisayisini 0 alýyor ve malloc ile bellekte yer tahsis ediyor.
    struct ogrenci *p=(struct ogrenci *)malloc(ogrencisayisi*sizeof(struct ogrenci));
    struct ogrenci *OGRENCI=p;
    if(p==NULL) //eger bellekte istenilen kadar yer yoksa YETERSIZ BELLEK yazýyor.
    {
        printf("YETERSIZ BELLEK!...");
        exit(1);
    }

    tus=AnaMenu();
    while(0==0)
    {

        if(tus==0)
        {
          exit(1);  //programý return 1 dondurerek sonlandýrýyor.
          break;
        }

        if(tus==1)
        {
            ogrencisayisi=ogrencisayisi+1; //her ogrenci kayýt edecegim zaman ogrencisayisi ni 1 artýrýyor ki realloc ile yeni eklenen ogrenciye de yer ayrýlabilsin.
            OGRENCI=realloc(p,ogrencisayisi); //realloc ile malloc ile tahsis ettiðmiz bellegi genisleterrek yeni kayýt edilecek ogrenciye de yer tahsis ediyor.
            ogrenci_kayit(OGRENCI,ogrencisayisi);
        }
        else if(tus==2)
            ogrenci_listele(OGRENCI,ogrencisayisi);
        else if(tus==3)
            ogrenci_guncelle(OGRENCI,ogrencisayisi); //ogrenci_guncelle fonksiyonunu cagýrýyor. OGRENCI ve ogrencisayisini parametre olarak fonksiyona gonderiyor.
        else if(tus==4)
        {
            ogrenci_sil(OGRENCI,ogrencisayisi);
            //ogrencisayisi=ogrencisayisi-1;
           // OGRENCI=realloc(p,ogrencisayisi);

        }

        else if(tus==5)
            net_hesapla(OGRENCI,ogrencisayisi);
        else if(tus==6)
            en_basarili_ogrenci(OGRENCI,ogrencisayisi);
        else
            printf("Hatali kodlama yaptiniz tekrar deneyiniz\n");
        tus=AnaMenu();

    }
}
