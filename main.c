#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int makinepuan=0;
    int insanpuan=0;
    int makinedeger;
    int insandeger;
    int macsayisi;
    int macsayac;
    printf("kacta biter?\n");
    scanf("%d",&macsayac);
    while(macsayac>makinepuan && macsayac>insanpuan)
    {
        printf("Tas, Kagit, Makas!!(tas=1/kagit=2/makas=3)\n");
        scanf("%d",&insandeger);
        makinedeger=rand()%3+1;
        printf("%d",makinedeger);
        if (insandeger==1)
        {
            if(makinedeger==1)
            {
                printf("Makine tas yapti.Berabare puan alan yok\n");
            }
            else if (makinedeger==2)
            {
                makinepuan++;
                printf("Makine kagit yapti.Makine puan kazandi!!\n");
                printf("makine %d-%d insan\n",makinepuan,insanpuan);
            }
            else
            {
                insanpuan++;
                printf("Makine makas yapti.Puan kazandiniz!!\n");
                printf("makine %d-%d insan\n",makinepuan,insanpuan);
            }
        }
        else if (insandeger==2)
        {
            if(makinedeger==2)
            {
                printf("Makine kagit yapti.Berabare puan alan yok\n");
            }
            else if (makinedeger==3)
            {
                makinepuan++;
                printf("Makine makas yapti.Makine puan kazandi!!\n");
                printf("makine %d-%d insan\n",makinepuan,insanpuan);
            }
            else
            {
                insanpuan++;
                printf("Makine tas yapti.Puan kazandiniz!!\n");
                printf("makine %d-%d insan\n",makinepuan,insanpuan);
            }
        }
        else if (insandeger==3)
        {
            if(makinedeger==3)
            {
                printf("Makine makas yapti.Berabare puan alan yok\n");
            }
            else if (makinedeger==1)
            {
                makinepuan++;
                printf("Makine tas yapti.Makine puan kazandi!!\n");
                printf("makine %d-%d insan\n",makinepuan,insanpuan);
            }
            else
            {
                insanpuan++;
                printf("Makine kagit yapti.Puan kazandiniz!!\n");
                printf("makine %d-%d insan\n",makinepuan,insanpuan);
            }
        }
        else
        {
            printf("Gecerli deger giriniz.\n");
        }
    }
    if (makinepuan<insanpuan)
    {
        printf("!!!Tebrikler kazandiniz!!!");
    }
    else
    {
        printf("Kaybettiniz:(");
    }
    return 0;
}
