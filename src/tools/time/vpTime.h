
/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 * Copyright Projet Lagadic / IRISA-INRIA Rennes, 2005
 * www  : http://www.irisa.fr/lagadic
 *+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 *
 * File:      vpMatrixException.h
 * Project:   ViSP2
 * Author:    Eric Marchand
 *
 * Version control
 * ===============
 *
 *  $Id: vpTime.h,v 1.4 2006-04-10 13:53:30 fspindle Exp $
 *
 * Description
 * ============
 * time management and measurement
 *
 * ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/


#ifndef TIME_HH
#define TIME_HH

/*!
  \file vpTime.h
  \brief Time management and measurement

*/

/*!
  \class vpTime
  \brief Time management and measurement

*/

class vpTime
{
public:
#if (defined(__Linux_) || defined(__SunOS_)|| defined(__Darwin_) )
  static double minTimeForUsleepCall;
#endif
  static double measureTimeSecond() ;
  static double measureTimeMs() ;
  static double measureTimeMicros() ;
  static int  wait(double t0, double t) ;
  static void wait(double t) ;
} ;

#endif
