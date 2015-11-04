#pragma once
#include "DxLib.h"
#include <string>

class Animation
{
private:
	int m_handle;	/*画像ハンドル*/
	unsigned int m_counter;		/*アニメーションカウンタ*/
	int m_x;	/*x座標*/
	int m_y;	/*y座標*/

public:
	Animation();
	virtual ~Animation();

public:
	void initialize(char *image);	/*初期化*/
	void execute();		/*実行*/
	void draw();		/*描画*/

protected:
	//void count();		/*カウンタの更新*/
};

