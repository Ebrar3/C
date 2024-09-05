#include <stdio.h>

//first seats are reserved for the first class passengers and the rest are for the economy class passengers, total 10 seats.
//When the program is run, it asks the user to enter 1 for first class and 2 for economy class until all seats are filled.

int main(){
            
        printf("Birinci sinif icin 1, ekonomi sinifi icin 2 giriniz:\n");
        int seats[10]={0};
        int sec;
        char a;
        scanf("%d",&sec);
        while (1){
               
                if(sec ==1){
                        if(seats[4]==1){
                            puts("Birinci sinif dolu, ekonomi sinifi ister misiniz? (Y/N)");
                            scanf(" %c",&a);
                            if (a== 'Y' || a=='y'){
                                sec=2;
                                continue;
                                }  
                            else if(a=='N' || a=='n'){
                                printf("Bir sonraki ucuşu bekleyiniz. (3 saat sonra)\n");}
                                               }
                        else{
                        for(int i=0; i<5;i++){
                        
                            if(seats[i]==0){
                                seats[i]+=1;
                                printf("Birinci sinifta koltuk atamaniz: %d.\n",i+1);
                                break;}

                    }

                }}
                else if(sec ==2){
                    if(seats[9]==1){
                                printf("Ekonomi sinifi dolu, birinci sinif ister misiniz? (Y/N)\n");
                                scanf(" %c",&a);
                                if(a== 'Y' || a=='y'){
                                    sec=1;
                                    continue;
                                }
                                else if(a=='N' || a=='n'){
                                    printf("Bir sonraki ucuşu bekleyiniz. (3saat sonra)\n");
                                }
                            }
                    else{
                    for(int i=5;i<10;i++){ 
                        if(seats[i]==0){
                            seats[i]+=1;
                            printf("Ekonomi sinifindaki koltuk atamaniz:%d.\n",i+1);
                            break;
                        }
                    }
                }
                }
         if(seats[9]==1 && seats[4]==1)
                break; //if all seats are filled, the loop will break.

        
        printf("Birinci sinif icin 1, ekonomi sinifi icin 2 giriniz:\n");
        scanf("%d",&sec);
        }
        printf("Ucaktaki butun koltuklar dolmustur.\n");
    return 0;
}



