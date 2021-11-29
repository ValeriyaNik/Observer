#include <QCoreApplication>
#include "weatherdata.h"
#include "currentconditionsdisplay.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    WeatherData* weatherData = new WeatherData();

    CurrentConditionsDisplay* currentDisplay = new CurrentConditionsDisplay(weatherData);

    weatherData->setMeasurements(15, 60, 760);
    weatherData->setMeasurements(20, 53, 765);
    weatherData->setMeasurements(25, 62, 770);
    return a.exec();
}
