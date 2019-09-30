#ifndef LIGHTONCOMMAND_H
#define LIGHTONCOMMAND_H

#include "light.h"
#include "command.h"

class LightOnCommand : public Command
{
private:
    Light *light;
public:
    LightOnCommand(Light *light);
    void execute();
    void undo();
};

#endif // LIGHTONCOMMAND_H
