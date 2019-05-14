#include <iostream>
#include "CommandProcessor.h"

using namespace std;

int main(int argc, char** argv) {
    try {
        cout << "CleverCoder" << endl;

        CommandProcessor commandProcessor;
        commandProcessor.whileNotFinishProcessCommands();
    } catch (...) {
        cerr << "Erro" << endl;
    }

    return EXIT_SUCCESS;
}