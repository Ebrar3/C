#include<stdio.h>

int main(){
    int a=5;
    int *aptr=&a;

    primtf("d ile a: %d\n",a);
    primtf("d ile &a: %d\n",&a);
    primtf("c ile a: %d\n",a);
    primtf("c ile &a: %d\n",&a);
    primtf("p ile a: %p\n",a);
    primtf("p ile &a: %p\n",&a);   

    primtf("d ile aptr: %d\n",aptr);
    primtf("d ile *aptr: %d\n",*aptr);
    primtf("p ile *aptr: %p\n",*aptr);
    primtf("p ile aptr: %d\n",aptr);

}