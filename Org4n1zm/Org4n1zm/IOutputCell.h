#pragma once

#include "DifferentialStep.h"
#include "Glucose.h"

/**
IOutputCell is at IInputCell command.
So IInputCell will call Push() or Pull()
*/
class IOutputCell
{
public:
	virtual ~IOutputCell() = 0;

	virtual void Trigger(DifferentialStep &step) = 0;
	virtual void Push(const Glucose& glucoseAmount) = 0;
	virtual Glucose Pull(const Glucose& desiredGlucoseAmount) = 0;
};

