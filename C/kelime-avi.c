#include <stdio.h>
#define SIZE 100
//Programe that counts words with -ed at the end. 

int main(){
    printf("metin giriniz:\n");
    int count=0,i=0;
    char buffer[SIZE];
    char* bufptr=buffer;
    fgets(bufptr,SIZE,stdin);
    
    for(;i<SIZE;i++){
        
        if (buffer[i]==' '){
            if(buffer[i-1]=='d'){
                if(buffer[i-2]=='e'){
                    count++;
                }
            }
        }
        else if(buffer[i]=='.'){
            if(buffer[i-1]=='d'){
                if(buffer[i-2]=='e'){
                    count++;
                }
            }    
        }
        else if(buffer[i]=='\n'){
            if(buffer[i-1]=='d'){
                if(buffer[i-2]=='e'){
                    count++;
                }
            }
        }
        
    }





    printf("Sonunda -ed olan kelime sayisi: %d",count);
    
    
    return 0;
}