//
//  IntakeOutput.c
//  MadLibsEnums
//
//  Created by Princess Sampson on 8/12/16.
//  Copyright © 2016 Princess Sampson. All rights reserved.
//

#include "IntakeOutput.h"
#include <string.h>

void getWordFromUser(char *destination, char prompt[], int maxWordLength) {
    
    int numberOfItemsScanned = 0;
    unsigned long stringLength = 0;
    
    while (numberOfItemsScanned != 1 || (stringLength <= 0 || stringLength > maxWordLength)) {
        printf("%s", prompt);
        fpurge(stdin);
        
        numberOfItemsScanned = scanf("%s", destination);
        stringLength = strlen(destination);
    }
    
}

void promptUserWithOutVariables(char message[]) {
    
    printf("%s", message);
}

void getNumberFromUser(int *destination, char prompt[], int minNumberValue, int maxNumberValue) {
    
    int numberOfItemsScanned = 0;
    int number = -1;
    
    while (numberOfItemsScanned != 1 || (number > maxNumberValue || number < minNumberValue)) {
        printf("%s", prompt);
        fpurge(stdin);
        
        numberOfItemsScanned = scanf("%d", destination);
        number = *destination;
    }
    
}
