#pragma once

#include "IOutputCell.h"

class IInputCell
{
public:
	virtual ~IInputCell() = 0;

	virtual void Connect(IOutputCell *input) = 0;
	virtual bool AskForGlucose() = 0;	//AskForGlucose is called by IOutputCell if it's hungry
};

