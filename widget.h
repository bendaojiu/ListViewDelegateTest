#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include "listwidget.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();


protected:
    virtual void closeEvent(QCloseEvent *event) override;


private slots:
    void on_pushButton_clicked();

private:
    Ui::Widget *ui;

    ListWidget *m_listWidget;
};
#endif // WIDGET_H
