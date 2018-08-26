#pragma once

#include "IInputCell.h"
#include "IOutputCell.h"

class Cell : public IInputCell, public IOutputCell
{
public:
	Cell();
	virtual ~Cell() = 0;
};

