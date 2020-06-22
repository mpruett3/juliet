/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE190_Integer_Overflow__short_rand_square_67a.c
Label Definition File: CWE190_Integer_Overflow.label.xml
Template File: sources-sinks-67a.tmpl.c
*/
/*
 * @description
 * CWE: 190 Integer Overflow
 * BadSource: rand Set data to result of rand()
 * GoodSource: Set data to a small, non-zero number (two)
 * Sinks: square
 *    GoodSink: Ensure there will not be an overflow before squaring data
 *    BadSink : Square data, which can lead to overflow
 * Flow Variant: 67 Data flow: data passed in a struct from one function to another in different source files
 *
 * */

#include "std_testcase.h"

#include <math.h>

typedef struct _CWE190_Integer_Overflow__short_rand_square_67_structType
{
    short structFirst;
} CWE190_Integer_Overflow__short_rand_square_67_structType;

#ifndef OMITBAD

/* bad function declaration */
void CWE190_Integer_Overflow__short_rand_square_67b_badSink(CWE190_Integer_Overflow__short_rand_square_67_structType myStruct);

void CWE190_Integer_Overflow__short_rand_square_67_bad()
{
    short data;
    CWE190_Integer_Overflow__short_rand_square_67_structType myStruct;
    data = 0;
    /* POTENTIAL FLAW: Use a random value */
    data = (short)RAND32();
    myStruct.structFirst = data;
    CWE190_Integer_Overflow__short_rand_square_67b_badSink(myStruct);
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
    CWE190_Integer_Overflow__short_rand_square_67_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

#endif
