#include "listmodel.h"

#include "def.h"

ListModel::ListModel(QObject *parent)
    : QAbstractItemModel(parent)
{
    m_strList << "aa" << "bb" << "ccc" << "dddddd" << "eeeeeeee";
}

QModelIndex ListModel::index(int row, int column, const QModelIndex &parent) const
{
    return createIndex(row, column);
}

QModelIndex ListModel::parent(const QModelIndex &child) const
{
    return QModelIndex();
}

int ListModel::rowCount(const QModelIndex &parent) const
{
    return m_strList.size();
}

int ListModel::columnCount(const QModelIndex &parent) const
{
    return 1;
}

QVariant ListModel::data(const QModelIndex &index, int role) const
{
    return m_strList.at(index.row());
}
