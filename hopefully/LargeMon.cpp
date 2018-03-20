#include "LargeMon.h"



LargeMon::LargeMon(const string &type, const string &name, const string &lsize, const string &description, int attackpoints, int healthPoints)
	:ltype(type), lname(name), lsize(lsize), ldescription(description), lattackPoints(attackpoints), lhealthPoints(healthPoints)
{
	throw gcnew System::NotImplementedException();
}

void LargeMon::setType(const string &type)
{
	ltype = type;
	throw gcnew System::NotImplementedException();
}

void LargeMon::setName(const string &name)
{
	lname = name;
	throw gcnew System::NotImplementedException();
}

void LargeMon::setSize(const string &size)
{
	lsize = size;
	throw gcnew System::NotImplementedException();
}

void LargeMon::setDescription(const string &description)
{
	ldescription = description;
	throw gcnew System::NotImplementedException();
}

void LargeMon::setAttackPoints(int attackpoints)
{
	lattackPoints = attackpoints;
}

void LargeMon::setHealthPoints(int healthPoints)
{
	lhealthPoints = healthPoints;
}

string LargeMon::getType() 
{
	return ltype;
}

string LargeMon::getName() 
{
	return lname;
}

string LargeMon::getSize() 
{
	return lsize;
}

string LargeMon::getDescription() 
{
	return ldescription;
}

int LargeMon::getAttackPoints() 
{
	return lattackPoints;
}

int LargeMon::getHealthPoints() 
{
	return lhealthPoints;
}



