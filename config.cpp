#include "config.h"


/////Option/////
Option g_OptionData;
Option Window_show;
int User_admin_flag = 0;
Option::Option()
{

}

Option::~Option()
{

}

void Option::ShowKeyBoard(QWidget *parent, bool num,QWidget *edit,int x,int y) //用于连续点击一个键盘按钮时对话框的显示和隐藏。以及调整显示框位置
{
    static QWidget *last = 0;

    if (k_board == NULL)
    {
        k_board = new Keyboard(parent,num);
        last = edit;
    }
    k_board->setEditUi(edit);

    if (k_board->isVisible() && last == edit)
        k_board->hide();
    else
    {
        last = edit;
        k_board->move(406+x,278+y);
        //调整对话框显示位置
        k_board->show();
    }
}

void Option::CloseKeyBoard()
{
    if(k_board == NULL) return;
    if(k_board->isVisible())
    {
        k_board->hide();
        delete k_board;
        k_board = NULL;
    }
}


