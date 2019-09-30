#ifndef COMMAND_H
#define COMMAND_H

#include <QObject>

class Command : public QObject
{
public:
    Command();
    ~Command();
    virtual void execute() = 0;
    void indo();
    
};

#endif // COMMAND_H
