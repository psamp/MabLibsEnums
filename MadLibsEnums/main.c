//
//  main.c
//  MadLibsEnums
//
//  Created by Princess Sampson on 8/12/16.
//  Copyright © 2016 Princess Sampson. All rights reserved.
//

#include <stdio.h>
#include "Word.h"
#include "IntakeOutput.h"

int main(int argc, const char * argv[]) {
    
    char name[30] = {[0 ... 29] = '\0'};
    
    getWordFromUser(name, "What's your name? 30 characters or less.\n\n", 30);
    printf("Hello, %s. We're going to play Madlibs.", name);
    
    char colorToString[10] = {[ 0 ... 9] = '\0'};
    
    printf("Choose an adjective.");
    
    wordToString(WordAdjGreen, colorToString);
    printf("%d:, %s\n\n", WordAdjGreen, colorToString);
    
    wordToString(WordAdjRed, colorToString);
    printf("%d:, %s\n\n", WordAdjRed, colorToString);
    
    wordToString(WordAdjOrange, colorToString);
    printf("%d:, %s\n\n", WordAdjOrange, colorToString);
    
    wordToString(WordNounEmpanadas, colorToString);
    printf("%d:, %s\n\n", WordNounEmpanadas, colorToString);
    
    wordToString(WordNounPizza, colorToString);
    printf("%d:, %s\n\n", WordNounPizza, colorToString);
    
    wordToString(WordNounSalad, colorToString);
    printf("%d:, %s\n\n", WordNounSalad, colorToString);
    
    wordToString(WordVerbExercise, colorToString);
    printf("%d:, %s\n\n", WordVerbExercise, colorToString);
    
    wordToString(WordVerbGame, colorToString);
    printf("%d:, %s\n\n", WordVerbGame, colorToString);
    
    wordToString(WordVerbSing, colorToString);
    printf("%d:, %s\n\n", WordVerbSing, colorToString);
    
    printf("%s\n\n", colorToString);
    
    return 0;
}
