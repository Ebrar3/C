
#include<stdio.h>
#include<math.h>

int factorial(int n){
    if (n===0){
        return 1;}

    else{
        return n*factorial(n-1);}
}

// the programe of the calcualtion of the area of a triangle, permutation and combination.


int main(){
    int a;
    printf("Operations:\n 1. Calculate the area of a triangle with given vertex coordinates\n");
    printf("2. Calculate the permutation of n objects taken r at a time\n");
    printf("3. Calculate the combination of n objects taken r at a time\n");
    printf("Enter the number of the operation you want to perform: \n");
    scanf("%d",&a);
    if(0<a<4)
        printf("You have selected operation %f\n",a);
    else
        printf("Invalid input\n");
        return 0;
    switch (a){

    case 1:
        printf("the area of a triangle with given vertex coordinates\n”");
        float x1, y1, x2, y2, x3, y3;
        printf("Enter the coordinates of the first vertex (x1, y1):\n");
        scanf("%f %f", &x1, &y1);
        printf("Enter the coordinates of the second vertex (x2,y2):\n");
        scanf("%f %f", &x2, &y2);
        printf("Enter the coordinates of the third vertex (x3, y3):\n");
        scanf("%f %f", &x3, &y3);
        float area = 0.5 * (x1*y+ x2*y3 +x3*y1 -x2*y1-x3*y2-x1*y3); //determinant formula for area of triangle
        printf("The area of the triangle is: %.2f\n", area);
        break;
    
    case 2:
        printf("Calculate the permutation of n objects taken r at a time");
        int n,r;
        scanf("%d %d",&n,&r);
        int pmt= factorial(n)/factorial(n-r);
        printf("The permutation of %d objects taken %d at a time is: %d\n",n,r,pmt);
        break;

    case 3:
        printf("Calculate the combination of n objects taken r at a time");
        int n,r;
        scanf("%d %d",&n,&r);
        int cmb= factorial(n)/(factorial(n-r)*factorial(r));
        printf("The combination of %d objects taken %d at a time is: %d\n",n,r,cmb);
        break;
    }

    return 0;
}