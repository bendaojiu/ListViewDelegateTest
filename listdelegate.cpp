#include "listdelegate.h"

#include <QPainter>

#include "def.h"

ListDelegate::ListDelegate(QObject *parent)
    : QStyledItemDelegate(parent)
{
eachHeight = 30;
}

void ListDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    DEBUG(option.state) << DEBUGINFO(index.row());
    if (option.state & QStyle::State_MouseOver)
    {
        qDebug() << "has";
    }
//    painter->save();
//    QPen p(Qt::red);
//    p.setWidth(5);
//    painter->setPen(p);
//    int startY = 50;
//    painter->drawRect(0, startY + index.column() * eachHeight, 100, eachHeight);
//    painter->restore();
    QStyledItemDelegate::paint(painter,option,index);
}

QSize ListDelegate::sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    return QSize(150, eachHeight);
}
