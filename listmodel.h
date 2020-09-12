#ifndef LISTMODEL_H
#define LISTMODEL_H

#include <QAbstractItemModel>

class ListModel : public QAbstractItemModel
{
public:
    ListModel(QObject *parent=nullptr);

    virtual QModelIndex index(int row, int column,
                                  const QModelIndex &parent = QModelIndex()) const override;
    virtual QModelIndex parent(const QModelIndex &child) const override;
    virtual int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    virtual int columnCount(const QModelIndex &parent = QModelIndex()) const override;
    virtual QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

    QStringList m_strList;
};

#endif // LISTMODEL_H
