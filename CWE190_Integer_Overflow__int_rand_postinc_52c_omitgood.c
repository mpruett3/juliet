/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE190_Integer_Overflow__int_rand_postinc_52c.c
Label Definition File: CWE190_Integer_Overflow__int.label.xml
Template File: sources-sinks-52c.tmpl.c
*/
/*
 * @description
 * CWE: 190 Integer Overflow
 * BadSource: rand Set data to result of rand(), which may be zero
 * GoodSource: Set data to a small, non-zero number (two)
 * Sinks: increment
 *    GoodSink: Ensure there will not be an overflow before incrementing data
 *    BadSink : Increment data, which can cause an overflow
 * Flow Variant: 52 Data flow: data passed as an argument from one function to another to another in three different source files
 *
 * */

#include "std_testcase.h"

#ifndef OMITBAD

void CWE190_Integer_Overflow__int_rand_postinc_52c_badSink(int data)
{
    {
        /* POTENTIAL FLAW: Incrementing data could cause an overflow */
        data++;
        int result = data;
        printIntLine(result);
    }
}

#endif /* OMITBAD */

