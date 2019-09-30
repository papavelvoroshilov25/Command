#include "lightoffcommand.h"

LightOffCommand::LightOffCommand(Light *light)
{
    this->light = light;
}

void LightOffCommand::execute() {
    light->off();
}

void LightOffCommand::undo() {
    light->on();
}
