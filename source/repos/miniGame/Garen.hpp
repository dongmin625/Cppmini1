#pragma once
#include "Character.hpp"


class Garen : public Character {
	public:
		Garen(); // ������

		void qSkill(Character& target) override; // override �� �ڹ��� @Override
		void wSkill(Character& target) override; // �� ���� ����
		void eSkill(Character& target) override;
		void rSkill(Character& target) override;
};