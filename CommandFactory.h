//
// Created by TER81646 on 13/05/2019.
//

#ifndef CLEVERCODER_COMMANDFACTORY_H
#define CLEVERCODER_COMMANDFACTORY_H

#include "commands/Command.h"
#include "commands/EchoCommand.h"

class CommandFactory {
public:
    CommandFactory();

    virtual ~CommandFactory();

    Command* create(const string& cmd);
};

#endif //CLEVERCODER_COMMANDFACTORY_H
