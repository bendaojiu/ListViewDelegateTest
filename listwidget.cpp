#include "listwidget.h"

#include <QLabel>
#include <QVBoxLayout>

ListWidget::ListWidget(QWidget *parent) : QWidget(parent)
{
    QLabel *label = new QLabel("testList");
    m_listView = new ListView();

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(label);
    layout->addWidget(m_listView);

    setWindowFlags(Qt::FramelessWindowHint | Qt::Tool | Qt::X11BypassWindowManagerHint);
}
