#ifndef CURRENTCONDITIONSDISPLAY_H
#define CURRENTCONDITIONSDISPLAY_H


#include "observer.h"
#include "displayelement.h"
#include "subject.h"

class CurrentConditionsDisplay : public Observer, public DisplayElement {
private:
    float temperature;
    float humidity;
    Subject* weatherData;
public:
    CurrentConditionsDisplay(Subject*);
    void update(float, float, float);
    void display();
};

#endif // CURRENTCONDITIONSDISPLAY_H
