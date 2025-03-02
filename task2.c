#include <stdio.h>
#include <math.h>
#define n 5

int main(){
    int mas [n],k=0,s=0,i,minValue=0, maxValue=0,production = 1;
    puts("Enter array numbers\n");

    for(i=0;i<n;i++){
        scanf ("%i", &mas[i]); 
            if(mas[i]<0){
                s+=mas[i];
            }
           

            
    }
    minValue = maxValue = mas[0];
    for(i=0;i<n;i++){
        if (mas[i] < minValue) minValue = mas[i]; 
        if (mas[i] > maxValue) maxValue = mas[i];
    }
    for(i=0;i<n;i++){
        if(mas[i] >minValue && mas[i]<maxValue){
          production *=mas[i];
        }
    }
    printf("Non Postive sum equals: %d\n",s);
    printf("Production between max and min equals %d\n",production);
    return 0;


}