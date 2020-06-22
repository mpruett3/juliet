/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE190_Integer_Overflow__char_max_add_68b.c
Label Definition File: CWE190_Integer_Overflow.label.xml
Template File: sources-sinks-68b.tmpl.c
*/
/*
 * @description
 * CWE: 190 Integer Overflow
 * BadSource: max Set data to the max value for char
 * GoodSource: Set data to a small, non-zero number (two)
 * Sinks: add
 *    GoodSink: Ensure there will not be an overflow before adding 1 to data
 *    BadSink : Add 1 to data, which can cause an overflow
 * Flow Variant: 68 Data flow: data passed as a global variable from one function to another in different source files
 *
 * */

#include "std_testcase.h"

extern char CWE190_Integer_Overflow__char_max_add_68_badData;
extern char CWE190_Integer_Overflow__char_max_add_68_goodG2BData;
extern char CWE190_Integer_Overflow__char_max_add_68_goodB2GData;

#ifndef OMITBAD

void CWE190_Integer_Overflow__char_max_add_68b_badSink()
{
    char data = CWE190_Integer_Overflow__char_max_add_68_badData;
    {
        /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
        char result = data + 1;
        printHexCharLine(result);
    }
}

#endif /* OMITBAD */

