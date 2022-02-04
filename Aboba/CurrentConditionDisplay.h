#pragma once
#include "Observer.h"
#include "DisplayElement"
#include "Subject.h"

class CurrentConditionDisplay : public Observer, public DisplayElement
{
private:
	float temperature;
	float humidity;
	Subject* weatherDate;
public:
	CurrentConditionDisplay(Subject* weatherDate);
	void update(float temperature, float humidity, float pressure);
	void display();
};

