//
// Created by TER81646 on 13/05/2019.
//

#ifndef CLEVERCODER_COMMAND_H
#define CLEVERCODER_COMMAND_H

#include <string>

using namespace std;

class Command {
public:
    Command();

    virtual ~Command();

    virtual void execute(const string& cmd) = 0;
};


#endif //CLEVERCODER_COMMAND_H
