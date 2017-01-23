This Project is By Vivek Shah, Visit http://www.vivekkshah.com
=======================================================================
Roman Number Calc Project: By Vivek Shah
=======================================================================
Compiler: GCC
Unit testing Framework: Check 
=======================================================================
Problem Statement:

Develop Programm for addition and subtraction of Roman Numbers.You should follow Test driven development approach.

Environment:

OS : Ubuntu
Programming Language: C
Compiler: GCC
Unit tESTING Framework: Check (https://libcheck.github.io/check/)

Roman Number System Rules:

1. It can only consist of I,V,X,L,C,D,M which converts to 1,5,10,50,100,500,1000 respectively.

2. There are nothing like decimal or integrs in Roman number strings so inputs will be strings. 

3. In Roman number system if lesser numeral is placed before higher value number then its conversion to decimal would be >> Big Number - small number <<

4. For numeral I, X or C there should not be more then three consecutive I, X, or C i.e if "II" + "II" = "IV" not "IIII"
but "II" + 'I' = "III".

5. For numeral V, L or D there should not be two consecutive V, L, or D i.e if "V" + "V" = "X" not "VV".
========================================================================
Here we will use checkmk utility comes with check to generet c file of your test. Just save file containing your test code with any extension and the checkmk will generat c file with required main functions.

Use following command in my tutorial

"checkmk RomanNoCalcTest.check >RomanNoCalcTest.c"

Compile your test file with following command

"gcc -Wall -o RomanNoCalcTest IpNumberCheck.c RomanNoCalcTest.c -lcheck"

Run the executeable file with following command to test your result

"./RomanNoCalcTest"
