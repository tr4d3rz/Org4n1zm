#pragma once
#include "Cell.h"

/*
................MMMMMMM.................
...............:MMMMMMM+.............. .
......$MMM....,MMMMMMMMM:....MMMD.......
.....MMMMMMMMMMMMMMMMMMMMMMMMMMMMM......
...MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM....
....MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM.....
.....MMMMMMMMMM ........MMMMMMMMMM......
.....MMMMMMMM.............8MMMMMMM.....
....,MMMMMM................ MMMMMM=.....
...DMMMMMM...................MMMMMMN,...
MMMMMMMMMM...................MMMMMMMMMMM
MMMMMMMMMD...................$MMMMMMMMMM
MMMMMMMMMD...................$MMMMMMMMMM
MMMMMMMMMM...................MMMMMMMMMMM
..=MMMMMMM...................MMMMMMM=..
....,MMMMMM.................MMMMMMI.....
.....MMMMMMMD.............$MMMMMMM......
.....MMMMMMMMMM.........MMMMMMMMMM......
....MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM.....
...MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM....
...  MMMMMMMMMMMMMMMMMMMMMMMMMMMMM .....
......NMMM....+MMMMMMMMM7 ...MMMM ......
...  ..........~MMMMMMM7................
................MMMMMMM ................
.................MMMMM: ................
*/

class Gear :
	public Cell
{
public:
	Gear();
	virtual ~Gear();
	
	void SetInput(IInputCell *input);
	void SetOutput(IOutputCell *output);

private:
	IInputCell *m_input;
	IInputCell *m_ctrl;
	IOutputCell *m_output;
};
