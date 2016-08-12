//
//  IntakeOutput.c
//  MadLibsEnums
//
//  Created by Princess Sampson on 8/12/16.
//  Copyright © 2016 Princess Sampson. All rights reserved.
//

#include "IntakeOutput.h"
#include <string.h>

void getWordFromUser(char *destination, char prompt[], int wordMaxLength) {
    
    int numberOfItemsScanned = 0;
    unsigned long stringLength = 0;
    
    while (numberOfItemsScanned != 1 || (stringLength <= 0 || stringLength > wordMaxLength)) {
        printf("%s", prompt);
        fpurge(stdin);
        
        numberOfItemsScanned = scanf("%s", destination);
        stringLength = strlen(destination);
    }
    
}

void promptUserWithOutVariables(char message[]) {
    
    printf("%s", message);
}
