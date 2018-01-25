#pragma once
#include "stdafx.h"

using namespace cv;
using namespace std;

Mat getGaborKernel( double pixel_per_cycle, double phi, double sigma, int kernel_size = 0 );

void getGaborFeature( const Mat& src, const Mat& gabor, Mat& dst );
void getGaborFeature( const Mat& src, const vector< vector< Mat > >& gabor, vector< vector< Mat > >& dst );
void getGaborFeature( const vector< Mat >& src, const vector< vector< Mat > >& gabor, vector< vector< Mat > >& dst );
