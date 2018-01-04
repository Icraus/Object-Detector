#ifndef IMAGEPROCESSORPLUGINIFACE_H
#define IMAGEPROCESSORPLUGINIFACE_H

#include <QString>
#include <QtPlugin>
#include <opencv2/core.hpp>

//TODO fix Files
/*! \brief Common namespace For all Plugins interfaces
 *
 */
namespace CircleDetectorPlugins {
    /*!
     * \brief The ImageProcessorPluginIFace is and interface used to apply filters to Images
     * \details this interface is used to implement plugins to apply filters on image
     * the filter is compiled as a plugin for Qt
     * in qmake file
     * \code
     * CONFIG += release plugin
     * \endcode
     * to implement the plugin you must implement both the QObject class and the interface
     * for exmaple
     * \code
     * class ErodePlugin : public QObject, CircleDetectorPlugins::ImageProcessorPluginIFace
     *{
     *   Q_OBJECT
     *   Q_INTERFACES(CircleDetectorPlugins::ImageProcessorPluginIFace)
     *   Q_PLUGIN_METADATA(IID ErodePlugin_iid)
     *  // implement virtual members
     * }
     *
     * \endcode
     *
     * \author Mohamed Khaled
     * \version 1.0
     *
     */
    class ImageProcessorPluginIFace
    {
    public:
        /*!
         * \brief filterName used to describe the filter name
         *
         * \return  QString object of the filter name for metadata
         */
        virtual QString filterName() const = 0;
        /*!
         * \brief filter this member function is used to apply a filter on an image
         * \param src a cv::Mat object of the source image
         * \return cv::Mat object of the image after applying filter
         */
        virtual cv::Mat filter(cv::Mat src) const = 0;
        /*!
         * \brief filterDescription used to describe filter description
         * \return
         */
        virtual QString filterDescription() const = 0;
        /*!
         * \brief author used to describe the author of the plugin
         * \return
         */
        virtual QString author() const = 0;
        virtual ~ImageProcessorPluginIFace(){

        }
    };

}

using PluginIFace = CircleDetectorPlugins::ImageProcessorPluginIFace; /*!< \typedef of the plugin class*/
using PluginSharedPointer  = QSharedPointer<PluginIFace>;   /*!< \typedef of QSharedpointer of the plugin class*/
using PluginSharedPointerList = QList<PluginSharedPointer>; /*!< \typedef of a list of QSharedpointer of the plugin class*/

#define ImageProcessorPluginIFace_iid "CircleDetector.Utilities.ImageProcessorPluginIFace_iid"

Q_DECLARE_INTERFACE(CircleDetectorPlugins::ImageProcessorPluginIFace, ImageProcessorPluginIFace_iid)

#endif // IMAGEPROCESSORPLUGINIFACE_H
