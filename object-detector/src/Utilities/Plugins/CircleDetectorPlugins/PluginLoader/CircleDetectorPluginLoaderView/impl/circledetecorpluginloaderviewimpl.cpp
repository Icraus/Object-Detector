#include "impl/circledetecorpluginloaderviewimpl.h"
#include "ui_circledetecorpluginloaderview.h"
CIRCLE_PLUGIN_LOADER_BEGIN_NAMESPACE


CircleDetecorPluginLoaderView::_CircleDetecorPluginLoaderViewImpl::_CircleDetecorPluginLoaderViewImpl(CircleDetecorPluginLoaderView * const ptr): _ptr{ptr},
    ui(new Ui::CircleDetecorPluginLoaderView)
{
    ui->setupUi(_ptr);
    m_pluginsModel = new CircleDetectorPluginModel(QDir::currentPath() + "/plugins");
    ui->tableView->setModel(m_pluginsModel);
}

CircleDetecorPluginLoaderView::_CircleDetecorPluginLoaderViewImpl::~_CircleDetecorPluginLoaderViewImpl()
{
    delete ui;
}


CircleDetectorPluginModel *CircleDetecorPluginLoaderView::_CircleDetecorPluginLoaderViewImpl::pluginsModel() const
{
    return m_pluginsModel;
}

void CircleDetecorPluginLoaderView::_CircleDetecorPluginLoaderViewImpl::setPluginsModel(CircleDetectorPluginModel *pluginsModel)
{
    m_pluginsModel = pluginsModel;
}

void CircleDetecorPluginLoaderView::_CircleDetecorPluginLoaderViewImpl::on_lineEdit_textChanged(const QString &arg1)
{

}

void CircleDetecorPluginLoaderView::_CircleDetecorPluginLoaderViewImpl::on_pushButton_clicked()
{
    QString pa = ui->lineEdit->text();
    m_pluginsModel->setPluginPath(pa);
    m_pluginsModel->loadPlugins();
    ui->tableView->update();
}

QTableView *CircleDetecorPluginLoaderView::_CircleDetecorPluginLoaderViewImpl::view() const
{
    return ui->tableView;
}

void CircleDetecorPluginLoaderView::_CircleDetecorPluginLoaderViewImpl::on_buttonBox_accepted()
{
}

void CircleDetecorPluginLoaderView::_CircleDetecorPluginLoaderViewImpl::on_pushButton_2_clicked()
{
    QModelIndex ind = this->view()->currentIndex();
    if(!ind.isValid())
        return;
    auto filter = ind.data(CircleDetectorPluginModel::FILTER).value<PluginSharedPointer>();
    emit _ptr->filterChanged(filter);

}
CIRCLE_PLUGIN_LOADER_END_NAMESPACE
