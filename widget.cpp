#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    m_listWidget = nullptr;
}

Widget::~Widget()
{
    delete ui;
//    if (m_listWidget)
//    {
//        delete m_listWidget;
//    }
}

void Widget::closeEvent(QCloseEvent *event)
{
    this->deleteLater();
}


void Widget::on_pushButton_clicked()
{
    if (!m_listWidget)
    {
        m_listWidget = new ListWidget();
        m_listWidget->show();
        return;
    }
    if (m_listWidget->isVisible())
    {
        m_listWidget->hide();
    }
    else
    {
        m_listWidget->show();
    }
}
