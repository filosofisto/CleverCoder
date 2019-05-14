//
// Created by TER81646 on 13/05/2019.
//

#include "EchoCommand.h"

EchoCommand::EchoCommand(): Command()
{

}

EchoCommand::~EchoCommand() = default;

void EchoCommand::execute(const string &cmd)
{
    cout << cmd << endl;
}
