/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE190_Integer_Overflow__int64_t_max_preinc_54e.c
Label Definition File: CWE190_Integer_Overflow.label.xml
Template File: sources-sinks-54e.tmpl.c
*/
/*
 * @description
 * CWE: 190 Integer Overflow
 * BadSource: max Set data to the max value for int64_t
 * GoodSource: Set data to a small, non-zero number (two)
 * Sinks: increment
 *    GoodSink: Ensure there will not be an overflow before incrementing data
 *    BadSink : Increment data, which can cause an overflow
 * Flow Variant: 54 Data flow: data passed as an argument from one function through three others to a fifth; all five functions are in different source files
 *
 * */

#include "std_testcase.h"

#ifndef OMITBAD

void CWE190_Integer_Overflow__int64_t_max_preinc_54e_badSink(int64_t data)
{
    {
        /* POTENTIAL FLAW: Incrementing data could cause an overflow */
        ++data;
        int64_t result = data;
        printLongLongLine(result);
    }
}

#endif /* OMITBAD */

