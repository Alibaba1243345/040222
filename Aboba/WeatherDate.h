#pragma once
#include “Subject.h"
#include <iostream>
#include <list>
#include "Observer.h"

using namespace std;

class WeatherDate : public Subject {
private:
    list<Observer*> observers;
    float temperature;
    float humidity;
    float pressure;
public:
    WeatherDate();
    void registerObserver(Observer*);
    void removeObserver(Observer*);
    void notifyObservers();
    void measurementsChanged();
    void setMeasurements(float temperature, float humidity, float pressure);
};