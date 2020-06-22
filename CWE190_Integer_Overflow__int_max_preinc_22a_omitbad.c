/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE190_Integer_Overflow__int_max_preinc_22a.c
Label Definition File: CWE190_Integer_Overflow__int.label.xml
Template File: sources-sinks-22a.tmpl.c
*/
/*
 * @description
 * CWE: 190 Integer Overflow
 * BadSource: max Set data to the max value for int
 * GoodSource: Set data to a small, non-zero number (two)
 * Sinks: increment
 *    GoodSink: Ensure there will not be an overflow before incrementing data
 *    BadSink : Increment data, which can cause an overflow
 * Flow Variant: 22 Control flow: Flow controlled by value of a global variable. Sink functions are in a separate file from sources.
 *
 * */

#include "std_testcase.h"


#ifndef OMITGOOD

/* The global variables below are used to drive control flow in the sink functions. */
int CWE190_Integer_Overflow__int_max_preinc_22_goodB2G1Global = 0;
int CWE190_Integer_Overflow__int_max_preinc_22_goodB2G2Global = 0;
int CWE190_Integer_Overflow__int_max_preinc_22_goodG2BGlobal = 0;

/* goodB2G1() - use badsource and goodsink by setting the static variable to false instead of true */
void CWE190_Integer_Overflow__int_max_preinc_22_goodB2G1Sink(int data);

static void goodB2G1()
{
    int data;
    /* Initialize data */
    data = 0;
    /* POTENTIAL FLAW: Use the maximum value for this type */
    data = INT_MAX;
    CWE190_Integer_Overflow__int_max_preinc_22_goodB2G1Global = 0; /* false */
    CWE190_Integer_Overflow__int_max_preinc_22_goodB2G1Sink(data);
}

/* goodB2G2() - use badsource and goodsink by reversing the blocks in the if in the sink function */
void CWE190_Integer_Overflow__int_max_preinc_22_goodB2G2Sink(int data);

static void goodB2G2()
{
    int data;
    /* Initialize data */
    data = 0;
    /* POTENTIAL FLAW: Use the maximum value for this type */
    data = INT_MAX;
    CWE190_Integer_Overflow__int_max_preinc_22_goodB2G2Global = 1; /* true */
    CWE190_Integer_Overflow__int_max_preinc_22_goodB2G2Sink(data);
}

/* goodG2B() - use goodsource and badsink */
void CWE190_Integer_Overflow__int_max_preinc_22_goodG2BSink(int data);

static void goodG2B()
{
    int data;
    /* Initialize data */
    data = 0;
    /* FIX: Use a small, non-zero value that will not cause an integer overflow in the sinks */
    data = 2;
    CWE190_Integer_Overflow__int_max_preinc_22_goodG2BGlobal = 1; /* true */
    CWE190_Integer_Overflow__int_max_preinc_22_goodG2BSink(data);
}

void CWE190_Integer_Overflow__int_max_preinc_22_good()
{
    goodB2G1();
    goodB2G2();
    goodG2B();
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
    CWE190_Integer_Overflow__int_max_preinc_22_good();
    printLine("Finished good()");
#endif /* OMITGOOD */
    return 0;
}

#endif
