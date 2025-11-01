//Moosa Shehzad Abbasi
//U37033529
//this program identifies the unassigned TA by comparing the given list of assigned TAs against the total number of TAs.
#include <stdio.h>

void find_unassigned_ta() {
    int num_tas, i, ta;
    
    //get the total number of TAs
    printf("Enter number of TAs: ");
    scanf("%d", &num_tas);

    int assigned_tas[num_tas]; //array to store assigned TAs
    int assigned_count = num_tas - 1; //since one TA is unassigned

    //get the assigned TAs
    printf("Enter TAs already assigned: ");
    for (i = 0; i < assigned_count; i++) {          
        scanf("%d", &assigned_tas[i]);
    }

    //check for the missing TA
    int found[num_tas + 1]; //extra space to handle indexing from 1
    for (i = 0; i <= num_tas; i++) {
        found[i] = 0; //initialize all to 0
    }

    for (i = 0; i < assigned_count; i++) {
        found[assigned_tas[i]] = 1; //mark assigned TAs
    }

    for (ta = 1; ta <= num_tas; ta++) {      //loop through the range of TAs from 1 to num_tas
        if (found[ta] == 0) {
            printf("TA has not been assigned: %d\n", ta);
            return;                 //exit the function after finding the first missing TA
        }
    }
}

int main() {
    find_unassigned_ta();
    return 0;
}
