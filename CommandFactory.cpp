//
// Created by TER81646 on 13/05/2019.
//

#include "CommandFactory.h"

CommandFactory::CommandFactory()
{

}

Command* CommandFactory::create(const string &cmd) {
    return new EchoCommand;
}

CommandFactory::~CommandFactory() = default;
