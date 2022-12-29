#pragma once
#include "Participant.h"
class Obstacle
{
protected:
	string Type;
public:
	virtual bool OvercomeObstacle(Participant& Participant)=0;
	virtual double GetInfo() = 0;
	string GetType() {
		return Type;
	}
};

class Wall :public Obstacle {
	double Height;
public:
	Wall(double _Height) {
		Height = _Height;
		Type = "Wall";
	}
	bool OvercomeObstacle(Participant& Participant) {
		if (Participant.GetJumpHeight() >= Height) {
			return true;
		}
		else {
			return false;
		}
	}
	double GetInfo() {
		return Height;
	}
};

class Track :public Obstacle {
	double Distance;
public:
	Track(double _Distance) {
		Distance = _Distance;
		Type = "Track";
	}
	bool OvercomeObstacle(Participant& Participant) {
		if (Participant.GetStamina() >= Distance) {
			return true;
		}
		else {
			return false;
		}
	}
	double GetInfo() {
		return Distance;
	}
};
