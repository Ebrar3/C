// if you want to make a new data type, like int,char,float; you can use structur


#include <stdio.h>
#include <strings.h>


int main(){

    struct ogrenci{
        char name[50];
        int number;
        char gender;
        int age;

    }std1,std3; //we define a new data type(ogrenci) call std1,std3

    struct std2; //we define std2 as ogrenci.
    struct ogrenci onc[3]; // create an array of size 3 call onc,into data type ogrenci.
    int i;
    struct ogrenci *ptr=&std1;
    
    

    for(i=0;i<3;i++){
        scanf("%s",onc[i].name);
        scanf("%d",&onc[i].number);
        scanf("%s",&onc[i].gender);
        scanf("%d",&onc[i].age);
        
        printf("\n%d. %s %d %c %d\n",i+1, onc[i].name, onc[i].number, onc[i].gender, onc[i].age);
    }

    // std1.name="ebos"; you can not assigment a string like that!!!!!! You can only get this expression with the strcpy function, and the function automatically adds \0 to the end.
    strcpy(std1.name,"ebo");
    std1.number=232323;
    std1.gender='k';
    std1.age=19;

    printf("***%s",ptr->name);
    printf("***%d",ptr->number);
    printf("***%c",ptr->gender);
    printf("***%d\n",ptr ->age);
    


    return 0;
}