#pragma once
#include <iostream>

using namespace System;
using namespace std;

ref class LargeMon
{
public:
	LargeMon(const string &, const string &, const string &, const string &, int, int);

	void setType(const string &);
	void setName(const string &);
	void setSize(const string &);
	void setDescription(const string &);
	void setAttackPoints(int);
	void setHealthPoints(int);

	string getType();
	string getName();
	string getSize();
	string getDescription();
	int getAttackPoints();
	int getHealthPoints();

private:
	string ltype;
	string lname;
	string lsize;
	string ldescription;
	int lattackPoints;
	int lhealthPoints;
};

