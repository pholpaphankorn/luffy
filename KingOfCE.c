#include <stdio.h>
int treasurePassword(int);
int decimalNumberConverted(int);
int main(){
int binaryNumberInput=0;
scanf("%d",&binaryNumberInput);
printf("%d",treasurePassword(decimalNumberConverted(binaryNumberInput)));
return 0; 
}
int decimalNumberConverted(int binaryNumberInput){
    int decimalNumberConverted=0;
    int binaryBase=1;
    for(int i=0;i<10;i++){
        decimalNumberConverted=decimalNumberConverted+(binaryNumberInput%10)*binaryBase;
        binaryBase=binaryBase*2;
        binaryNumberInput=binaryNumberInput/10;
    }
    return decimalNumberConverted;
}
int treasurePassword(int decimalNumberPassword){
for(int i=0;i<9;i++){
printf("%d\n",decimalNumberPassword);
int testPassword=(((decimalNumberPassword<<1)-(1023*(decimalNumberPassword/512)))+1);
    decimalNumberPassword=testPassword-((testPassword/1024)*(1023)); 
}
    return decimalNumberPassword;
}
