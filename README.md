# Object-Detector
<h3>Cross-platform Circle Object Detection and Tracking Using OpenCV and Qt for win, linux, android, raspberry pi (Not Tested)</h3>
<h3>Requires:</h3> 
1-Qt 5.x C++ for mingw or MSVC 13 Or Linux gcc or NDK or raspberry pi tool-chain<a href= "https://www.qt.io/"> here</a>

 2- Opencv v3.0 <a href= "https://www.http://opencv.org/"> here</a>
  
<h3>set envirnoment Variables:</h3>
  <h4>OPENCV_DIR = //Opencv Directory</h4>
  <h4>OPENCV_INCLUDE = //Include Path of opencv header files</h4>
  <h4>OPENCV_MINGW_PATH = //Mingw Build Directory</h4>
  <h4>OPENCV_MSVC_PATH = //MSVC Build Directory</h4>
### run qmake win32-g++  or qmake win32-msvc2015  for win or qmake linux-g++ for linux
### run make for linux  mingw32_make or jom for win
### make install
Don't Forget add Opencv/$$Complier/Bin to $Path

For static Build use Qt static Build (u can get it from <a href="https://www.npcglib.org/~stathis/blog/precompiled-qt4-qt5" target="_blank">here</a> ) and static Libraries From Opencv for MSCV 13
<h4>For Android you need to change qmake file (*.pro) to support andriod Build and of course change Views Layouts ,permissions and android manfiest file</h4>   
<h3>Requires:</h3>
    <h4>1-Qt 5 for android</h4> 
    <h4>2- NDK</h4>
    <h4>3- jdk</h4>
    <h4>3- android SDK</h4>
    <h4>4- opencv 3 for android sdk</h4>  
<h3>Known Issues: </h3>
	<h4>Due to Opencv 3.0 on android we can't use Camera Because Opencv dropped Support For Android Camera Instead Use version 2.x you could use QtCamera Module</h4>	
	