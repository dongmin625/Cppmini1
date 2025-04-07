#pragma once

class Character {
	protected:
		int level;
	
		int hp; //ü��
		int mp; //����

		int atk; // ���·�
		int sp; // �ֹ���

		double def; // ����
		double mr; // �������׷�

	public:
		void basicAttack(Character& target);
		
		virtual void qSkill(Character& target)=0;  // ��� è�Ǿ��� ������ ������ ��ų�� ������.
		virtual void wSkill(Character& target)=0;
		virtual void eSkill(Character& target)=0;
		virtual void rSkill(Character& target)=0;

		void takeDamage(double dmg);

		void takeTrueDamage(int tdmg);
		

};