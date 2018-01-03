#include "circledetectorpluginmodelimpl.h"

#include <QPluginLoader>


CIRCLE_MODEL_BEGIN_NAMESPACE
CircleDetectorPluginModel::_CircleDetectorPluginModelImpl::_CircleDetectorPluginModelImpl(QString path, CircleDetectorPluginModel* const _ptr) : ptr{_ptr},
    m_pluginPath{path}
{

    loadPlugins();
}

void CircleDetectorPluginModel::_CircleDetectorPluginModelImpl::loadPlugins()
{
    ptr->removeRows(0, m_filters.size(), QModelIndex());
    m_filters.clear();
    QDir dir_path(pluginPath());
    foreach (QString fileName, dir_path.entryList(QDir::Files)) {
        QPluginLoader loader(dir_path.absoluteFilePath(fileName));
        QObject *obj = loader.instance();
        if(obj){
            QSharedPointer<CircleDetectorPlugins::ImageProcessorPluginIFace>iface(qobject_cast<CircleDetectorPlugins::ImageProcessorPluginIFace *>(obj));
            if(iface){
                m_pluginPaths.push_back(dir_path.absoluteFilePath(fileName));
                m_filters.push_back(iface);
            }

        }
    }

}

CircleDetectorPluginModel::_CircleDetectorPluginModelImpl::~_CircleDetectorPluginModelImpl()
{

}


int CircleDetectorPluginModel::_CircleDetectorPluginModelImpl::rowCount(const QModelIndex &parent) const
{
    return m_filters.size();
}

int CircleDetectorPluginModel::_CircleDetectorPluginModelImpl::columnCount(const QModelIndex &parent) const
{
    return COLUMN_COUNT;
}

QVariant CircleDetectorPluginModel::_CircleDetectorPluginModelImpl::data(const QModelIndex &index, int role) const
{
    int row = index.row();
    int col = index.column();
    switch (role) {
    case Qt::DisplayRole:
        return data(index, Qt::UserRole + 2 + col);
    case FILTER_NAME:
        return m_filters[row]->filterName();
        break;
    case FILTER:
    {
        QVariant v;
        v.setValue(m_filters[row]);
        return v;
        break;
    }
    case FILTER_AUTHOR:
    return m_filters[row]->author();

    case FILTER_DESCRIPTION:
    return m_filters[row]->filterDescription();

    case FILTER_PATH:
    return m_pluginPaths[row];
    default:
        break;
    }
    return QVariant();
}

QString CircleDetectorPluginModel::_CircleDetectorPluginModelImpl::pluginPath() const
{
    return m_pluginPath;
}

void CircleDetectorPluginModel::_CircleDetectorPluginModelImpl::setPluginPath(const QString &pluginPath)
{
    m_pluginPath = pluginPath;
}


PluginSharedPointerList CircleDetectorPluginModel::_CircleDetectorPluginModelImpl::filters() const
{
    return m_filters;
}

void CircleDetectorPluginModel::_CircleDetectorPluginModelImpl::setFilters(const PluginSharedPointerList &filters)
{
    m_filters = filters;
}

QList<QString> CircleDetectorPluginModel::_CircleDetectorPluginModelImpl::pluginPaths() const
{
    return m_pluginPaths;
}

CIRCLE_MODEL_END_NAMESPACE
