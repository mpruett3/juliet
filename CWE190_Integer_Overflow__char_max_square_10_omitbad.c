/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE190_Integer_Overflow__char_max_square_10.c
Label Definition File: CWE190_Integer_Overflow.label.xml
Template File: sources-sinks-10.tmpl.c
*/
/*
 * @description
 * CWE: 190 Integer Overflow
 * BadSource: max Set data to the max value for char
 * GoodSource: Set data to a small, non-zero number (two)
 * Sinks: square
 *    GoodSink: Ensure there will not be an overflow before squaring data
 *    BadSink : Square data, which can lead to overflow
 * Flow Variant: 10 Control flow: if(globalTrue) and if(globalFalse)
 *
 * */

#include "std_testcase.h"

#include <math.h>


#ifndef OMITGOOD

/* goodB2G1() - use badsource and goodsink by changing the second globalTrue to globalFalse */
static void goodB2G1()
{
    char data;
    data = ' ';
    if(globalTrue)
    {
        /* POTENTIAL FLAW: Use the maximum size of the data type */
        data = CHAR_MAX;
    }
    if(globalFalse)
    {
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
    }
    else
    {
        /* FIX: Add a check to prevent an overflow from occurring */
        if (abs((long)data) <= (long)sqrt((double)CHAR_MAX))
        {
            char result = data * data;
            printHexCharLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}

/* goodB2G2() - use badsource and goodsink by reversing the blocks in the second if */
static void goodB2G2()
{
    char data;
    data = ' ';
    if(globalTrue)
    {
        /* POTENTIAL FLAW: Use the maximum size of the data type */
        data = CHAR_MAX;
    }
    if(globalTrue)
    {
        /* FIX: Add a check to prevent an overflow from occurring */
        if (abs((long)data) <= (long)sqrt((double)CHAR_MAX))
        {
            char result = data * data;
            printHexCharLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}

/* goodG2B1() - use goodsource and badsink by changing the first globalTrue to globalFalse */
static void goodG2B1()
{
    char data;
    data = ' ';
    if(globalFalse)
    {
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
    }
    else
    {
        /* FIX: Use a small, non-zero value that will not cause an overflow in the sinks */
        data = 2;
    }
    if(globalTrue)
    {
        {
            /* POTENTIAL FLAW: if (data*data) > CHAR_MAX, this will overflow */
            char result = data * data;
            printHexCharLine(result);
        }
    }
}

/* goodG2B2() - use goodsource and badsink by reversing the blocks in the first if */
static void goodG2B2()
{
    char data;
    data = ' ';
    if(globalTrue)
    {
        /* FIX: Use a small, non-zero value that will not cause an overflow in the sinks */
        data = 2;
    }
    if(globalTrue)
    {
        {
            /* POTENTIAL FLAW: if (data*data) > CHAR_MAX, this will overflow */
            char result = data * data;
            printHexCharLine(result);
        }
    }
}

void CWE190_Integer_Overflow__char_max_square_10_good()
{
    goodB2G1();
    goodB2G2();
    goodG2B1();
    goodG2B2();
}

#endif /* OMITGOOD */

/* Below is the main(). It is only used when building this testcase on
   its own for testing or for building a binary to use in testing binary
   analysis tools. It is not used when compiling all the testcases as one
   application, which is how source code analysis tools are tested. */

#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    /* seed randomness */
    srand( (unsigned)time(NULL) );
#ifndef OMITGOOD
    printLine("Calling good()...");
    CWE190_Integer_Overflow__char_max_square_10_good();
    printLine("Finished good()");
#endif /* OMITGOOD */
    return 0;
}

#endif
