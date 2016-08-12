//
//  main.c
//  MadLibsEnums
//
//  Created by Princess Sampson on 8/12/16.
//  Copyright © 2016 Princess Sampson. All rights reserved.
//

#include <stdio.h>
#include "IntakeOutput.h"

int main(int argc, const char * argv[]) {
    
    char name[30] = {[0 ... 29] = '\0'};
    
    getWordFromUser(name, "What's your name? 30 characters or less.\n\n", 30);
    printf("Hello, %s. We're going to play Madlibs.", name);
    
    return 0;
}
