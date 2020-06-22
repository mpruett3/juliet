/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE190_Integer_Overflow__int_rand_postinc_53c.c
Label Definition File: CWE190_Integer_Overflow__int.label.xml
Template File: sources-sinks-53c.tmpl.c
*/
/*
 * @description
 * CWE: 190 Integer Overflow
 * BadSource: rand Set data to result of rand(), which may be zero
 * GoodSource: Set data to a small, non-zero number (two)
 * Sinks: increment
 *    GoodSink: Ensure there will not be an overflow before incrementing data
 *    BadSink : Increment data, which can cause an overflow
 * Flow Variant: 53 Data flow: data passed as an argument from one function through two others to a fourth; all four functions are in different source files
 *
 * */

#include "std_testcase.h"

#ifndef OMITBAD

/* bad function declaration */
void CWE190_Integer_Overflow__int_rand_postinc_53d_badSink(int data);

void CWE190_Integer_Overflow__int_rand_postinc_53c_badSink(int data)
{
    CWE190_Integer_Overflow__int_rand_postinc_53d_badSink(data);
}

#endif /* OMITBAD */

