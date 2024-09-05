 #include <stdio.h>
 #include <math.h>

int main(){
    int a;
    printf("Enter 1 to calculate distance between two points or 2 to write a number backwards: ");
    scanf("%d", &a);
    case1: if(a == 1){
        //calculate distance between two points
        double x1, y1, x2, y2;
        printf("Enter the coordinates of the first point: ");
        scanf("%lf %lf", &x1, &y1);
        printf("Enter the coordinates of the second point: ");
        scanf("%lf %lf",&x2, &y2);
        // int distance = ((x2 - x1)**2 + (y2 - y1)**2)**1/2;   in C program must use math.h library to use pow function to calculate power. Can not use ** to calculate power. 
        // pow function 2 double type arguments and return double type value. first argument is base and second argument is power.
        // and also can use sqrt function to calculate square root.
        double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));  
        printf("distance: %.2lf", distance);

    }
    case2: if (a==2){
        //write a number backwards
        printf("Enter a number: ");
        int n;
        scanf("%d", &n);
        int b=0;
        while(n!=0){
            b = b*10 + n%10;
            n = n/10;
        }
        printf("The number backwards is: %d", b);

    }
return 0;
}