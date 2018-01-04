#include "circledetecorpluginloaderview.h"
#include "impl/circledetecorpluginloaderviewimpl.h"
CIRCLE_PLUGIN_LOADER_BEGIN_NAMESPACE
#define PLUGINPATH "/plugins"

CircleDetecorPluginLoaderView::CircleDetecorPluginLoaderView(QWidget *parent)
    : CircleDetecorPluginLoaderView(QDir::currentPath() + PLUGINPATH, parent)
{

}

CircleDetecorPluginLoaderView::CircleDetecorPluginLoaderView(QString path, QWidget *parent)
    :QDialog(parent),
      _pimpl{INIT_UNIQUE_PTR(CircleDetecorPluginLoaderView::_CircleDetecorPluginLoaderViewImpl , this, path)}

{

}

CircleDetecorPluginLoaderView::~CircleDetecorPluginLoaderView()
{

}


CircleDetectorPluginModel *CircleDetecorPluginLoaderView::pluginsModel() const
{
    return _pimpl->pluginsModel();
}

void CircleDetecorPluginLoaderView::setPluginsModel(CircleDetectorPluginModel *pluginsModel)
{
    _pimpl->setPluginsModel(pluginsModel);
}

QTableView *CircleDetecorPluginLoaderView::view() const
{
    return _pimpl->view();
}

void CircleDetecorPluginLoaderView::on_lineEdit_textChanged(const QString &arg1)
{
    _pimpl->on_lineEdit_textChanged(arg1);

}

void CircleDetecorPluginLoaderView::on_buttonBox_accepted()
{
    _pimpl->on_buttonBox_accepted();

}

void CircleDetecorPluginLoaderView::on_pushButton_clicked()
{
    _pimpl->on_pushButton_clicked();

}

void CircleDetecorPluginLoaderView::on_pushButton_2_clicked()
{
    _pimpl->on_pushButton_2_clicked();

}
CIRCLE_PLUGIN_LOADER_END_NAMESPACE
