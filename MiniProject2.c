/******************************************************************************

Nickolas Jackson, Billy Barrett, Maegan Edwards
11/18/20
ELET 1102-001
Mini Project 2

This code calculates the total that a person spends on parts based on user input for 
how many of that item they want and applies a discount based how many they request

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int iResistor;
    int iCapacitor;
    int iTransistor;
    int iIntegratedCircuit;
    float resistorCost;
    float capacitorCost;
    float transistorCost;
    float integratedCircuitCost;
    float grandTotal;
    
    printf("|Item Number|       Item        | Discount (0-299) | Discount (300-499) | Discount (>500) |\n");
    printf("|     0     |     Resistor      |        5%%        |       7.5%%         |       10%%       |\n");
    printf("|     1     |     Capasitor     |        5%%        |       7.5%%         |       10%%       |\n");
    printf("|     2     |     Transistor    |      2.5%%        |         5%%         |       10%%       |\n");
    printf("|     3     |Integrated Circuit |      2.5%%        |         5%%         |       10%%       |\n\n");
    
    printf("The price for each Resistor is $0.50\n");
    printf("The price for each Capacitor is $0.75\n");
    printf("The price for each Transistor is $0.75\n");
    printf("The price for each integrated Circuit is $1.25\n\n");
    
    
    printf("Enter the amount of resistors you would like to purchase: \n");
    scanf("%d", &iResistor);
    
    printf("Enter the amount of capacitors you would like to purchase: \n");
    scanf("%d", &iCapacitor);
    
    printf("Enter the amount of transistors you would like to purchase: \n");
    scanf("%d", &iTransistor);
    
    printf("Enter the amount of integrated circuits you would like to purchase: \n");
    scanf("%d", &iIntegratedCircuit);
    
   
   //Resistor cost
    
    if(iResistor <= 299)
    {
        resistorCost = (iResistor * .5) * .95;
        printf("The total cost of resistors purchased is $%.2f \n", resistorCost);
    }
    
    else if( 299 < iResistor && iResistor < 500 )
    {
        resistorCost = (iResistor * 0.5) * 0.925;
        printf("The total cost of resistors purchased is $%.2f \n", resistorCost);
    }
    
    else
    {
        resistorCost = (iResistor * 0.5) * 0.9;
        printf("The total cost of resistors purchased is $%.2f \n", resistorCost);
    }
    
    
    //Capacitor cost
    
    if(iCapacitor <= 299)
    {
        capacitorCost = (iCapacitor * .75) * .95;
        printf("The total cost of resistors purchased is $%.2f \n", capacitorCost);
    }
    
    else if( 299 < iCapacitor && iCapacitor < 500 )
    {
        capacitorCost = (iCapacitor * 0.75) * 0.925;
        printf("The total cost of resistors purchased is $%.2f \n", capacitorCost);
    }
    
    else
    {
        capacitorCost = (iCapacitor * 0.75) * 0.9;
        printf("The total cost of resistors purchased is $%.2f \n", capacitorCost);
    }
    
    
    
    //Transistor cost
    
    if(iTransistor <= 299)
    {
        transistorCost = (iTransistor * .75) * .975;
        printf("The total cost of resistors purchased is $%.2f \n", transistorCost);
    }
    
    else if( 299 < iTransistor && iTransistor < 500 )
    {
        transistorCost = (iTransistor * 0.75) * 0.95;
        printf("The total cost of resistors purchased is $%.2f \n", transistorCost);
    }
    
    else
    {
        transistorCost = (iTransistor * 0.75) * 0.9;
        printf("The total cost of resistors purchased is $%.2f \n", transistorCost);
    }
    
    
    //integrated circuit cost
    
    if(iIntegratedCircuit <= 299)
    {
        integratedCircuitCost = (iIntegratedCircuit * 1.25) * .975;
        printf("The total cost of resistors purchased is $%.2f \n", integratedCircuitCost);
    }
    
    else if( 299 < iIntegratedCircuit && iIntegratedCircuit < 500 )
    {
        integratedCircuitCost = (iIntegratedCircuit * 1.25) * 0.95;
        printf("The total cost of resistors purchased is $%.2f \n", integratedCircuitCost);
    }
    
    else
    {
        integratedCircuitCost = (iIntegratedCircuit * 1.25) * 0.9;
        printf("The total cost of resistors purchased is $%.2f \n", integratedCircuitCost);
    }
    
    //Final calculation
    
    grandTotal = resistorCost + capacitorCost + transistorCost + integratedCircuitCost;
    printf("\nThe grand total of your purchase is $%.2f\n", grandTotal);
    
    printf("\nThank you, have a nice day!\n\n");


    return 0;
}
 
