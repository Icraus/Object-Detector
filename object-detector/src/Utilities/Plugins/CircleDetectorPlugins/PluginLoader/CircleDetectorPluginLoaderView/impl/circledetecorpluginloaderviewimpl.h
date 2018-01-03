#ifndef CIRCLEDETECORPLUGINLOADERVIEWIMPL_H
#define CIRCLEDETECORPLUGINLOADERVIEWIMPL_H

#include <QDialog>
#include <imageprocessorpluginiface.h>
#include <circledetectorpluginmodel.h>
#include <circledetecorpluginloaderview.h>
#include <QTableView>
#include "circledetectorpluginloaderview_global.h"
CIRCLE_PLUGIN_LOADER_BEGIN_NAMESPACE
namespace Ui {
class CircleDetecorPluginLoaderView;
}


class CircleDetecorPluginLoaderView::_CircleDetecorPluginLoaderViewImpl
{

public:
    explicit _CircleDetecorPluginLoaderViewImpl(CircleDetecorPluginLoaderView *const ptr);
    ~_CircleDetecorPluginLoaderViewImpl();
    CircleDetectorPluginModel *pluginsModel() const;
    void setPluginsModel(CircleDetectorPluginModel *pluginsModel);
    void on_lineEdit_textChanged(const QString &arg1);
    void on_pushButton_clicked();
    QTableView *view() const;
    void on_buttonBox_accepted();

    void on_pushButton_2_clicked();

private:

    Ui::CircleDetecorPluginLoaderView *ui;
    CircleDetectorPluginModel *m_pluginsModel;
    CircleDetecorPluginLoaderView *const _ptr;
};
CIRCLE_PLUGIN_LOADER_END_NAMESPACE

#endif // CIRCLEDETECORPLUGINLOADERVIEWIMPL_H
