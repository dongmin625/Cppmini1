#pragma once
#include "Character.hpp"

class Ahri : public Character {
	public:
		Ahri();

		void qSkill(Character& target) override; 
		void wSkill(Character& target) override; 
		void eSkill(Character& target) override;
		void rSkill(Character& target) override;

};