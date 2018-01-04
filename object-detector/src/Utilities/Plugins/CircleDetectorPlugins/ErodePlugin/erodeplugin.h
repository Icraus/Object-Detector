#ifndef ERODEPLUGIN_H
#define ERODEPLUGIN_H
#include <QObject>
#include <imageprocessorpluginiface.h>
#define ErodePlugin_iid "CircleDetectorPlugins.MorphoLogical.ErodePlugin"
namespace MorphoLogical {
    class ErodePlugin : public QObject, CircleDetectorPlugins::ImageProcessorPluginIFace
    {
        Q_OBJECT
        Q_INTERFACES(CircleDetectorPlugins::ImageProcessorPluginIFace)
        Q_PLUGIN_METADATA(IID ErodePlugin_iid)
        public:
            ErodePlugin(QObject *parent = 0);
            QString filterName() const;
            cv::Mat filter(cv::Mat src) const;
            virtual QString filterDescription() const;
            virtual QString author() const;

    };
}


#endif // ERODEPLUGIN_H
