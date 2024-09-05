//the programe of Hangman game

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#define K 23
#define H 25
#define ADAM_ROW 9
#define ADAM_COL 16



int main(){
    char Kategori[5]={'H','U','B','E','R'}; // H:animals, U: countries, B:plants, E:stuffs, R:colours
    char h[K][H]={
        "kedi",
        "kurbaga",
        "kaplumbaga",
        "kopek",
        "ornitorenk",
        "goril",
        "serce",
        "guvercin",
        "Su aygiri",
        "papagan",
        "sahin",
        "kartal",
        "cekirge",
        "deniz yildizi",
        "deniz ati",
        "inek",
        "keci",
        "zurafa",
        "sirtlan",
        "cita",
        "vasak",
        "aslan",
        "kaplan"};
    char u[K][H]={
        "turkiye",
        "ingiltere",
        "almanya",
        "bulgaristan",
        "kirgizistan",
        "rusya",
        "ukrayna",
        "japonya",
        "arjantin",
        "slovakya",
        "nijerya",
        "laos",
        "yunanistan",
        "makedonya",
        "italya",
        "fransa",
        "ispanya",
        "gürcistan",
        "mogolistan",
        "ozbekistan",
        "irlanda",
        "hollanda",
        "cibuti"};
    
    char b[K][H]={
        "krizantem",
        "begonya",
        "ejderha meyvesi",
        "papatya",
        "orkide",
        "nergis",
        "karanfil",
        "su bambusu",
        "isirgan otu",
        "cınar",
        "sardunya",
        "leylak",
        "bugday",
        "menekse",
        "lale",
        "yonca",
        "lavanta",
        "igde",
        "ihlamur",
        "kantaron",
        "portakal",
        "maydanoz",
        "visne"};
    char e[K][H]={
        "televizyon",
        "gozluk",
        "sapka",
        "ayakkabi",
        "canta",
        "soba",
        "koltuk",
        "perde",
        "telefon",
        "yastik",
        "avize",
        "lamba",
        "kravat",
        "saat",
        "corap",
        "vileda",
        "mandal",
        "gardrop",
        "dolap",
        "sandalye",
        "bardak",
        "sürahi",
        "vantilator"};
    char R[K][H]={
        "mavi",
        "kirmizi",
        "yesil",
        "sari",
        "lacivert",
        "haki",
        "gri",
        "turuncu",
        "beyaz",
        "kadife",
        "yavru agzi",
        "gul kurusu",
        "mor",
        "fusya",
        "bebe mavisi",
        "pembe",
        "kahverengi",
        "saman sarisi",
        "lila",
        "cam göbegi",
        "krem rengi",
        "gumus rengi",
        "altin rengi"};
    int a,maxhata=7,hatasayisi=0,r;
    int o,i,var=0,harfsayisi=0,oyle=0,l;
    char aranan[H],harf,sahne[H];
    char adam[ADAM_ROW][ADAM_COL]={
        "      ________  ",
        "     |        | ",
        "    _|_       | ",   
        "   (^ ^)      | ", 
        "     |        | ",
        "    /|\\       | ",
        "     |        | ",
        "    / \\       | ",
        "   <   >     _|_"
    };
    char askilik[ADAM_ROW][ADAM_COL]={
        "      ________ ",
        "     |        | ",
        "    _|_       | ", 
        "              | ",
        "              | ",
        "              | ",
        "              | ",
        "              | ",
        "             _|_"
    };
    srand(time(NULL));
    printf("Adam asmaca oyununu oyna->1, cikis->0\n");
    scanf(" %d",&a);
    printf("(Turkce karakter kullanmayiniz.)\n");
    while(a){
        o=rand()%5;
        switch(Kategori[o]){
            case 'H':
                printf("Kategori: Hayvan\n");
                puts("");
                r=rand()% K ;

                for (i=0;h[r][i]!='\0';i++){
                    if (h[r][i]== ' '){
                        sahne[i]=' ';
                        aranan[i]=h[r][i];
                        printf(" ");
                        continue;
                    }
                    printf("_ ");
                    sahne[i]='_';
                    aranan[i]=h[r][i];
                    harfsayisi++;
                }
                aranan[i]='\0';
                sahne[i]='\0';
                while(1){
                    printf("\nHarf girin: ");
                    scanf(" %c",&harf);
                    harf=tolower(harf);
                    while(!isalpha(harf)){
                        printf("\nHarf girin: ");
                        scanf(" %c",&harf);
                    }
                    puts("");
                    for(i=0;aranan[i]!='\0';i++){
                        if(harf==aranan[i]){
                            sahne[i]=harf;
                            var=1;
                        }    
                    }
                    if(var==0){
                        hatasayisi++;
                    }
                    var=0;
                    if (hatasayisi==0){
                        for(i=0;sahne[i]!='\0';i++){
                        printf("%c ",sahne[i]);
                        }
                        puts("");
                    }
                    if(hatasayisi>0){
                        if(hatasayisi==1){
                            for(i=0;i<ADAM_ROW;i++){
                                for(l=0;l<ADAM_COL;l++){
                                    printf("%c",askilik[i][l]);}
                                if(i==ADAM_ROW-1){
                                    printf("    ");
                                    for(l=0;l<harfsayisi;l++){
                                        printf("%c ",sahne[l]);}
                                }
                                puts("");
                                    
                            }
                            puts("");
                        }
                        else{
                            for(i=0;i<ADAM_ROW;i++){
                                if(i<=hatasayisi+1){
                                
                                    for(l=0;l<ADAM_COL;l++){
                                        printf("%c",adam[i][l]);
                                    }
                                    puts("");
                                }
                                else{
                                for(l=0;l<ADAM_COL;l++){
                                    printf("%c",askilik[i][l]);
                                }
                                if(i!=ADAM_ROW-1)
                                    puts("");
                                }
                            
                            }
                            printf("    ");
                            for(i=0;i<sahne[i]!='\0';i++){
                            printf("%c ",sahne[i]);
                            }
                        }
                    }

                    
                    for(i=0;sahne[i]!='\0';i++){
                        if(sahne[i]!='_'){
                            if(sahne[i]==' '){
                                continue;
                            }
                            oyle++;
                        }
                    }
                    if(oyle==harfsayisi){
                        printf("\nTebrikler kazandiniz!\n");
                        break;
                    }

                    if(hatasayisi==maxhata){
                            printf("\nKaybettiniz!\n");
                            printf("dogru cevap: ");
                            for(i=0;aranan[i]!='\0';i++){
                                printf("%c",aranan[i]);
                            }
                            puts("");
                            break;
                    }
                    oyle=0;
                }
            








                break;
            case 'U':
                printf("Kategori: Ulke\n");
                puts("");
                r=rand()% K ;

                for (i=0;u[r][i]!='\0';i++){
                    if (u[r][i]== ' '){
                        sahne[i]=' ';
                        aranan[i]=u[r][i];
                        printf(" ");
                        continue;
                    }
                    printf("_ ");
                    sahne[i]='_';
                    aranan[i]=u[r][i];
                    harfsayisi++;
                }
                aranan[i]='\0';
                sahne[i]='\0';
                while(1){
                    printf("\nHarf girin: ");
                    scanf(" %c",&harf);
                    harf=tolower(harf);
                    while(!isalpha(harf)){
                        printf("\nHarf girin: ");
                        scanf(" %c",&harf);
                    }
                    puts("");
                    for(i=0;aranan[i]!='\0';i++){
                        if(harf==aranan[i]){
                            sahne[i]=harf;
                            var=1;
                        }    
                    }
                    if(var==0){
                        hatasayisi++;
                    }
                    var=0;
                    if (hatasayisi==0){
                        for(i=0;sahne[i]!='\0';i++){
                        printf("%c ",sahne[i]);
                        }
                        puts("");
                    }
                    if(hatasayisi>0){
                        if(hatasayisi==1){
                            for(i=0;i<ADAM_ROW;i++){
                                for(l=0;l<ADAM_COL;l++){
                                    printf("%c",askilik[i][l]);}
                                if(i==ADAM_ROW-1){
                                    printf("    ");
                                    for(l=0;l<harfsayisi;l++){
                                        printf("%c ",sahne[l]);}
                                }
                                puts("");
                                    
                            }
                            puts("");
                        }
                        else{
                            for(i=0;i<ADAM_ROW;i++){
                                if(i<=hatasayisi+1){
                                
                                    for(l=0;l<ADAM_COL;l++){
                                        printf("%c",adam[i][l]);
                                    }
                                    puts("");
                                }
                                else{
                                for(l=0;l<ADAM_COL;l++){
                                    printf("%c",askilik[i][l]);
                                }
                                if(i!=ADAM_ROW-1)
                                    puts("");
                                }
                            
                            }
                            printf("    ");
                            for(i=0;i<sahne[i]!='\0';i++){
                            printf("%c ",sahne[i]);
                            }
                        }
                    }

                    
                    for(i=0;sahne[i]!='\0';i++){
                        if(sahne[i]!='_'){
                            if(sahne[i]==' '){
                                continue;
                            }
                            oyle++;
                        }
                    }
                    if(oyle==harfsayisi){
                        printf("\nTebrikler kazandiniz!\n");
                        break;
                    }

                    if(hatasayisi==maxhata){
                            printf("\nKaybettiniz!\n");
                            printf("dogru cevap: ");
                            for(i=0;aranan[i]!='\0';i++){
                                printf("%c",aranan[i]);
                            }
                            puts("");
                            break;
                    }
                    oyle=0;
                }
            
                break;
            case 'B':
                printf("Kategori: Bitki\n");
                puts("");
                r=rand()% K ;

                for (i=0;b[r][i]!='\0';i++){
                    if (b[r][i]== ' '){
                        sahne[i]=' ';
                        aranan[i]=b[r][i];
                        printf(" ");
                        continue;
                    }
                    printf("_ ");
                    sahne[i]='_';
                    aranan[i]=b[r][i];
                    harfsayisi++;
                }
                aranan[i]='\0';
                sahne[i]='\0';
                while(1){
                    printf("\nHarf girin: ");
                    scanf(" %c",&harf);
                    harf=tolower(harf);
                    while(!isalpha(harf)){
                        printf("\nHarf girin: ");
                        scanf(" %c",&harf);
                    }
                    puts("");
                    for(i=0;aranan[i]!='\0';i++){
                        if(harf==aranan[i]){
                            sahne[i]=harf;
                            var=1;
                        }    
                    }
                    if(var==0){
                        hatasayisi++;
                    }
                    var=0;
                    if (hatasayisi==0){
                        for(i=0;sahne[i]!='\0';i++){
                        printf("%c ",sahne[i]);
                        }
                        puts("");
                    }
                    if(hatasayisi>0){
                        if(hatasayisi==1){
                            for(i=0;i<ADAM_ROW;i++){
                                for(l=0;l<ADAM_COL;l++){
                                    printf("%c",askilik[i][l]);}
                                if(i==ADAM_ROW-1){
                                    printf("    ");
                                    for(l=0;l<harfsayisi;l++){
                                        printf("%c ",sahne[l]);}
                                }
                                puts("");
                                    
                            }
                            puts("");
                        }
                        else{
                            for(i=0;i<ADAM_ROW;i++){
                                if(i<=hatasayisi+1){
                                
                                    for(l=0;l<ADAM_COL;l++){
                                        printf("%c",adam[i][l]);
                                    }
                                    puts("");
                                }
                                else{
                                for(l=0;l<ADAM_COL;l++){
                                    printf("%c",askilik[i][l]);
                                }
                                if(i!=ADAM_ROW-1)
                                    puts("");
                                }
                            
                            }
                            printf("    ");
                            for(i=0;i<sahne[i]!='\0';i++){
                            printf("%c ",sahne[i]);
                            }
                        }
                    }

                    
                    for(i=0;sahne[i]!='\0';i++){
                        if(sahne[i]!='_'){
                            if(sahne[i]==' '){
                                continue;
                            }
                            oyle++;
                        }
                    }
                    if(oyle==harfsayisi){
                        printf("\nTebrikler kazandiniz!\n");
                        break;
                    }

                    if(hatasayisi==maxhata){
                            printf("\nKaybettiniz!\n");
                            printf("dogru cevap: ");
                            for(i=0;aranan[i]!='\0';i++){
                                printf("%c",aranan[i]);
                            }
                            puts("");
                            break;
                    }
                    oyle=0;
                }
            
                break;
            case 'E':
                printf("Kategori: Esya\n");
                puts("");
                r=rand()% K ;

                for (i=0;e[r][i]!='\0';i++){
                    if (e[r][i]== ' '){
                        sahne[i]=' ';
                        aranan[i]=e[r][i];
                        printf(" ");
                        continue;
                    }
                    printf("_ ");
                    sahne[i]='_';
                    aranan[i]=e[r][i];
                    harfsayisi++;
                }
                aranan[i]='\0';
                sahne[i]='\0';
                while(1){
                    printf("\nHarf girin: ");
                    scanf(" %c",&harf);
                    harf=tolower(harf);
                    while(!isalpha(harf)){
                        printf("\nHarf girin: ");
                        scanf(" %c",&harf);
                    }
                    puts("");
                    for(i=0;aranan[i]!='\0';i++){
                        if(harf==aranan[i]){
                            sahne[i]=harf;
                            var=1;
                        }    
                    }
                    if(var==0){
                        hatasayisi++;
                    }
                    var=0;
                    if (hatasayisi==0){
                        for(i=0;sahne[i]!='\0';i++){
                        printf("%c ",sahne[i]);
                        }
                        puts("");
                    }
                    if(hatasayisi>0){
                        if(hatasayisi==1){
                            for(i=0;i<ADAM_ROW;i++){
                                for(l=0;l<ADAM_COL;l++){
                                    printf("%c",askilik[i][l]);}
                                if(i==ADAM_ROW-1){
                                    printf("    ");
                                    for(l=0;l<harfsayisi;l++){
                                        printf("%c ",sahne[l]);}
                                }
                                puts("");
                                    
                            }
                            puts("");
                        }
                        else{
                            for(i=0;i<ADAM_ROW;i++){
                                if(i<=hatasayisi+1){
                                
                                    for(l=0;l<ADAM_COL;l++){
                                        printf("%c",adam[i][l]);
                                    }
                                    puts("");
                                }
                                else{
                                for(l=0;l<ADAM_COL;l++){
                                    printf("%c",askilik[i][l]);
                                }
                                if(i!=ADAM_ROW-1)
                                    puts("");
                                }
                            
                            }
                            printf("    ");
                            for(i=0;i<sahne[i]!='\0';i++){
                            printf("%c ",sahne[i]);
                            }
                        }
                    }

                    
                    for(i=0;sahne[i]!='\0';i++){
                        if(sahne[i]!='_'){
                            if(sahne[i]==' '){
                                continue;
                            }
                            oyle++;
                        }
                    }
                    if(oyle==harfsayisi){
                        printf("\nTebrikler kazandiniz!\n");
                        break;
                    }

                    if(hatasayisi==maxhata){
                            printf("\nKaybettiniz!\n");
                            printf("dogru cevap: ");
                            for(i=0;aranan[i]!='\0';i++){
                                printf("%c",aranan[i]);
                            }
                            puts("");
                            break;
                    }
                    oyle=0;
                }
                break;
            case 'R':
                printf("Kategori: renk\n");
                puts("");
                r=rand()% K ;

                for (i=0;R[r][i]!='\0';i++){
                    if (R[r][i]== ' '){
                        sahne[i]=' ';
                        aranan[i]=R[r][i];
                        printf(" ");
                        continue;
                    }
                    printf("_ ");
                    sahne[i]='_';
                    aranan[i]=R[r][i];
                    harfsayisi++;
                }
                aranan[i]='\0';
                sahne[i]='\0';
                while(1){
                    printf("\nHarf girin: ");
                    scanf(" %c",&harf);
                    harf=tolower(harf);
                    while(!isalpha(harf)){
                        printf("\nHarf girin: ");
                        scanf(" %c",&harf);
                    }
                    puts("");
                    for(i=0;aranan[i]!='\0';i++){
                        if(harf==aranan[i]){
                            sahne[i]=harf;
                            var=1;
                        }    
                    }
                    if(var==0){
                        hatasayisi++;
                    }
                    var=0;
                    if (hatasayisi==0){
                        for(i=0;sahne[i]!='\0';i++){
                        printf("%c ",sahne[i]);
                        }
                        puts("");
                    }
                    if(hatasayisi>0){
                        if(hatasayisi==1){
                            for(i=0;i<ADAM_ROW;i++){
                                for(l=0;l<ADAM_COL;l++){
                                    printf("%c",askilik[i][l]);}
                                if(i==ADAM_ROW-1){
                                    printf("    ");
                                    for(l=0;l<harfsayisi;l++){
                                        printf("%c ",sahne[l]);}
                                }
                                puts("");
                                    
                            }
                            puts("");
                        }
                        else{
                            for(i=0;i<ADAM_ROW;i++){
                                if(i<=hatasayisi+1){
                                
                                    for(l=0;l<ADAM_COL;l++){
                                        printf("%c",adam[i][l]);
                                    }
                                    puts("");
                                }
                                else{
                                for(l=0;l<ADAM_COL;l++){
                                    printf("%c",askilik[i][l]);
                                }
                                if(i!=ADAM_ROW-1)
                                    puts("");
                                }
                            
                            }
                            printf("    ");
                            for(i=0;i<sahne[i]!='\0';i++){
                            printf("%c ",sahne[i]);
                            }
                        }
                    }

                    
                    for(i=0;sahne[i]!='\0';i++){
                        if(sahne[i]!='_'){
                            if(sahne[i]==' '){
                                continue;
                            }
                            oyle++;
                        }
                    }
                    if(oyle==harfsayisi){
                        printf("\nTebrikler kazandiniz!\n");
                        break;
                    }

                    if(hatasayisi==maxhata){
                            printf("\nKaybettiniz!\n");
                            printf("dogru cevap: ");
                            for(i=0;aranan[i]!='\0';i++){
                                printf("%c",aranan[i]);
                            }
                            puts("");
                            break;
                    }
                    oyle=0;
                }
                break;

        }






        hatasayisi=0;
        harfsayisi=0;
        printf("Adam asmaca oyununu oyna->1, cikis->0\n");
        scanf(" %d",&a);

    }


    return 0;
}









