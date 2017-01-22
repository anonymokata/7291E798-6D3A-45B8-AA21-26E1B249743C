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
========================================================================
Here we will use checkmk utility comes with check to generet c file of your test. Just save file containing your test code with any extension and the checkmk will generat c file with required main functions.

Use following command in my tutorial

"checkmk RomanNoCalcTest.check >RomanNoCalcTest.c"

Compile your test file with following command

"gcc -Wall -o RomanNoCalcTest IpNumberCheck.c RomanNoCalcTest.c -lcheck"

Run the executeable file with following command to test your result

"./RomanNoCalcTest"
