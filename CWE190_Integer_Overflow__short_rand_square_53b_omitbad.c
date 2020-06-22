/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE190_Integer_Overflow__short_rand_square_53b.c
Label Definition File: CWE190_Integer_Overflow.label.xml
Template File: sources-sinks-53b.tmpl.c
*/
/*
 * @description
 * CWE: 190 Integer Overflow
 * BadSource: rand Set data to result of rand()
 * GoodSource: Set data to a small, non-zero number (two)
 * Sinks: square
 *    GoodSink: Ensure there will not be an overflow before squaring data
 *    BadSink : Square data, which can lead to overflow
 * Flow Variant: 53 Data flow: data passed as an argument from one function through two others to a fourth; all four functions are in different source files
 *
 * */

#include "std_testcase.h"

#include <math.h>


#ifndef OMITGOOD

/* goodG2B uses the GoodSource with the BadSink */
void CWE190_Integer_Overflow__short_rand_square_53c_goodG2BSink(short data);

void CWE190_Integer_Overflow__short_rand_square_53b_goodG2BSink(short data)
{
    CWE190_Integer_Overflow__short_rand_square_53c_goodG2BSink(data);
}

/* goodB2G uses the BadSource with the GoodSink */
void CWE190_Integer_Overflow__short_rand_square_53c_goodB2GSink(short data);

void CWE190_Integer_Overflow__short_rand_square_53b_goodB2GSink(short data)
{
    CWE190_Integer_Overflow__short_rand_square_53c_goodB2GSink(data);
}

#endif /* OMITGOOD */