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
    WordAdjGreen,
    WordAdjRed,
    WordAdjOrange,
    WordNounEmpanadas,
    WordNounPizza,
    WordNounSalad,
    WordVerbExercise,
    WordVerbGame,
    WordVerbSing

}Word;

void wordToString(Word word, char *destination);

#endif /* Word_h */
