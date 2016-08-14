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

void printStory(char *name, char *adj, char *noun, char *verb);

int main(int argc, const char * argv[]) {
    
    char name[30] = {[0 ... 29] = '\0'};
    
    getWordFromUser(name, "What's your name? 30 characters or less.\n\n", 30);
    printf("Hello, %s. We're going to play Madlibs.\n\n", name);
    
    char* colorToString = "loremipsum";
    Adjective adj = -1;
    Noun noun = -1;
    Verb verb = -1;
    
    int adjInt = -1;
    int nounInt = -1;
    int verbInt = -1;
    
    colorToString = AdjToString(Green);
    printf("%d: %s\n\n", Green, colorToString);
    colorToString = AdjToString(Red);
    printf("%d: %s\n\n", Red, colorToString);
    colorToString = AdjToString(Orange);
    printf("%d: %s\n\n", Orange, colorToString);
   
    getNumberFromUser(&adjInt, "Choose an adjective from the list above by entering its number:\n\n", 0, 2);
    adj = adjInt;
    
    colorToString = NounToString(Empanadas);
    printf("%d: %s\n\n", Empanadas, colorToString);
    colorToString = NounToString(Pizza);
    printf("%d: %s\n\n", Pizza, colorToString);
    colorToString = NounToString(Salad);
    printf("%d: %s\n\n", Salad, colorToString);
    
    getNumberFromUser(&nounInt, "Choose a noun from the list aboven by entering its number:\n\n", 0, 2);
    noun = nounInt;
    
    colorToString = VerbToString(Exercise);
    printf("%d: %s\n\n", Exercise, colorToString);
    colorToString = VerbToString(Game);
    printf("%d: %s\n\n", Game, colorToString);
    colorToString = VerbToString(Sing);
    printf("%d: %s\n\n", Sing, colorToString);
    
    getNumberFromUser(&verbInt, "Choose a verb from the list above by entering its number:\n\n", 0, 2);
    verb = verbInt;
    
    printStory(name, AdjToString(adj), NounToString(noun), VerbToString(verb));
    
    return 0;
}

void printStory(char *name, char *adj, char *noun, char *verb) {
    printf("%s, you're an Iron Yard student. There is a %s sticker on your laptop. You have %s for lunch. When you're done with your homework, you %s.\n\n", name, adj, noun, verb);
}
