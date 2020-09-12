#ifndef LISTWIDGET_H
#define LISTWIDGET_H

#include <QWidget>

#include "listview.h"

class ListWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ListWidget(QWidget *parent = nullptr);

signals:


private:
    ListView *m_listView;
};

#endif // LISTWIDGET_H
