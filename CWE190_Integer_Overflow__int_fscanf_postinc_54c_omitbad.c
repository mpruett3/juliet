/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE190_Integer_Overflow__int_fscanf_postinc_54c.c
Label Definition File: CWE190_Integer_Overflow__int.label.xml
Template File: sources-sinks-54c.tmpl.c
*/
/*
 * @description
 * CWE: 190 Integer Overflow
 * BadSource: fscanf Read data from the console using fscanf()
 * GoodSource: Set data to a small, non-zero number (two)
 * Sinks: increment
 *    GoodSink: Ensure there will not be an overflow before incrementing data
 *    BadSink : Increment data, which can cause an overflow
 * Flow Variant: 54 Data flow: data passed as an argument from one function through three others to a fifth; all five functions are in different source files
 *
 * */

#include "std_testcase.h"


#ifndef OMITGOOD

/* goodG2B uses the GoodSource with the BadSink */
void CWE190_Integer_Overflow__int_fscanf_postinc_54d_goodG2BSink(int data);

void CWE190_Integer_Overflow__int_fscanf_postinc_54c_goodG2BSink(int data)
{
    CWE190_Integer_Overflow__int_fscanf_postinc_54d_goodG2BSink(data);
}

/* goodB2G uses the BadSource with the GoodSink */
void CWE190_Integer_Overflow__int_fscanf_postinc_54d_goodB2GSink(int data);

void CWE190_Integer_Overflow__int_fscanf_postinc_54c_goodB2GSink(int data)
{
    CWE190_Integer_Overflow__int_fscanf_postinc_54d_goodB2GSink(data);
}

#endif /* OMITGOOD */
