#include "cvvideocapture.h"
#include "cvvideocaptureplugin.h"

#include <QtPlugin>

CVVideoCapturePlugin::CVVideoCapturePlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void CVVideoCapturePlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool CVVideoCapturePlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *CVVideoCapturePlugin::createWidget(QWidget *parent)
{
    return new CVVideoCapture(parent);
}

QString CVVideoCapturePlugin::name() const
{
    return QLatin1String("CVVideoCapture");
}

QString CVVideoCapturePlugin::group() const
{
    return QLatin1String("Open CV");
}

QIcon CVVideoCapturePlugin::icon() const
{
    return QIcon();
}

QString CVVideoCapturePlugin::toolTip() const
{
    return QLatin1String("Video Capture");
}

QString CVVideoCapturePlugin::whatsThis() const
{
    return QLatin1String("Opencv Video Capture Widget");
}

bool CVVideoCapturePlugin::isContainer() const
{
    return false;
}

QString CVVideoCapturePlugin::domXml() const
{
    return QLatin1String("<widget class=\"CVVideoCapture\" name=\"cVVideoCapture\">\n</widget>\n");
}

QString CVVideoCapturePlugin::includeFile() const
{
    return QLatin1String("cvvideocapture.h");
}
#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(cvvideocaptureplugin, CVVideoCapturePlugin)
#endif // QT_VERSION < 0x050000
