#include <studio.h>

int main(){

    int custormer_id, units_consumed;
    char custormer_name[50];
    float amt,sur_charge, total_amt;

    printf("Enter custormer id: ");
    scanf("%d", &custormer_id);

     printf("Enter custormer name: ");
    scanf("%s", &custormer_name);

     printf("Enter units consumed: ");
    scanf("%d", &units_consumed);

    if (units_consumed <= 300 ){
        amt=units _consumed * 0.50;
    }else if (units_consumed <= 500){
        amt=200 + ((units_consumed-300) * 0.75);
    }else if(units_consumed <= 800) {
        amt= 400+((units_consumed-500) * 1.20);
    }else{
        amt= 600 + ((units_consumed-800) * 1.50);
    }
    if (amt > 500){
        sur_charge = amt * 0.20;
        total_amt = amt + sur_charge;
    }else {
        sur_charge = 0;
        total_amt = amt;
    }
    
    printf("\nCustormer Id: %d", custormer_id);
    printf("\nCustormer Name: %s", custormer_name);
   printf("\nUnits Consumed: %d", units_consumed);
    printf("\nCharge per Units: %.2f", amt);
   printf("\nTotal Amount Payable: %.2f", total_amt);

   return 0;
}