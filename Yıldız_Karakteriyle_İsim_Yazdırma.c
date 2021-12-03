//isim Yazdirma Ödevi
//21100011050_Ödev3
int boyut;
//S Harfi
int sharfi()
{


    int bosluk;
    int i,j,k;
    for(i=0; i<boyut; i++)
    {
        if(i==0 || i==boyut/2 || i==boyut-1)
        {
            for(j=0; j<boyut; j++)
            {
                printf("*");
            }
            printf("\n");
        }



        else if(i<boyut-1 && i>boyut/2)
        {
            bosluk=0;
            bosluk+=boyut-1;
            for(j=0; j<bosluk; j++)
            {
                printf(" ");
            }
            for(k=1; k<=1; k++)
            {

                printf("*\n");

            }

        }
        else if(i>0 && i<boyut/2)
            printf("*\n");


    }
}
//E Harfi
int eharfi()
{

    int i,j;
    for(i=0; i<boyut; i++)
    {
        if(i==0 || i==boyut/2 || i==boyut-1)
        {
            for(j=1; j<=boyut; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
            printf("*\n");


    }
}
//M harfi
int mharfi()
{
    int i,j,k;

    int bosluk;
    for(i=0; i<boyut-1; i++)
    {
        if(i==0)
            for(j=0; j<boyut; j++)
            {
                printf("*");
            }
        printf("\n");
        if(i<=boyut && i>=boyut/2)
        {
            printf("*");
            bosluk=boyut-2;
            for(k=0; k<bosluk; k++)
            {
                printf(" ");
            }
            printf("*");

        }

        if(i>=0 && i<boyut/2)
        {
            printf("*");
            bosluk=boyut/2-1;
            for(k=0; k<bosluk; k++)
            {
                printf(" ");
            }
            printf("*");
            for(k=0; k<bosluk; k++)
            {
                printf(" ");
            }
            printf("*");
        }
    }
}

//A harfi
int aharfi()
{

    int i,j,k;
    int bosluk;

    for(i=0; i<boyut-1; i++)
    {
        if(i==0 || i==boyut/2)
            for(j=0; j<boyut; j++)
            {
                printf("*");

            }
        printf("\n");

        if(i<=boyut && i>=boyut/2 || i<boyut/2-1)
        {
            printf("*");
            bosluk=boyut-2;
            for(k=0; k<bosluk; k++)
            {
                printf(" ");
            }
            printf("*");

        }


    }
}

//K Harfi
int kharfi()
{

    int bosluk;
    int i,j;
    bosluk=boyut-2;
    for(i=0; i<boyut/2; i++)
    {
        printf("*");

        for(j=0; j<bosluk; j++)
        {
            printf(" ");

        }
        printf("*\n");
        bosluk-=1;
    }
    for(i=0; i<boyut/2+1; i++)
    {
        printf("*");
    }
    printf("\n");

    bosluk=boyut/2;
    for(i=0; i<boyut/2; i++)
    {
        printf("*");

        for(j=0; j<bosluk; j++)
        {
            printf(" ");

        }
        printf("*\n");
        bosluk+=1;



    }
}
//C Harfi
int charfi()
{
    int i,j;

    for(i=0; i<boyut; i++)
    {
        if(i==0 || i==boyut-1)
        {
            for(j=0; j<boyut; j++)
                printf("*");
            printf("\n");
        }
        else
        {
            if(i>0 && i<boyut)
                printf("*\n");
        }
    }
}
//i Harfi
int iharfi()
{

    int i;
    for(i=0; i<boyut-1; i++)
    {
        if(i==1)
            printf(" \n");
        printf("*\n");
    }
}




int main()
{
    while(1==1)
    {

    printf("--Boyutu tek rakam giriniz--\n\n--Boyutu 5 veya 5'den buyuk bir tam sayi giriniz--\n\nBoyut Giriniz-->");
    scanf("%d",&boyut);

    if(boyut>=5 && boyut%2!=0)
    {
    printf("\n\n\n",sharfi());
    printf("\n\n\n",eharfi());
    printf("\n\n\n",mharfi());
    printf("\n\n\n",aharfi());
    printf("\n\n\n",eharfi());
    printf("\n\n\n",kharfi());
    printf("\n\n\n",mharfi());
    printf("\n\n\n",eharfi());
    printf("\n\n\n",kharfi());
    printf("\n\n\n",charfi());
    printf("\n\n\n",iharfi());

    }

    else
        printf("\n\n--Hatali Boyut Girdiniz!!!\n");
}
}
