#include <QString>
#include <QtTest>
//#include "ImageProcessor/objectdetection.h"
class ImageProcessorTest : public QObject
{
    Q_OBJECT
// TODO WRITE ImageProcessing Unit Testing
public:
    ImageProcessorTest();

private Q_SLOTS:
    void TestImageProcessor();
};

ImageProcessorTest::ImageProcessorTest()
{

}

void ImageProcessorTest::TestImageProcessor()
{
//    ObjectDetection ob;
//    ob.setParam1(11);
//    QVERIFY2(ob.getParam1() == 11, "AAD");
//    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(ImageProcessorTest)

#include "tst_imageprocessortest.moc"
