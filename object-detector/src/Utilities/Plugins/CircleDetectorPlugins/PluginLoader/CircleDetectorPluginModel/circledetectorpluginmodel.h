#ifndef CIRCLEDETECTORPLUGINMODEL_H
#define CIRCLEDETECTORPLUGINMODEL_H

#include <QAbstractTableModel>
#include <QDir>
#include <QObject>
#include <memory>
#include <imageprocessorpluginiface.h>
#include "circledetectorpluginmodel_global.h"
using PluginIFace = CircleDetectorPlugins::ImageProcessorPluginIFace;
using PluginSharedPointer  = QSharedPointer<PluginIFace>;
using PluginSharedPointerList = QList<PluginSharedPointer>;
Q_DECLARE_METATYPE(PluginSharedPointer)

CIRCLE_MODEL_BEGIN_NAMESPACE

class CIRCLE_MODEL_LIB CircleDetectorPluginModel : public QAbstractTableModel
{
    Q_OBJECT
private:
    class _CircleDetectorPluginModelImpl;
    friend class _CircleDetectorPluginModelImpl;
    std::unique_ptr<_CircleDetectorPluginModelImpl> _pimpl;

public:
    CircleDetectorPluginModel(QString path = QDir::currentPath(), QObject *parent = nullptr);
    enum Type{
        FILTER = Qt::UserRole + 1,
        FILTER_NAME,
        FILTER_DESCRIPTION,
        FILTER_AUTHOR,
        FILTER_PATH

    };
    Q_ENUM(Type)
    void loadPlugins();
    // QAbstractItemModel interface
    virtual ~CircleDetectorPluginModel();
    virtual int rowCount(const QModelIndex &parent) const override;
    virtual int columnCount(const QModelIndex &parent) const override;
    virtual QVariant data(const QModelIndex &index, int role) const override;
    QString pluginPath() const;
    void setPluginPath(const QString &pluginPath);
    QList<QString> pluginPaths() const;
    PluginSharedPointerList filters() const;
    void setFilters(const PluginSharedPointerList &filters);

};
CIRCLE_MODEL_END_NAMESPACE
#endif // CIRCLEDETECTORPLUGINMODEL_H
