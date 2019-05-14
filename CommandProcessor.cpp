//
// Created by TER81646 on 13/05/2019.
//

#include "CommandProcessor.h"

CommandProcessor::CommandProcessor(): commandFactory(new CommandFactory)
{

}

CommandProcessor::~CommandProcessor() = default;

void CommandProcessor::read()
{
    cout << "cc> ";
    cin >> cmd;
}

void CommandProcessor::process()
{
    Command* command = commandFactory->create(cmd);
    if (command != nullptr) {
        command->execute(cmd);
    }
}

bool CommandProcessor::finish() const
{
    return cmd == "exit";
}

bool CommandProcessor::whileNotFinishProcessCommands()
{
    while (true) {
        if (finish()) {
            cout << "Finish command detected, bye" << endl;
            return false;
        }

        read();
        process();
    }
}
