/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE190_Integer_Overflow__int64_t_rand_multiply_54b.c
Label Definition File: CWE190_Integer_Overflow.label.xml
Template File: sources-sinks-54b.tmpl.c
*/
/*
 * @description
 * CWE: 190 Integer Overflow
 * BadSource: rand Set data to result of rand()
 * GoodSource: Set data to a small, non-zero number (two)
 * Sinks: multiply
 *    GoodSink: Ensure there will not be an overflow before multiplying data by 2
 *    BadSink : If data is positive, multiply by 2, which can cause an overflow
 * Flow Variant: 54 Data flow: data passed as an argument from one function through three others to a fifth; all five functions are in different source files
 *
 * */

#include "std_testcase.h"

#ifndef OMITBAD

/* bad function declaration */
void CWE190_Integer_Overflow__int64_t_rand_multiply_54c_badSink(int64_t data);

void CWE190_Integer_Overflow__int64_t_rand_multiply_54b_badSink(int64_t data)
{
    CWE190_Integer_Overflow__int64_t_rand_multiply_54c_badSink(data);
}

#endif /* OMITBAD */

