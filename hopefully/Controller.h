#pragma once

#include "LargeMon.h"
#include "LargeMonGenerator.h"
#include "Player.h"
#include "Combat.h"

ref class Controller
{
public:
	Controller();

public:
	LargeMon *largeMon;
	LargeMonGenerator *lGenerator;
	Player *player;
	Combat *combat;
	
};

