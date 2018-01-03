#include "circledetecorpluginloaderview.h"
#include "impl/circledetecorpluginloaderviewimpl.h"
CIRCLE_PLUGIN_LOADER_BEGIN_NAMESPACE

CircleDetecorPluginLoaderView::CircleDetecorPluginLoaderView(QWidget *parent) :
    QDialog(parent),
    _pimpl{INIT_UNIQUE_PTR(CircleDetecorPluginLoaderView::_CircleDetecorPluginLoaderViewImpl ,this)}
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

void CircleDetecorPluginLoaderView::on_pushButton_clicked()
{
    _pimpl->on_pushButton_clicked();

}
CIRCLE_PLUGIN_LOADER_END_NAMESPACE
