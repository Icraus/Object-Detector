#ifndef CIRCLEDETECTORPLUGINMODELIMPL_H
#define CIRCLEDETECTORPLUGINMODELIMPL_H

#include <QAbstractTableModel>
#include <QDir>
#include <QObject>
#include <circledetectorpluginmodel.h>
#include "imageprocessorpluginiface.h"

CIRCLE_MODEL_BEGIN_NAMESPACE
class CircleDetectorPluginModel::_CircleDetectorPluginModelImpl
{

public:
    _CircleDetectorPluginModelImpl(QString path, CircleDetectorPluginModel *const _ptr);

    void loadPlugins();
    // QAbstractItemModel interface
    ~_CircleDetectorPluginModelImpl();
    int rowCount(const QModelIndex &parent) const;
    int columnCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;
    QString pluginPath() const;
    void setPluginPath(const QString &pluginPath);

    PluginSharedPointerList filters() const;
    void setFilters(const PluginSharedPointerList &filters);

    QList<QString> pluginPaths() const;

private:
    QList<QString> m_pluginPaths;
    PluginSharedPointerList m_filters;
    QString m_pluginPath;
    CircleDetectorPluginModel *const ptr;
    const int COLUMN_COUNT = 4;
};
CIRCLE_MODEL_END_NAMESPACE
#endif // CIRCLEDETECTORPLUGINMODEL_H
