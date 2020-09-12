#ifndef LISTVIEW_H
#define LISTVIEW_H

#include <QListView>

#include "listmodel.h"
#include "listdelegate.h"

class ListView : public QListView
{
public:
    ListView(QWidget *parent=nullptr);
    ~ListView();

protected:
//    virtual void paintEvent(QPaintEvent *e) override;
    virtual void mouseMoveEvent(QMouseEvent *e) override;

private:
    ListModel *m_model;
    ListDelegate *m_delegate;
};

#endif // LISTVIEW_H
