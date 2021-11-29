#include <iostream>
#include "currentconditionsdisplay.h"

CurrentConditionsDisplay::CurrentConditionsDisplay(Subject* weatherData) {
    this->weatherData = weatherData;
    weatherData->registerObserver(this);
}

void CurrentConditionsDisplay::update(float t, float h, float p) {
    this->temperature = t;
    this->humidity = h;
    display();
}

void CurrentConditionsDisplay::display() {
    std::cout << "Current conditions: " << temperature
        << "C degreass and " << humidity
        << "% humidity" << std::endl;
}
