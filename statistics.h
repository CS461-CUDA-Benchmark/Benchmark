/************************************************************************************************************************************
 * This branch has been deprecated. Please see "http://github.com/cuda-encryption-benchmarks/benchmark" for the non-deprecated code *
 ***********************************************************************************************************************************/


#ifndef statistics_H
#define statistics_H


#ifdef DEBUG
#define DEBUG_STATISTICS
#endif


#include <math.h>

#include "ccc/ccc.h"


/**	Takes an array of doubles and returns the harmonic mean.
 *	@out	mean: The harmonic mean of the specified values.
 */
exception_t* statistics_mean_harmonic_double(double* values, int value_count, double* mean);


/**	Takes an array of doubles and returns the sample mean.
 *	@out	mean: The sample mean of the specified values.
 */
exception_t* statistics_mean_sample_double(double* values, int value_count, double* mean);


/**	Takes an array of doubles and returns the standard deviation as a double.
 *	Note that some precision may be lost due to floating-point rounding errors.
 *	@optional	mean: The mean of the specified values; NULL to ignore.
 *	@out	standard_deviation: The standard deviation of the specified values.
 *	@return	NULL on success, exception_t* on failure.
 */
exception_t* statistics_standard_deviation_double(double* values, int value_count, double* mean, double* standard_deviation);


#endif //statistics_H
