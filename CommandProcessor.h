//
// Created by TER81646 on 13/05/2019.
//

#ifndef CLEVERCODER_COMMANDPROCESSOR_H
#define CLEVERCODER_COMMANDPROCESSOR_H

#include <iostream>
#include <string>
#include <bits/unique_ptr.h>
#include "CommandFactory.h"

using namespace std;

class CommandProcessor {
public:
    CommandProcessor();
    ~CommandProcessor();

    void read();
    void process();
    bool finish() const;

    bool whileNotFinishProcessCommands();

private:
    string cmd;
    unique_ptr<CommandFactory> commandFactory;
};


#endif //CLEVERCODER_COMMANDPROCESSOR_H
