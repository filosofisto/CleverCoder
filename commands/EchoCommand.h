//
// Created by TER81646 on 13/05/2019.
//

#ifndef CLEVERCODER_ECHOCOMMAND_H
#define CLEVERCODER_ECHOCOMMAND_H

#include <iostream>
#include <string>

#include "Command.h"

using namespace std;

class EchoCommand: public Command {
public:
    EchoCommand();

    ~EchoCommand() override;

    void execute(const string& cmd) override;
};


#endif //CLEVERCODER_ECHOCOMMAND_H
