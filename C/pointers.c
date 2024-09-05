
// training pointers (with struct and array) in C
#include <stdio.h>
#include <time.h>

int yil_yas(void){
    int yil;
    printf("enter your birth year:");
    scanf("%d",&yil);

    //get current year
    time_t current_time = time(NULL);                           //time_t is a data type of time.h library
    struct tm *local_time = localtime(&current_time);           //struct tm is a data type of time.h library
    int current_year = local_time->tm_year + 1900;              //tm_year is a member of struct tm, it holds the year since 1900
    int age = current_year - yil;                               //calculate age from birth year and current year 
    return age;
}

struct person{
    char name[55];
    int age;
    char gender; //m or f
}person1; //define a struct person type variable named person1.

//in function, using pointer to struct
void print_person(struct person *p){
    printf("Name: %s\n",p->name);
    printf("Age: %d\n",p->age);
    printf("Gender: %s\n\n",(p->gender=='f')? "Female":"Male");
    }


int main(){
    int age=yil_yas();
    person1.age=age;
    char g;
    printf("Enter your name: ");
    scanf("%s",&person1.name);
    printf("Enter your gender m/f: ");
    scanf(" %c",&g);
    person1.gender=g;
    struct person *pperson=&person1;
    struct person person2={"Yalcin",21,'m'}; //define a struct person type variable named person2 and initialize it.
    struct person *per2=&person2;
    puts("\nusing poiner to struct in function:");
    print_person(per2);

    printf("\n Struct person\nYour age is %d (*pperson.age / pperson->age)\n",pperson->age);
    printf("Your gender is %s (person1.gender)\n",( person1.gender=='f')?"Female":"Male");




    //pointer examples
    int *page=&age;
    int numbers[9]={1,2,3,4,5,6,7,8,9};
    int *pnum=numbers;
    //int *pnum2=&numbers;   this is wrong, you should not use "&" operator, because the name of the array is already an address.
    //upper line cause a error.
    int *index= &numbers[0]; //index is a pointer to the first element of the array
    printf("Age is %d (age)\n",age);
    printf("Age is %d (pointer)\n",*page);
    printf("Age is %d (*(&age))\n\n",*(&age));
    printf("Adress of age is %p (age)\n",&age);
    printf("Adress of age is %p (pointer)\n\n",page);

    puts("Note: integer type is 4 byte and pointer type is 8 byte in 64 bit system.");
    printf("Age's size is %d (sizeof(age)) /bit type\n",sizeof(age));
    printf("Age's size is %d (sizeof(&age)) /bit type\n",sizeof(&age));
    printf("Age's size is %d (sizeof(page)) /bit type\n",sizeof(page));
    printf("Age's size is %d (sizeof(*page)) /bit type\n\n",sizeof(*page));

    printf("Adress of numbers array is %p (numbers)\n",numbers);
    printf("Adress of numbers array is %p (pnum)\n",pnum);
    //printf("Adress of numbers array is %p (pnum2)\n",pnum2);
    printf("Adress of numbers array is %p (first index-pointer)\n\n",index);
    printf("First value of numbers array is %d (*numbers)\n",*numbers); //?
    printf("First value of numbers array is %d (*pnum)\n",*pnum);
    //printf("Value of numbers array is %d (*pnum2)\n",*pnum2);
    printf("First value of numbers array is %d (*index)\n",*index);
    printf("Second value of numbers array is %d (*(index)+1)\n",*(index)+1);

    





    return 0;
}