#include <QCoreApplication>
#include "remotecontrol.h"
#include "light.h"
#include "stereo.h"
#include "lightoncommand.h"
#include "lightoffcommand.h"
#include "stereonwithcdcommand.h"
#include "stereooffcommand.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    RemoteControl *remoteControl = new RemoteControl();

    Light *livingRoomLight = new Light("Living Room");
    Light *kitchenLight = new Light("Kitchen");
    Stereo *stereo = new Stereo("Living Room");

    LightOnCommand *livingRoomLightOn = new LightOnCommand(livingRoomLight);
    LightOffCommand *livingRoomLightOff = new LightOffCommand(livingRoomLight);
    LightOnCommand *kitchenLightOn = new LightOnCommand(kitchenLight);
    LightOffCommand *kitchenLightOff = new LightOffCommand(kitchenLight);
    StereOnWithCDCommand *stereoOnWithCD = new StereOnWithCDCommand(stereo);
    StereoOffCommand *stereoOff = new StereoOffCommand(stereo);

    remoteControl->setCommand(0, livingRoomLightOn, livingRoomLightOff);
    remoteControl->setCommand(1, kitchenLightOn, kitchenLightOff);
    remoteControl->setCommand(2, stereoOnWithCD, stereoOff);

    remoteControl->onButtonWasPushed(0);
    remoteControl->offButtonWasPushed(0);

    remoteControl->onButtonWasPushed(1);
    remoteControl->offButtonWasPushed(1);

    remoteControl->onButtonWasPushed(2);
    remoteControl->offButtonWasPushed(2);
    
    cout << "println(remoteControl)" << endl;
    remoteControl->undoButtonWasPushed();
    cout << "println(remoteControl)" << endl;
    remoteControl->undoButtonWasPushed();

    return a.exec();
}
