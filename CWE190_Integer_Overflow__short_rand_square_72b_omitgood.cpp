/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE190_Integer_Overflow__short_rand_square_72b.cpp
Label Definition File: CWE190_Integer_Overflow.label.xml
Template File: sources-sinks-72b.tmpl.cpp
*/
/*
 * @description
 * CWE: 190 Integer Overflow
 * BadSource: rand Set data to result of rand()
 * GoodSource: Set data to a small, non-zero number (two)
 * Sinks: square
 *    GoodSink: Ensure there will not be an overflow before squaring data
 *    BadSink : Square data, which can lead to overflow
 * Flow Variant: 72 Data flow: data passed in a vector from one function to another in different source files
 *
 * */

#include "std_testcase.h"
#include <vector>

#include <math.h>

using namespace std;

namespace CWE190_Integer_Overflow__short_rand_square_72
{

#ifndef OMITBAD

void badSink(vector<short> dataVector)
{
    /* copy data out of dataVector */
    short data = dataVector[2];
    {
        /* POTENTIAL FLAW: if (data*data) > SHRT_MAX, this will overflow */
        short result = data * data;
        printIntLine(result);
    }
}

#endif /* OMITBAD */


} /* close namespace */
