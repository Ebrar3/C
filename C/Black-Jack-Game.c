// the program that runs the 21 game /Black Jack

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define SIZE 20

int main(){
    puts("Welcome to the Black Jack Game");
    printf("Will you play single player(1) or multiplayer(2)? Or will you quit(3), if you dont know to play learn the rules(4)\n");
    int choice;
    scanf("%d",&choice);
    if(choice==3){
        puts("You have chosen to quit\n");
    }
    
    while(choice!=3){
    if(choice ==4){
        printf("The rules are simple, you have to get 21 points to win, you can draw 1-9 points each time, if you go over 21 you lose\n");
            printf("you should take a card or pass, if you pass the other player will take a card and who gets closer to 21 wins.\n");
            
    }
        int sayi1,sayi2,sonuc=0,a,iter,i;

    switch(choice){
        case 1:
            sonuc=0;
            puts("You have chosen single player\n");
            srand(time(NULL));
            int cards[SIZE]={0};
            int pccards[SIZE]={0};
            
                sayi1 = rand()%10+1;
                sayi2 = rand()%10+1;
                int top=sayi1+sayi2;
                cards[0]=sayi1;
                cards[1]=sayi2;
                iter=2;
                printf("Your cards are %d ,%d\n",sayi1,sayi2);
                printf("Computer is taking a card\n");
                sayi1=rand()%10+1;
                sayi2=rand()%10+1;
                int pctop=sayi1+sayi2;
                pccards[0]=sayi1;
                pccards[1]=sayi2;

                printf("Do you want to take a card or pass? (1 for take a card, 2 for pass)\n");
                scanf("%d",&a);
                while (a==1){
                    sayi1=rand()%10+1;
                    cards[iter]=sayi1;
                    top+=sayi1;
                    printf("Your cards are");
                    for(int i=0;i<iter+1;i++){
                        printf(" %d,",cards[i]);
                    }
                    if(top>21){
                        printf("You lost\n");
                        sonuc=1;
                        break;
                    }
                    if(top==21){
                        printf("You won\n");
                        sonuc=1;
                        break;
                    }
                    printf("\nDo you want to take a card or pass? (1 for take a card, 2 for pass)\n");
                    scanf("%d",&a);
                    iter++;    
                }
                int devam=1;
                iter=2;
                if (sonuc==0){
                printf("Computer's cards are %d, %d,",pccards[0],pccards[1]);
                while(devam){
                    sayi2=rand()%10+1;
                    pccards[iter]=sayi2;
                    printf(" %d,",pccards[iter]);
                    iter++;
                    pctop+=sayi2;
                    if(pctop>=17){
                        devam=rand()%2;
                    }
                    if(pctop>21){
                        printf("\nYou won\n");
                        sonuc=1;
                        break;
                    }

                }
                if(sonuc==0){
                if(fabs(21-top)<fabs(21-pctop)){
                    printf("\nYou won\n");
                }
                else if (fabs(21-top)==fabs(21-pctop)){
                    printf("\nThe result is draw.\n");
                }
                else{
                    printf("\nYou lost\n");
                }
                }
                }
                
            break;

        case 2:
            puts("You have chosen multiplayer");
            sayi1=rand()%10+1;
            sayi2=rand()%10+1;
            int fplayer[SIZE]={0};
            int fplayertop=sayi1+sayi2;
            fplayer[0]=sayi1;
            fplayer[1]=sayi2;
            sonuc=0;
            iter=2;

            printf("1.Players cards are");
            for(i=0;i<iter;i++){
                printf(" %d,",fplayer[i]);
            }
            printf("\nDo you want to take a card or pass? (1 for take a card, 2 for pass)\n");
            scanf("%d",&a);
            while (a==1){
                sayi1=rand()%10+1;
                fplayer[iter]=sayi1;
                fplayertop+=sayi1;
                iter++;
                printf("1.Players cards are");
                for(i=0;i<iter;i++){
                printf(" %d,",fplayer[i]);
                }
                
                if(fplayertop==21){
                    printf("\n1.Player won\n");
                    sonuc=1;
                    break;
                }
                else if(fplayertop>21){
                    printf("\n1.Player lost\n");
                    sonuc=1;
                    break;
                }
                printf("\nDo you want to take a card or pass? (1 for take a card, 2 for pass)\n");
                scanf("%d",&a);    
            }
            if(sonuc==0){
                int splayer[SIZE]={0};
                sayi1=rand()%10+1;
                sayi2=rand()%10+1;
                splayer[0]=sayi1;
                splayer[1]=sayi2;
                int splayertop=sayi1+sayi2;
                iter=2;
                printf("************\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                printf("2.Players cards are");
            for(i=0;i<iter;i++){
                printf(" %d,",splayer[i]);
            }
            printf("\nDo you want to take a card or pass? (1 for take a card, 2 for pass)\n");
            scanf("%d",&a);
            while (a==1){
                sayi1=rand()%10+1;
                splayer[iter]=sayi1;
                splayertop+=sayi1;
                iter++;
                printf("2.Players cards are");
                for(i=0;i<iter;i++){
                printf(" %d,",splayer[i]);
                }
                
                if(splayertop==21){
                    printf("\n2.Player won\n");
                    sonuc=1;
                    break;
                }
                else if(splayertop>21){
                    printf("\n2.Player lost\n");
                    sonuc=1;
                    break;
                }
                printf("\nDo you want to take a card or pass? (1 for take a card, 2 for pass)\n");
                scanf("%d",&a);    
            }
            if(sonuc==0){
                if(fabs(21-fplayertop)<fabs(21-splayertop)){
                    printf("1.Player won\n");
                }
                else if(fabs(21-fplayertop)==fabs(21-splayertop)){
                    printf("The result is draw\n");
                }
                else{
                    printf("2.Player won\n");
                }
            }


            }














            break;
        
    
            

    }
    printf("Will you play single player(1) or multiplayer(2)? Or will you quit(3), if you dont know to play learn the rules(4)\n");
    scanf("%d",&choice);

    }
    return 0;
}

