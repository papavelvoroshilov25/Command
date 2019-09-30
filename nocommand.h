#ifndef NOCOMMAND_H
#define NOCOMMAND_H

#include "command.h"

class NoCommand : public Command
{
public:
    NoCommand();
    void execute();
    void undo();
};

#endif // NOCOMMAND_H
