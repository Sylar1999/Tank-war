#ifndef __TANK_H__  
#define __TANK_H__  

#include "Graphic.h"  
#include "Rect.h"

enum Dir { UP, DOWN, LEFT, RIGHT };

class Tank
{
public:
	//��ͼ
	virtual void Display() = 0;
	//�ƶ�
	virtual void Move() = 0;

protected:
	virtual void CalculateSphere() = 0;

	Point m_pos;
	Rect m_rectSphere;//������Χ
	COLORREF m_color;

	Dir m_dir;
	int m_step;
};

#endif  