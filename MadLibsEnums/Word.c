//
//  Word.c
//  MadLibsEnums
//
//  Created by Princess Sampson on 8/12/16.
//  Copyright © 2016 Princess Sampson. All rights reserved.
//

#include "Word.h"


char* AdjToString(Adjective adj) {
    switch (adj) {
        case Green: {
            return "green";
            break;
        }
        case Red: {
            return "red";
            break;
        }
        case Orange: {
            return "orange";
            break;
        }
    }
}

char* NounToString(Noun noun) {
    switch (noun) {
        case Empanadas: {
            return "empanadas";
            break;
        }
        case Pizza: {
            return "pizza";
            break;
        }
        case Salad: {
            return "salad";
            break;
        }
        default:
            return NULL;
            break;
    }
    
}

char* VerbToString(Verb verb) {
    switch (verb) {
        case Sing: {
            return "sing";
            break;
        }
        case Game: {
            return "game";
            break;
        }
        case Exercise: {
            return "exercise";
            break;
        }
        default:
            return NULL;
            break;
    }
    
}
