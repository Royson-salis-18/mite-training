#include<stdio.h>
void displayAges(short int* ages, int length,int index)
{
   if(length<=index){
       return;
   }else printf("%d\t",ages[index]);
   displayAges(ages,length,index+1);
}
void travelBackwardAges(short int* ages, int length, int index)
{
    if(index>=length){
        return;
    }
    travelBackwardAges(ages,5,index+1);
    printf("%d\t",ages[index]);
}
int main()
{
    short int ages[]={45,42,14,20,70};
    displayAges(ages,5,0);
    printf("\n");
    travelBackwardAges(ages,5,0);
    return 0;
}
