/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE190_Integer_Overflow__int64_t_fscanf_square_22b.c
Label Definition File: CWE190_Integer_Overflow.label.xml
Template File: sources-sinks-22b.tmpl.c
*/
/*
 * @description
 * CWE: 190 Integer Overflow
 * BadSource: fscanf Read data from the console using fscanf()
 * GoodSource: Set data to a small, non-zero number (two)
 * Sinks: square
 *    GoodSink: Ensure there will not be an overflow before squaring data
 *    BadSink : Square data, which can lead to overflow
 * Flow Variant: 22 Control flow: Flow controlled by value of a global variable. Sink functions are in a separate file from sources.
 *
 * */

#include "std_testcase.h"

#include <math.h>
#include <inttypes.h>

#ifndef OMITBAD

/* The global variable below is used to drive control flow in the sink function */
extern int CWE190_Integer_Overflow__int64_t_fscanf_square_22_badGlobal;

void CWE190_Integer_Overflow__int64_t_fscanf_square_22_badSink(int64_t data)
{
    if(CWE190_Integer_Overflow__int64_t_fscanf_square_22_badGlobal)
    {
        {
            /* POTENTIAL FLAW: if (data*data) > LLONG_MAX, this will overflow */
            int64_t result = data * data;
            printLongLongLine(result);
        }
    }
}

#endif /* OMITBAD */

