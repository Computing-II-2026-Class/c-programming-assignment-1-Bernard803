/*name:BYAMUKAMA BERNARD AMOOTI*/
/*Student number:25/U /BIE/01365/PE*/
#include <stdio.h>
int main(){
float  amount , fee_percent ,fee , total;
printf("enter amount to send:");
scanf("%f",&amount);
printf("enter transaction fee(%%):");
scanf("%f",&fee_percent );
fee=(fee_percent /100)*amount;
total= amount+fee;
printf("\nTransaction fee:%.2f UGX\n",fee);
printf("total deducted: %.2f\n");
return 0;
 }

