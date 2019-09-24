#include "light.h"

Light::Light(QString place)
{
    this->place = place;
}

void Light::on() {
    cout << "Vklyuchenie sveta" << endl;
}

void Light::off() {
    cout << "Vyklyuchenie sveta" << endl;
}
