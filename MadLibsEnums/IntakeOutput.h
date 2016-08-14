//
//  IntakeOutput.h
//  MadLibsEnums
//
//  Created by Princess Sampson on 8/12/16.
//  Copyright © 2016 Princess Sampson. All rights reserved.
//

#ifndef IntakeOutput_h
#define IntakeOutput_h

#include <stdio.h>

void getWordFromUser(char *destination, char prompt[], int wordMaxLength);
void getNumberFromUser(int *destination, char prompt[], int minNumberValue, int maxNumberValue);
void promptUserWithOutVariables(char message[]);

#endif /* IntakeOutput_h */
