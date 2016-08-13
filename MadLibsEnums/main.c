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
    
    char* colorToString = "loremipsum";
    
    printf("Choose an adjective.");
    
    colorToString = AdjToString(Green);
    printf("%d: %s\n\n", Green, colorToString);
    colorToString = AdjToString(Red);
    printf("%d: %s\n\n", Red, colorToString);
    colorToString = AdjToString(Orange);
    printf("%d: %s\n\n", Orange, colorToString);
    
    
    colorToString = NounToString(Empanadas);
    printf("%d: %s\n\n", Empanadas, colorToString);
    colorToString = NounToString(Pizza);
    printf("%d: %s\n\n", Pizza, colorToString);
    colorToString = NounToString(Salad);
    printf("%d: %s\n\n", Salad, colorToString);
    
    
    colorToString = VerbToString(Exercise);
    printf("%d: %s\n\n", Exercise, colorToString);
    colorToString = VerbToString(Game);
    printf("%d: %s\n\n", Game, colorToString);
    colorToString = VerbToString(Sing);
    printf("%d: %s\n\n", Sing, colorToString);
    
    return 0;
}
