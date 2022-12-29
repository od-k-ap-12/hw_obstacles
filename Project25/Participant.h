#pragma once
#include <iostream>
using namespace std;
class Participant
{
protected:
	double Stamina;
	double JumpHeight;
	string Type;
public:
	Participant() = default;
	Participant(double _Stamina, double _JumpHeight) {
		Stamina = _Stamina;
		JumpHeight = _JumpHeight;
		Type = "Unknown";
	}
	virtual void Jump() = 0;
	virtual void Run() = 0;
	double GetStamina() {
		return Stamina;
	}
	double GetJumpHeight() {
		return JumpHeight;
	}
	string GetType() {
		return Type;
	}
};

class Human : public Participant {
public:
	Human() = default;
	Human(double _Stamina, double _JumpHeight) :Participant(_Stamina, _JumpHeight) {
		Type = "Human";
	}
	virtual void Jump() {
		cout << "Human is jumping" << endl;
		GetJumpHeight();
	}
	virtual void Run() {
		cout << "Human is running" << endl;
		GetStamina();
	}
};

class Robot : public Participant {
public:
	Robot() = default;
	Robot(double _Stamina, double _JumpHeight) :Participant(_Stamina, _JumpHeight) {
		Type = "Robot";
	}
	virtual void Jump() {
		cout << "Robot is jumping" << endl;
		GetJumpHeight();
	}
	virtual void Run() {
		cout << "Robot is running" << endl;
		GetStamina();
	}
};


class Cat : public Participant {
public:
	Cat() = default;
	Cat(double _Stamina, double _JumpHeight) :Participant(_Stamina, _JumpHeight) {
		Type = "Cat";
	}
	virtual void Jump() {
		cout << "Cat is jumping" << endl;
		GetJumpHeight();
	}
	virtual void Run() {
		cout << "Cat is running" << endl;
		GetStamina();
	}
};
