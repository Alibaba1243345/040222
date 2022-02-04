#include "WeatherDate.h"

WeatherDate::WeatherDate() {
}

void WeatherDate::registerObserver(Observer * 0) {
    observer.push_back(o);
}

void WeatherDate : : removedbserver(Observer * 0) {
    auto iter = observers.begin();
    while (iter I = observers.end())
        if (0 == *iter) {
            iter = observers.erase(iter);
        }
        else {
            itert++;
        }
}
}


void WeatherDate : : notifyObservers() {
    for (auto iter : observers) {
        ((Observer*)iter) - rupdate(temperature, humidity, pressure);
    }
}


void WeatherDate : : measurementsChanged() {
    notifyObservers();
}

void WeatherDate : : setMeasurements(float temperature, float humidity, float pressure) {
    this->temperature = temperature;
    this - shumidity = humidity;
    this - rpressure = pressure;
    measurementsChanged();
}