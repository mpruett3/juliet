/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE190_Integer_Overflow__char_fscanf_postinc_63b.c
Label Definition File: CWE190_Integer_Overflow.label.xml
Template File: sources-sinks-63b.tmpl.c
*/
/*
 * @description
 * CWE: 190 Integer Overflow
 * BadSource: fscanf Read data from the console using fscanf()
 * GoodSource: Set data to a small, non-zero number (two)
 * Sinks: increment
 *    GoodSink: Ensure there will not be an overflow before incrementing data
 *    BadSink : Increment data, which can cause an overflow
 * Flow Variant: 63 Data flow: pointer to data passed from one function to another in different source files
 *
 * */

#include "std_testcase.h"

#ifndef OMITBAD

void CWE190_Integer_Overflow__char_fscanf_postinc_63b_badSink(char * dataPtr)
{
    char data = *dataPtr;
    {
        /* POTENTIAL FLAW: Incrementing data could cause an overflow */
        data++;
        char result = data;
        printHexCharLine(result);
    }
}

#endif /* OMITBAD */

