//moosa Shehzad Abbasi
//U37033529
//this code calculates the total rent due for a dumpster rental
#include <stdio.h>

int main()
{
    int selection, days, charge, total;

    printf("Please select from four types of dumpsters: 1, 2, 3, and 4\nEnter dumpster selection: ");
    scanf("%d", &selection);

    if (selection < 1 || selection > 4) {
        printf("Invalid selection. Select from 1 to 4.\n");
    } else {
        printf("Enter days: ");  //enter days for which dumpster is rented
        scanf("%d", &days);

        if (days < 0) {
            printf("Invalid days.\n");
        } else {
            //for 10-yard dumpster
            if (selection == 1) {
                if (days == 1) {
                    printf("Charge($): 120\n");
                } else if (days > 1 && days < 7) {
                    printf("Charge($): %d\n", 120 + 80 * (days - 1));
                } else if (days == 7) {
                    printf("Charge($): 380\n");
                } else if (days > 7) {
                    int weeks = days / 7;               //calculate full weeks
                    int remaining_days = days % 7;      //remaining days
                    int remaining_cost = remaining_days * 80;

                    if (remaining_cost > 380) {         //cap remaining days' cost
                        remaining_cost = 380;
                    }
                    total = weeks * 380 + remaining_cost;
                    printf("Charge($): %d\n", total);
                }
            }
            //for 20-yard dumpster
            if (selection == 2) {
                if (days == 1) {
                    printf("Charge($): 150\n");
                } else if (days > 1 && days <= 7) {
                int charge = 150 + 100 * (days - 1);
                    if (charge > 420) {  //cap the charge to the weekly max
                    charge = 420;
        }
            printf("Charge($):%d\n", charge);
                } else if (days == 7) {
                    printf("Charge($): 420\n");
                } else if (days > 7) {
                    int weeks = days / 7;               //calculate full weeks
                    int remaining_days = days % 7;      //remaining days
                    int remaining_cost = remaining_days * 100;

                    if (remaining_cost > 420) {         //cap remaining days' cost
                        remaining_cost = 420;
                    }
                    total = weeks * 420 + remaining_cost;
                    printf("Charge($): %d\n", total);
                }
            }
            //for 30-yard dumpster
            if (selection == 3) {
                if (days == 1) {
                    printf("Charge($): 180\n");
                } else if (days > 1 && days < 7) {
                    printf("Charge($): %d\n", 180 + 120 * (days - 1));
                } else if (days == 7) {
                    printf("Charge($): 520\n");
                } else if (days > 7) {
                    int weeks = days / 7;               //calculate full weeks
                    int remaining_days = days % 7;      //remaining days
                    int remaining_cost = remaining_days * 120;

                    if (remaining_cost > 520) {         //cap remaining days' cost
                        remaining_cost = 520;
                    }
                    total = weeks * 520 + remaining_cost;
                    printf("Charge($): %d\n", total);
                }
            }
            //for 40-yard dumpster
            if (selection == 4) {
                if (days == 1) {
                    printf("Charge($): 200\n");
                } else if (days > 1 && days < 7) {
                    printf("Charge($): %d\n", 200 + 140 * (days - 1));
                } else if (days == 7) {
                    printf("Charge($): 600\n");
                } else if (days > 7) {
                    int weeks = days / 7;               //calculate full weeks
                    int remaining_days = days % 7;      //remaining days
                    int remaining_cost = remaining_days * 140;

                    if (remaining_cost > 600) {         //cap remaining days cost
                        remaining_cost = 600;
                    }
                    total = weeks * 600 + remaining_cost;
                    printf("Charge($): %d\n", total);
                }
            }
        }
    }

    return 0;
}
