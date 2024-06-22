#include <stdio.h>
#include <string.h>

struct InventoryItem {
    char code[50];
    double quantity, demand, cost_req, cost_pr, cost_def, rate;
};
int requared(double demand, double rate){
    double requred = demand*rate;
    return requred;
}
int deficiancy(double quantity, double demand, double rate){
    double def =  (demand*rate)-(quantity*rate);
    return def;
}

int main() {
 
    struct InventoryItem inventory[5];

    strcpy(inventory[0].code, "F105");
    inventory[0].quantity = 275;
    inventory[0].rate = 575;
    inventory[0].demand = 200;
    inventory[0].cost_req = requared(inventory[0].demand, inventory[0].rate);
    inventory[0].cost_def = deficiancy(inventory[0].quantity, inventory[0].demand, inventory[0].rate);

    strcpy(inventory[1].code, "H220");
    inventory[1].quantity = 107;
    inventory[1].rate = 99.75;
    inventory[1].demand = 160;
    inventory[1].cost_req = requared(inventory[1].demand, inventory[1].rate);
    inventory[1].cost_def = deficiancy(inventory[1].quantity, inventory[1].demand, inventory[1].rate);

    strcpy(inventory[2].code, "I019");
    inventory[2].quantity = 321;
    inventory[2].rate = 215.5;
    inventory[2].demand = 300;
    inventory[2].cost_req = requared(inventory[2].demand, inventory[2].rate);
    inventory[2].cost_def = deficiancy(inventory[2].quantity, inventory[2].demand, inventory[2].rate);

    strcpy(inventory[3].code, "M315");
    inventory[3].quantity = 89;
    inventory[3].rate = 725;
    inventory[3].demand = 100;
    inventory[3].cost_req = requared(inventory[3].demand, inventory[3].rate);
    inventory[3].cost_def = deficiancy(inventory[3].quantity, inventory[3].demand, inventory[3].rate);


    printf("%-20s %-20s %-10s\n", "code", "Item Cost Required", "Cost Defeciancy");

    for (int i = 0; i < 4; i++) {
        printf("%-20s %-20.2lf %-10.2lf\n", inventory[i].code, inventory[i].cost_req, inventory[i].cost_def);
    }

    return 0;
}
