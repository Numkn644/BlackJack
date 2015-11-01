#pragma once

class Object{
protected:
	int m_handle;
	int m_x;
	int m_y;
public:
	Object(){};
	Object(int x, int y, int handle) : m_x(x), m_y(y), m_handle(handle){}
	virtual ~Object(){};
};