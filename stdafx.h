#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>
#include <string>
#include <sstream>

#include "opencv2/opencv.hpp"
#include "opencv2/objdetect/objdetect.hpp"
#include "opencv2/core/core.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/gpu/gpu.hpp"

#ifdef _DEBUG
//モードの場合Debug
#pragma comment( lib, "opencv_core249d.lib" )
#pragma comment( lib, "opencv_imgproc249d.lib" )
#pragma comment( lib, "opencv_highgui249d.lib" )
#pragma comment( lib, "opencv_video249d.lib" )
#else
//モードの場合Release
#pragma comment( lib, "opencv_core249.lib" )
#pragma comment( lib, "opencv_imgproc249.lib" )
#pragma comment( lib, "opencv_highgui249.lib" )
#pragma comment( lib, "opencv_video249.lib" )
#endif

using namespace std;
using namespace cv;
