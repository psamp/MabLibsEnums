//
//  Word.c
//  MadLibsEnums
//
//  Created by Princess Sampson on 8/12/16.
//  Copyright © 2016 Princess Sampson. All rights reserved.
//

#include "Word.h"

void wordToString(Word word, char *destination) {
    
    switch (word) {
        case WordAdjRed: {
            destination = "red";
            break;
        }
        case WordAdjGreen: {
            destination = "green";
            break;
        }
        case WordAdjOrange: {
            destination = "orange";
            break;
        }
        case WordNounEmpanadas: {
            destination = "empanadas";
            break;
        }
        case WordNounPizza: {
            destination = "pizza";
            break;
        }
        case WordNounSalad: {
            destination = "salad";
            break;
        }
        case WordVerbSing: {
            destination = "sing";
            break;
        }
        case WordVerbGame: {
            destination = "game";
            break;
        }
        case WordVerbExercise: {
            destination = "exercise";
            break;
        }
        default:
            destination = NULL;
            break;
    }
}
