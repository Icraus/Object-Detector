#ifndef CIRCLEDETECORPLUGINLOADERVIEW_H
#define CIRCLEDETECORPLUGINLOADERVIEW_H

#include <QDialog>
#include <imageprocessorpluginiface.h>
#include <circledetectorpluginmodel.h>
#include <memory>
#include <QTableView>
#include "circledetectorpluginloaderview_global.h"
CIRCLE_PLUGIN_LOADER_BEGIN_NAMESPACE

class CIRCLE_PLUGIN_LOADER_LIB CircleDetecorPluginLoaderView : public QDialog
{
    Q_OBJECT

public:
    explicit CircleDetecorPluginLoaderView(QWidget *parent = 0);
    ~CircleDetecorPluginLoaderView();

    CircleDetectorPluginModel *pluginsModel() const;
    void setPluginsModel(CircleDetectorPluginModel *pluginsModel);
    QTableView *view() const;
private slots:
    void on_lineEdit_textChanged(const QString &arg1);
    void on_buttonBox_accepted();

    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

signals:
    void filterChanged(PluginSharedPointer selected);
private:
    class _CircleDetecorPluginLoaderViewImpl;
    friend class _CircleDetecorPluginLoaderViewImpl;
    std::unique_ptr<CircleDetecorPluginLoaderView::_CircleDetecorPluginLoaderViewImpl> _pimpl;
};
CIRCLE_PLUGIN_LOADER_END_NAMESPACE

#endif // CIRCLEDETECORPLUGINLOADERVIEW_H
