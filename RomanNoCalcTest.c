/*
 * DO NOT EDIT THIS FILE. Generated by checkmk.
 * Edit the original source file "RomanNoCalcTest.check" instead.
 */

#include <check.h>

#line 1 "RomanNoCalcTest.check"
#include "IpNumberCheck.h"
#include "RomanToDecimal.h"
#include "AddOrSub.h"
#include "DecimalToRoman.h"
#include<stdlib.h>
char RomanNo[20];
char RomanNo1[] = "MCDLV";
char RomanNo2[] = "MXLVI";
char RomanNo3[] = "IV";
char *c1;
char *c2;
char *c3;
//Visit TestPlan.txt for more details about the tests
//Test-1 
START_TEST(whenIpNumberCheckispassedIitReturnsOne)
{
#line 16
	
	RomanNo[0] = 'I';
	ck_assert_int_eq(IpCheck(RomanNo),1);

//Test-1-1
}
END_TEST

START_TEST(whenIpNumberCheckispassedVitReturnsOne)
{
#line 22
	
	RomanNo[0] = 'V';
	ck_assert_int_eq(IpCheck(RomanNo),1);

//Test-1-2
}
END_TEST

START_TEST(whenIpNumberCheckispassedXitReturnsOne)
{
#line 28
	
	RomanNo[0] = 'X';
	ck_assert_int_eq(IpCheck(RomanNo),1);

//Test-1-3
}
END_TEST

START_TEST(whenIpNumberCheckispassedLitReturnsOne)
{
#line 34
	
	RomanNo[0] = 'L';
	ck_assert_int_eq(IpCheck(RomanNo),1);

//Test-1-4
}
END_TEST

START_TEST(whenIpNumberCheckispassedCitReturnsOne)
{
#line 40
	
	RomanNo[0] = 'C';
	ck_assert_int_eq(IpCheck(RomanNo),1);

//Test-1-5
}
END_TEST

START_TEST(whenIpNumberCheckispassedDitReturnsOne)
{
#line 46
	
	RomanNo[0] = 'D';
	ck_assert_int_eq(IpCheck(RomanNo),1);

//Test-1-6
}
END_TEST

START_TEST(whenIpNumberCheckispassedMitReturnsOne)
{
#line 52
	
	RomanNo[0] = 'M';
	ck_assert_int_eq(IpCheck(RomanNo),1);

//Test-2
}
END_TEST

START_TEST(whenIpNumberCheckIsPassedRomanNumberStringItReturnsOne)
{
#line 58
	
	ck_assert_int_eq(IpCheck(RomanNo1),1);

//Test-3 
}
END_TEST

START_TEST(whenRomanToDecimalIsPassedIitReturnsOne)
{
#line 63
	
	RomanNo[0] = 'I';
	ck_assert_int_eq(RomanToDecimal(RomanNo),1);

//Test-3-1
}
END_TEST

START_TEST(whenRomanToDecimalIsPassedVitReturnsFive)
{
#line 69
	
	RomanNo[0] = 'V';
	ck_assert_int_eq(RomanToDecimal(RomanNo),5);

//Test-3-2
}
END_TEST

START_TEST(whenRomanToDecimalIsPassedXitReturnsTen)
{
#line 75
	
	RomanNo[0] = 'X';
	ck_assert_int_eq(RomanToDecimal(RomanNo),10);

//Test-3-3
}
END_TEST

START_TEST(whenRomanToDecimalIsPassedLitReturnsFifty)
{
#line 81
	
	RomanNo[0] = 'L';
	ck_assert_int_eq(RomanToDecimal(RomanNo),50);

//Test-3-4
}
END_TEST

START_TEST(whenRomanToDecimalIsPassedCitReturnsHundred)
{
#line 87
	
	RomanNo[0] = 'C';
	ck_assert_int_eq(RomanToDecimal(RomanNo),100);

//Test-3-5
}
END_TEST

START_TEST(whenRomanToDecimalIsPassedDitReturnsFiveHundred)
{
#line 93
	
	RomanNo[0] = 'D';
	ck_assert_int_eq(RomanToDecimal(RomanNo),500);

//Test-3-6
}
END_TEST

START_TEST(whenRomanToDecimalIsPassedMitReturnsThousand)
{
#line 99
	
	RomanNo[0] = 'M';
	ck_assert_int_eq(RomanToDecimal(RomanNo),1000);

//Test-4
}
END_TEST

START_TEST(whenRomanToDecimalIsPassedStrigItShouldReturnAdditionOfEachCharValue)
{
#line 105

	ck_assert_int_eq(RomanToDecimal(RomanNo1),1455);

//Test-5
}
END_TEST

START_TEST(whenRomanToDecimalIsPassedIVItShouldReturnFour)
{
#line 110

	ck_assert_int_eq(RomanToDecimal(RomanNo3),4);

//Test-6
}
END_TEST

START_TEST(whenAddIsPassedTwoValuesItReturnsItAddition)
{
#line 115

	ck_assert_int_eq(Add(RomanToDecimal(RomanNo1),RomanToDecimal(RomanNo2)),2501);

//Test-7
}
END_TEST

START_TEST(whenSubIsPassedTwoValuesItReturnsItSubtraction)
{
#line 120

	ck_assert_int_eq(Sub(RomanToDecimal(RomanNo1),RomanToDecimal(RomanNo2)),409);

//Test-8
}
END_TEST

START_TEST(whenSubIsPassedTwoValuesItReturnsPositiveValueOfItsSubtraction)
{
#line 125
//Where first value is less then second value							

	ck_assert_int_eq(Sub(RomanToDecimal(RomanNo2),RomanToDecimal(RomanNo1)),409);

//Test-9
}
END_TEST

START_TEST(whenDecimalToRomanIsPassedOneItShouldReturnI)
{
#line 131
	
	c1 = (char *)malloc(30);
	c1 = DecimalToRoman(1);
	ck_assert_str_eq(c1,"I");

//Test-9-1
}
END_TEST

START_TEST(whenDecimalToRomanIsPassedTwoItShouldReturnII)
{
#line 138
	
	c1 = (char *)malloc(30);
	c1 = DecimalToRoman(2);
	ck_assert_str_eq(c1,"II");

//Test-9-2
}
END_TEST

START_TEST(whenDecimalToRomanIsPassedThreeItShouldReturnIII)
{
#line 145
	
	c1 = (char *)malloc(30);
	c1 = DecimalToRoman(3);
	ck_assert_str_eq(c1,"III");

//Test-9-3
}
END_TEST

START_TEST(whenDecimalToRomanIsPassedFourItShouldReturnIV)
{
#line 152
	
	c1 = (char *)malloc(30);
	c1 = DecimalToRoman(4);
	ck_assert_str_eq(c1,"IV");

//Test-9-4
}
END_TEST

START_TEST(whenDecimalToRomanIsPassedFiveItShouldReturnV)
{
#line 159
	
	c1 = (char *)malloc(30);
	c1 = DecimalToRoman(5);
	ck_assert_str_eq(c1,"V");

//Test-9-5
}
END_TEST

START_TEST(whenDecimalToRomanIsPassedSixItShouldReturnVI)
{
#line 166
	
	c1 = (char *)malloc(30);
	c1 = DecimalToRoman(6);
	ck_assert_str_eq(c1,"VI");

//Test-9-6
}
END_TEST

START_TEST(whenDecimalToRomanIsPassedSevenItShouldReturnVII)
{
#line 173
	
	c1 = (char *)malloc(30);
	c1 = DecimalToRoman(7);
	ck_assert_str_eq(c1,"VII");

//Test-9-7
}
END_TEST

START_TEST(whenDecimalToRomanIsPassedEightItShouldReturnVIII)
{
#line 180
	
	c1 = (char *)malloc(30);
	c1 = DecimalToRoman(8);
	ck_assert_str_eq(c1,"VIII");

//Test-9-8
}
END_TEST

START_TEST(whenDecimalToRomanIsPassedNineItShouldReturnIX)
{
#line 187
	
	c1 = (char *)malloc(30);
	c1 = DecimalToRoman(9);
	ck_assert_str_eq(c1,"IX");

//Test-10
}
END_TEST

START_TEST(whenDecimalToRomanIsPassedTenItShouldReturnX)
{
#line 194
	
	c2 = (char *)malloc(30);
	c2 = DecimalToRoman(10);
	ck_assert_str_eq(c2,"X");
	
//Test-10-1
}
END_TEST

START_TEST(whenDecimalToRomanIsPassedTwentyItShouldReturnXX)
{
#line 201
	
	c2 = (char *)malloc(30);
	c2 = DecimalToRoman(20);
	ck_assert_str_eq(c2,"XX");

//Test-10-2
}
END_TEST

START_TEST(whenDecimalToRomanIsPassedThirtyItShouldReturnXXX)
{
#line 208
	
	c2 = (char *)malloc(30);
	c2 = DecimalToRoman(30);
	ck_assert_str_eq(c2,"XXX");	

//Test-10-3
}
END_TEST

START_TEST(whenDecimalToRomanIsPassedFourtyItShouldReturnXL)
{
#line 215
	
	c2 = (char *)malloc(30);
	c2 = DecimalToRoman(40);
	ck_assert_str_eq(c2,"XL");	

//Test-10-4
}
END_TEST

START_TEST(whenDecimalToRomanIsPassedFiftyItShouldReturnL)
{
#line 222
	
	c2 = (char *)malloc(30);
	c2 = DecimalToRoman(50);
	ck_assert_str_eq(c2,"L");

//Test-10-5
}
END_TEST

START_TEST(whenDecimalToRomanIsPassedSixtyItShouldReturnLX)
{
#line 229
	
	c2 = (char *)malloc(30);
	c2 = DecimalToRoman(60);
	ck_assert_str_eq(c2,"LX");	

//Test-10-6
}
END_TEST

START_TEST(whenDecimalToRomanIsPassedSeventyItShouldReturnLXX)
{
#line 236
	
	c2 = (char *)malloc(30);
	c2 = DecimalToRoman(70);
	ck_assert_str_eq(c2,"LXX");	

//Test-10-7
}
END_TEST

START_TEST(whenDecimalToRomanIsPassedEightyItShouldReturnLXXX)
{
#line 243
	
	c2 = (char *)malloc(30);
	c2 = DecimalToRoman(80);
	ck_assert_str_eq(c2,"LXXX");

//Test-10-8
}
END_TEST

START_TEST(whenDecimalToRomanIsPassedNintyItShouldReturnXC)
{
#line 250
	
	c2 = (char *)malloc(30);
	c2 = DecimalToRoman(90);
	ck_assert_str_eq(c2,"XC");

//Test-11
}
END_TEST

START_TEST(whenDecimalToRomanIsPassedElevenItShouldReturnXI)
{
#line 257
	
	c2 = (char *)malloc(30);
	c2 = DecimalToRoman(11);
	ck_assert_str_eq(c2,"XI");

//Test-12
}
END_TEST

START_TEST(whenDecimalToRomanIsPassedHundredItShouldReturnC)
{
#line 264
	
	c3 = (char *)malloc(30);
	c3 = DecimalToRoman(100);
	ck_assert_str_eq(c3,"C");

//Test-12-1
}
END_TEST

START_TEST(whenDecimalToRomanIsPassedTwoHundredItShouldReturnCC)
{
#line 271
	
	c3 = (char *)malloc(30);
	c3 = DecimalToRoman(200);
	ck_assert_str_eq(c3,"CC");

//Test-12-2
}
END_TEST

START_TEST(whenDecimalToRomanIsPassedThreeHundredItShouldReturnCCC)
{
#line 278
	
	c3 = (char *)malloc(30);
	c3 = DecimalToRoman(300);
	ck_assert_str_eq(c3,"CCC");

//Test-12-3
}
END_TEST

START_TEST(whenDecimalToRomanIsPassedFourHundredItShouldReturnCD)
{
#line 285
	
	c3 = (char *)malloc(30);
	c3 = DecimalToRoman(400);
	ck_assert_str_eq(c3,"CD");

//Test-12-4
}
END_TEST

START_TEST(whenDecimalToRomanIsPassedFiveHundredItShouldReturnD)
{
#line 292
	
	c3 = (char *)malloc(30);
	c3 = DecimalToRoman(500);
	ck_assert_str_eq(c3,"D");

//Test-12-5
}
END_TEST

START_TEST(whenDecimalToRomanIsPassedSixHundredItShouldReturnDC)
{
#line 299
	
	c3 = (char *)malloc(30);
	c3 = DecimalToRoman(600);
	ck_assert_str_eq(c3,"DC");

//Test-12-6
}
END_TEST

START_TEST(whenDecimalToRomanIsPassedSevenHundredItShouldReturnDCC)
{
#line 306
	
	c3 = (char *)malloc(30);
	c3 = DecimalToRoman(700);
	ck_assert_str_eq(c3,"DCC");

//Test-12-7
}
END_TEST

START_TEST(whenDecimalToRomanIsPassedEightxHundredItShouldReturnDCCC)
{
#line 313
	
	c3 = (char *)malloc(30);
	c3 = DecimalToRoman(800);
	ck_assert_str_eq(c3,"DCCC");

//Test-12-8
}
END_TEST

START_TEST(whenDecimalToRomanIsPassedNineHundredItShouldReturnCM)
{
#line 320
	
	c3 = (char *)malloc(30);
	c3 = DecimalToRoman(900);
	ck_assert_str_eq(c3,"CM");

//Test-13
}
END_TEST

START_TEST(whenDecimalToRomanIsPassed111ItShouldReturnCXI)
{
#line 327
	
	c3 = (char *)malloc(30);
	c3 = DecimalToRoman(111);
	ck_assert_str_eq(c3,"CXI");

//Test-13
}
END_TEST

START_TEST(whenDecimalToRomanIsPassed999ItShouldReturnCMXCIX)
{
#line 334
	
	c3 = (char *)malloc(30);
	c3 = DecimalToRoman(999);
	ck_assert_str_eq(c3,"CMXCIX");	

//Test-14
}
END_TEST

START_TEST(whenDecimalToRomanIsPassed1000ItShouldReturnM)
{
#line 341
	
	c3 = (char *)malloc(30);
	c3 = DecimalToRoman(1000);
	ck_assert_str_eq(c3,"M");

//Test-14-1
}
END_TEST

START_TEST(whenDecimalToRomanIsPassed2000ItShouldReturnMM)
{
#line 348
	
	c3 = (char *)malloc(30);
	c3 = DecimalToRoman(2000);
	ck_assert_str_eq(c3,"MM");

//Test-14-2
}
END_TEST

START_TEST(whenDecimalToRomanIsPassed3000ItShouldReturnMMM)
{
#line 355
	
	c3 = (char *)malloc(30);
	c3 = DecimalToRoman(3000);
	ck_assert_str_eq(c3,"MMM");

//Test-14-3
}
END_TEST

START_TEST(whenDecimalToRomanIsPassed9000ItShouldReturnMMMMMMMMM)
{
#line 362
	
	c3 = (char *)malloc(30);
	c3 = DecimalToRoman(9000);
	ck_assert_str_eq(c3,"MMMMMMMMM");	

//Test-15
}
END_TEST

START_TEST(whenDecimalToRomanIsPassed1112ItShouldReturnMCXII)
{
#line 369
	
	c3 = (char *)malloc(30);
	c3 = DecimalToRoman(1112);
	ck_assert_str_eq(c3,"MCXII");

//Test-15-1
}
END_TEST

START_TEST(whenDecimalToRomanIsPassed4768ItShouldReturnMMMMDCCLXVIII)
{
#line 376
	
	c3 = (char *)malloc(30);
	c3 = DecimalToRoman(4768);
	ck_assert_str_eq(c3,"MMMMDCCLXVIII");
	

		
}
END_TEST

int main(void)
{
    Suite *s1 = suite_create("Core");
    TCase *tc1_1 = tcase_create("Core");
    SRunner *sr = srunner_create(s1);
    int nf;

    suite_add_tcase(s1, tc1_1);
    tcase_add_test(tc1_1, whenIpNumberCheckispassedIitReturnsOne);
    tcase_add_test(tc1_1, whenIpNumberCheckispassedVitReturnsOne);
    tcase_add_test(tc1_1, whenIpNumberCheckispassedXitReturnsOne);
    tcase_add_test(tc1_1, whenIpNumberCheckispassedLitReturnsOne);
    tcase_add_test(tc1_1, whenIpNumberCheckispassedCitReturnsOne);
    tcase_add_test(tc1_1, whenIpNumberCheckispassedDitReturnsOne);
    tcase_add_test(tc1_1, whenIpNumberCheckispassedMitReturnsOne);
    tcase_add_test(tc1_1, whenIpNumberCheckIsPassedRomanNumberStringItReturnsOne);
    tcase_add_test(tc1_1, whenRomanToDecimalIsPassedIitReturnsOne);
    tcase_add_test(tc1_1, whenRomanToDecimalIsPassedVitReturnsFive);
    tcase_add_test(tc1_1, whenRomanToDecimalIsPassedXitReturnsTen);
    tcase_add_test(tc1_1, whenRomanToDecimalIsPassedLitReturnsFifty);
    tcase_add_test(tc1_1, whenRomanToDecimalIsPassedCitReturnsHundred);
    tcase_add_test(tc1_1, whenRomanToDecimalIsPassedDitReturnsFiveHundred);
    tcase_add_test(tc1_1, whenRomanToDecimalIsPassedMitReturnsThousand);
    tcase_add_test(tc1_1, whenRomanToDecimalIsPassedStrigItShouldReturnAdditionOfEachCharValue);
    tcase_add_test(tc1_1, whenRomanToDecimalIsPassedIVItShouldReturnFour);
    tcase_add_test(tc1_1, whenAddIsPassedTwoValuesItReturnsItAddition);
    tcase_add_test(tc1_1, whenSubIsPassedTwoValuesItReturnsItSubtraction);
    tcase_add_test(tc1_1, whenSubIsPassedTwoValuesItReturnsPositiveValueOfItsSubtraction);
    tcase_add_test(tc1_1, whenDecimalToRomanIsPassedOneItShouldReturnI);
    tcase_add_test(tc1_1, whenDecimalToRomanIsPassedTwoItShouldReturnII);
    tcase_add_test(tc1_1, whenDecimalToRomanIsPassedThreeItShouldReturnIII);
    tcase_add_test(tc1_1, whenDecimalToRomanIsPassedFourItShouldReturnIV);
    tcase_add_test(tc1_1, whenDecimalToRomanIsPassedFiveItShouldReturnV);
    tcase_add_test(tc1_1, whenDecimalToRomanIsPassedSixItShouldReturnVI);
    tcase_add_test(tc1_1, whenDecimalToRomanIsPassedSevenItShouldReturnVII);
    tcase_add_test(tc1_1, whenDecimalToRomanIsPassedEightItShouldReturnVIII);
    tcase_add_test(tc1_1, whenDecimalToRomanIsPassedNineItShouldReturnIX);
    tcase_add_test(tc1_1, whenDecimalToRomanIsPassedTenItShouldReturnX);
    tcase_add_test(tc1_1, whenDecimalToRomanIsPassedTwentyItShouldReturnXX);
    tcase_add_test(tc1_1, whenDecimalToRomanIsPassedThirtyItShouldReturnXXX);
    tcase_add_test(tc1_1, whenDecimalToRomanIsPassedFourtyItShouldReturnXL);
    tcase_add_test(tc1_1, whenDecimalToRomanIsPassedFiftyItShouldReturnL);
    tcase_add_test(tc1_1, whenDecimalToRomanIsPassedSixtyItShouldReturnLX);
    tcase_add_test(tc1_1, whenDecimalToRomanIsPassedSeventyItShouldReturnLXX);
    tcase_add_test(tc1_1, whenDecimalToRomanIsPassedEightyItShouldReturnLXXX);
    tcase_add_test(tc1_1, whenDecimalToRomanIsPassedNintyItShouldReturnXC);
    tcase_add_test(tc1_1, whenDecimalToRomanIsPassedElevenItShouldReturnXI);
    tcase_add_test(tc1_1, whenDecimalToRomanIsPassedHundredItShouldReturnC);
    tcase_add_test(tc1_1, whenDecimalToRomanIsPassedTwoHundredItShouldReturnCC);
    tcase_add_test(tc1_1, whenDecimalToRomanIsPassedThreeHundredItShouldReturnCCC);
    tcase_add_test(tc1_1, whenDecimalToRomanIsPassedFourHundredItShouldReturnCD);
    tcase_add_test(tc1_1, whenDecimalToRomanIsPassedFiveHundredItShouldReturnD);
    tcase_add_test(tc1_1, whenDecimalToRomanIsPassedSixHundredItShouldReturnDC);
    tcase_add_test(tc1_1, whenDecimalToRomanIsPassedSevenHundredItShouldReturnDCC);
    tcase_add_test(tc1_1, whenDecimalToRomanIsPassedEightxHundredItShouldReturnDCCC);
    tcase_add_test(tc1_1, whenDecimalToRomanIsPassedNineHundredItShouldReturnCM);
    tcase_add_test(tc1_1, whenDecimalToRomanIsPassed111ItShouldReturnCXI);
    tcase_add_test(tc1_1, whenDecimalToRomanIsPassed999ItShouldReturnCMXCIX);
    tcase_add_test(tc1_1, whenDecimalToRomanIsPassed1000ItShouldReturnM);
    tcase_add_test(tc1_1, whenDecimalToRomanIsPassed2000ItShouldReturnMM);
    tcase_add_test(tc1_1, whenDecimalToRomanIsPassed3000ItShouldReturnMMM);
    tcase_add_test(tc1_1, whenDecimalToRomanIsPassed9000ItShouldReturnMMMMMMMMM);
    tcase_add_test(tc1_1, whenDecimalToRomanIsPassed1112ItShouldReturnMCXII);
    tcase_add_test(tc1_1, whenDecimalToRomanIsPassed4768ItShouldReturnMMMMDCCLXVIII);

    srunner_run_all(sr, CK_ENV);
    nf = srunner_ntests_failed(sr);
    srunner_free(sr);

    return nf == 0 ? 0 : 1;
}
