/* cblas.h
   $Revision: 273 $ $Date: 2006-09-04 15:59:04 -0700 (Mon, 04 Sep 2006) $

   ----------------------------------------------------------------------
   This file is part of BCLS (Bound-Constrained Least Squares).

   Copyright (C) 2006 Michael P. Friedlander, Department of Computer
   Science, University of British Columbia, Canada. All rights
   reserved. E-mail: <mpf@cs.ubc.ca>.
   
   BCLS is free software; you can redistribute it and/or modify it
   under the terms of the GNU Lesser General Public License as
   published by the Free Software Foundation; either version 2.1 of the
   License, or (at your option) any later version.
   
   BCLS is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General
   Public License for more details.
   
   You should have received a copy of the GNU Lesser General Public
   License along with BCLS; if not, write to the Free Software
   Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301
   USA
   ----------------------------------------------------------------------
*/
/*!
   \file
   CBLAS library header file.
*/

#ifndef _CBLAS_H
#define _CBLAS_H

#include <math.h>
#include <stddef.h>

#define OFFSET(N, incX) ((incX) > 0 ?  0 : ((N) - 1) * (-(incX)))

void
cblas_daxpy(const int N, const double alpha, const double *X,
            const int incX, double *Y, const int incY);

void
cblas_dcopy(const int N, const double *X, const int incX, 
            double *Y, const int incY);


double
cblas_ddot(const int N, const double *X, const int incX,
           const double *Y, const int incY);

double
cblas_dnrm2(const int N, const double *X, const int incX);

void
cblas_dscal(const int N, const double alpha, double *X, const int incX);


#endif /* _CBLAS_H */
