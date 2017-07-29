#ifndef __MAIN_TANK__  
#define __MAIN_TANK__  

#include "Tank.h"  

class MainTank : public Tank
{
public:
	MainTank()
	{
		m_pos.Set(300, 300);

		this->CalculateSphere();

		m_color = GREEN;
		m_dir = Dir::UP;
		m_step = 2;
	}
	 
	~MainTank() {}

	// ������ʻ����  
	void SetDir(Dir dir);

	void Display();
	void Move();

protected:
	void CalculateSphere();

	// ����̹������  
	void DrawTankBody();
};

#endif  