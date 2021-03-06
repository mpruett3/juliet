/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE190_Integer_Overflow__char_rand_preinc_52c.c
Label Definition File: CWE190_Integer_Overflow.label.xml
Template File: sources-sinks-52c.tmpl.c
*/
/*
 * @description
 * CWE: 190 Integer Overflow
 * BadSource: rand Set data to result of rand()
 * GoodSource: Set data to a small, non-zero number (two)
 * Sinks: increment
 *    GoodSink: Ensure there will not be an overflow before incrementing data
 *    BadSink : Increment data, which can cause an overflow
 * Flow Variant: 52 Data flow: data passed as an argument from one function to another to another in three different source files
 *
 * */

#include "std_testcase.h"

#ifndef OMITBAD

void CWE190_Integer_Overflow__char_rand_preinc_52c_badSink(char data)
{
    {
        /* POTENTIAL FLAW: Incrementing data could cause an overflow */
        ++data;
        char result = data;
        printHexCharLine(result);
    }
}

#endif /* OMITBAD */

