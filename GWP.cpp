#pragma once
#include "stdafx.h"
#include "GWT.h"

Mat getGaborKernel( double pixel_per_cycle, double phi, double sigma, int kernel_size ){

    if( kernel_size <= 0 )
    
        kernel_size = ( int )( sigma * pixel_per_cycle * 6.0 );
        
    if( kernel_size % 2 == 0 )
    
        kernel_size ++;
        
    double kv = 2.0 / pixel_per_cycle * CV_PI;
    double kx = kv * cos( phi );
    double ky = kv * sin( phi );
    
    sigma *= 2.0 * CV_PI;

Mat kernel( kernel_size, kernel_size, CV_32FC2 );

int hks = ( kernel_size - 1 ) / 2;
