#include "Player.h"



Player::Player(const string &lname) : name(lname), largemon("", "", "", "", 0, 0)
{

}

void Player::setName(const string &lname)
{
	name = lname;
}

string Player::getName() const
{
	return name;
}

int Player::getWins() const
{
	return wins;
}

int Player::getLosses() const
{
	return losses;
}

int Player::getPoints() const
{
	return points;
}

int Player::getGamesPlayed() const
{
	return gamesPlayed;
}

LargeMon Player::getPlayerLargeMon() const
{
	return largemon;
}

int Player::getLargeMonHealthPoints() const
{
	return largemon.getHealthPoints();
}

int Player::getLargeMonAttackpoints() const
{
	return largemon.getAttackPoints();
}

string Player::getLargeMonName() const
{
	return largemon.getName();
}

string Player::getLargeMonSize() const
{
	return largemon.getSize();
}

string Player::getLargeMonType() const
{
	return largemon.getType();
}

void Player::setPlayerLargeMon(LargeMon laremon)
{

	largemon = laremon;
}

void Player::singleGame(int playerHp, int comHp)
{
	gamesPlayed++;
	if (playerHp > comHp)
	{
		wins++;
		points += 3;
	}
	else
	{
		losses++;
	}
}

