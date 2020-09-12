#include "listview.h"

#include <QPaintEvent>
#include <QPainter>

#include "def.h"

ListView::ListView(QWidget *parent)
    :QListView(parent)
{
    m_model = new ListModel(this);
    m_delegate = new ListDelegate(this);

    setModel(m_model);
    setItemDelegate(m_delegate);

    setMouseTracking(true);
//    setAttribute(Qt::WA_Hover, true);

}

ListView::~ListView()
{
    qDebug() << "~ListView()";
    DEBUG(this->parent());
}

void ListView::mouseMoveEvent(QMouseEvent *e)
{
//    qDebug() << viewport()->windowFlags() << viewport()->testAttribute(Qt::WA_Hover);
//    qDebug() << windowFlags() << testAttribute(Qt::WA_Hover);
//    qDebug() << e->type();
    QListView::mouseMoveEvent(e);
}

//void ListView::paintEvent(QPaintEvent *e)
//{
//    QRect rect = e->rect();
//    QPainter painter;
//    painter.begin(this);
//    QStyleOptionViewItem option;
//    for (int i = 0; i < m_model->rowCount(); ++i)
//    {
//        QModelIndex modelIndex = m_model->index(i, 0);
//        m_delegate->paint(&painter, option, modelIndex);
//    }

//    DEBUG(rect);
//}
