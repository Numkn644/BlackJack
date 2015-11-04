#include "Animation.h"


Animation::Animation()
{

}


Animation::~Animation()
{
	DeleteGraph(m_handle);
}

void Animation::initialize(char *image)
{
	m_handle = LoadGraph(image);
	m_counter = 0;
	m_x = 640;
	m_y = 150;

}

void Animation::execute()
{
	if (m_x > 0){
		m_x -= 10;
	}
}

void Animation::draw()
{
	DrawGraph(m_x, m_y, m_handle, TRUE);
}