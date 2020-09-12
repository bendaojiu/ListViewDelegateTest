#ifndef LISTDELEGATE_H
#define LISTDELEGATE_H

#include <QStyledItemDelegate>

class ListDelegate : public QStyledItemDelegate
{
public:
    ListDelegate(QObject *parent=nullptr);

    virtual void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const override;
    virtual QSize sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const override;

    int eachHeight;
};

#endif // LISTDELEGATE_H
