//
//  Word.h
//  MadLibsEnums
//
//  Created by Princess Sampson on 8/12/16.
//  Copyright © 2016 Princess Sampson. All rights reserved.
//

#ifndef Word_h
#define Word_h

#include <stdio.h>

typedef enum {
    Green,
    Red,
    Orange
    
}Adjective;

typedef enum {
    Empanadas,
    Pizza,
    Salad
    
}Noun;

typedef enum {
    Exercise,
    Game,
    Sing
    
}Verb;

char* AdjToString(Adjective adj);
char* NounToString(Noun noun);
char* VerbToString(Verb verb);

#endif /* Word_h */
