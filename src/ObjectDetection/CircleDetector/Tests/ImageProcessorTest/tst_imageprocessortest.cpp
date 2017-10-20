#include <QString>
#include <QtTest>
#include "ImageProcessor/objectdetection.h"
#include "ImageProcessor/abstractimageprocessor.h"
#include "ImageProcessor/detectcircle.h"
#include <memory>
#include <QVariant>
class ImageProcessorTest : public QObject
{
    Q_OBJECT
// TODO WRITE ImageProcessing Unit Testing
public:
    ImageProcessorTest();

private Q_SLOTS:
    void TestImageProcessor();
    void TestImageProcessor_data();
};

ImageProcessorTest::ImageProcessorTest()
{

}

void ImageProcessorTest::TestImageProcessor()
{
    QFETCH(QString, ImgSrc);
    QScopedPointer<AbstractImageProcessor> pro(new ImageProcessor::DetectCircle(this));
    pro->setImg(cv::imread(ImgSrc.toStdString().data()));
    QVERIFY2(!pro->getImg().empty(), "The Image Is Empty");
}

void ImageProcessorTest::TestImageProcessor_data()
{
    QTest::addColumn<QString>("ImgSrc");
    QTest::newRow("data") << QString("E:\\1.png");
}

QTEST_APPLESS_MAIN(ImageProcessorTest)

#include "tst_imageprocessortest.moc"
