#include "circledetectorpluginmodel.h"
#include "impl/circledetectorpluginmodelimpl.h"
#include <QPluginLoader>

#include "circledetectorpluginmodel_global.h"
CIRCLE_MODEL_BEGIN_NAMESPACE
CircleDetectorPluginModel::CircleDetectorPluginModel(QString path, QObject *parent): QAbstractTableModel(parent),
    _pimpl{INIT_UNIQUE_PTR(CircleDetectorPluginModel::_CircleDetectorPluginModelImpl, path, this)}
{

}

void CircleDetectorPluginModel::loadPlugins()
{
    _pimpl->loadPlugins();
}

CircleDetectorPluginModel::~CircleDetectorPluginModel()
{

}


int CircleDetectorPluginModel::rowCount(const QModelIndex &parent) const
{
    return _pimpl->rowCount(parent);
}

int CircleDetectorPluginModel::columnCount(const QModelIndex &parent) const
{
    return _pimpl->columnCount(parent);
}

QVariant CircleDetectorPluginModel::data(const QModelIndex &index, int role) const
{
    return _pimpl->data(index, role);
}

QString CircleDetectorPluginModel::pluginPath() const
{
    return _pimpl->pluginPath();
}

void CircleDetectorPluginModel::setPluginPath(const QString &pluginPath)
{
    _pimpl->setPluginPath(pluginPath);
}

QList<QString> CircleDetectorPluginModel::pluginPaths() const
{
    return _pimpl->pluginPaths();
}

PluginSharedPointerList CircleDetectorPluginModel::filters() const
{
    return _pimpl->filters();
}

void CircleDetectorPluginModel::setFilters(const PluginSharedPointerList &filters)
{
    _pimpl->setFilters(filters);
}
CIRCLE_MODEL_END_NAMESPACE
