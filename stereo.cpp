#include "stereo.h"

Stereo::Stereo(QString place)
{
    this->place = place;
}

void Stereo::on() {
    cout << "Vklyuchit stereo" << endl;
}

void Stereo::off() {
    cout << "Vyklyuchit stereo" << endl;
}

void Stereo::setCd() {
    cout << "Vstavit CD" << endl;
}

void Stereo::setDvd() {
    cout << "Vstavit DVD" << endl;
}

void Stereo::setRadio() {
    cout << "Pereklyuchit radio" << endl;
}

void Stereo::setVolume(int v) {
    cout << "Izmenit gromost'" << endl;
}
