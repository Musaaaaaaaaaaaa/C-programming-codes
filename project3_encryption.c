//Moosa Shehzad Abbasi
//U37033529
//this program encrypts a number by replacing each digit with its index in a given encryption array.

#include <stdio.h>

//function to encrypt the number using the encryption array
void encrypt(int digits[], int encrypted[], int n, int encryption_array[]) {
    for (int i = 0; i < n; i++) {
        //find the index of each digit in the encryption array
        for (int j = 0; j < 10; j++) {
            if (digits[i] == encryption_array[j]) {
                encrypted[i] = j;
                break;
            }
        }
    }
}

int main() {
    int n;

    //get the number of digits
    printf("Enter the number of digits:");
    scanf("%d", &n);

    int digits[n], encrypted[n], encryption_array[10];

    //get the number as individual digits
    printf("Enter the number:");
    for (int i = 0; i < n; i++) {
        scanf("%1d", &digits[i]);  //read one digit at a time
    }

    //get the encryption array
    printf("Enter the encryption array:");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &encryption_array[i]);
    }

    //encrypt the number
    encrypt(digits, encrypted, n, encryption_array);

    //print the encrypted number
    for (int i = 0; i < n; i++) {
        printf("%d", encrypted[i]);
    }
    printf("\n");    //prints a newline at the end

    return 0;
}
