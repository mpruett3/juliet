/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE190_Integer_Overflow__int_max_add_06.c
Label Definition File: CWE190_Integer_Overflow__int.label.xml
Template File: sources-sinks-06.tmpl.c
*/
/*
 * @description
 * CWE: 190 Integer Overflow
 * BadSource: max Set data to the max value for int
 * GoodSource: Set data to a small, non-zero number (two)
 * Sinks: add
 *    GoodSink: Ensure there will not be an overflow before adding 1 to data
 *    BadSink : Add 1 to data, which can cause an overflow
 * Flow Variant: 06 Control flow: if(STATIC_CONST_FIVE==5) and if(STATIC_CONST_FIVE!=5)
 *
 * */

#include "std_testcase.h"

/* The variable below is declared "const", so a tool should be able
   to identify that reads of this will always give its initialized
   value. */
static const int STATIC_CONST_FIVE = 5;

#ifndef OMITBAD

void CWE190_Integer_Overflow__int_max_add_06_bad()
{
    int data;
    /* Initialize data */
    data = 0;
    if(STATIC_CONST_FIVE==5)
    {
        /* POTENTIAL FLAW: Use the maximum value for this type */
        data = INT_MAX;
    }
    if(STATIC_CONST_FIVE==5)
    {
        {
            /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
            int result = data + 1;
            printIntLine(result);
        }
    }
}

#endif /* OMITBAD */


/* Below is the main(). It is only used when building this testcase on
   its own for testing or for building a binary to use in testing binary
   analysis tools. It is not used when compiling all the testcases as one
   application, which is how source code analysis tools are tested. */

#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    /* seed randomness */
    srand( (unsigned)time(NULL) );
#ifndef OMITBAD
    printLine("Calling bad()...");
    CWE190_Integer_Overflow__int_max_add_06_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

#endif
