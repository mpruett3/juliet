/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE190_Integer_Overflow__int64_t_rand_square_73b.cpp
Label Definition File: CWE190_Integer_Overflow.label.xml
Template File: sources-sinks-73b.tmpl.cpp
*/
/*
 * @description
 * CWE: 190 Integer Overflow
 * BadSource: rand Set data to result of rand()
 * GoodSource: Set data to a small, non-zero number (two)
 * Sinks: square
 *    GoodSink: Ensure there will not be an overflow before squaring data
 *    BadSink : Square data, which can lead to overflow
 * Flow Variant: 73 Data flow: data passed in a list from one function to another in different source files
 *
 * */

#include "std_testcase.h"
#include <list>

#include <math.h>
#include <inttypes.h>

using namespace std;

namespace CWE190_Integer_Overflow__int64_t_rand_square_73
{

#ifndef OMITBAD

void badSink(list<int64_t> dataList)
{
    /* copy data out of dataList */
    int64_t data = dataList.back();
    {
        /* POTENTIAL FLAW: if (data*data) > LLONG_MAX, this will overflow */
        int64_t result = data * data;
        printLongLongLine(result);
    }
}

#endif /* OMITBAD */


} /* close namespace */
