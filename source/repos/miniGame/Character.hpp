#pragma once

class Character {
	protected:
		int level;
	
		int hp; //체력
		int mp; //마나

		int atk; // 공력력
		int sp; // 주문력

		double def; // 방어력
		double mr; // 마법저항력

	public:
		void basicAttack(Character& target);
		
		virtual void qSkill(Character& target)=0;  // 모든 챔피언은 각자의 고유의 스킬을 가진다.
		virtual void wSkill(Character& target)=0;
		virtual void eSkill(Character& target)=0;
		virtual void rSkill(Character& target)=0;

		void takeDamage(double dmg);

		void takeTrueDamage(int tdmg);
		

};