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

//Visit TestPlan.txt for more details about the tests
//Test-1 
START_TEST(whenIpNumberCheckispassedIitReturnsOne)
{
#line 14
	
	RomanNo[0] = 'I';
	ck_assert_int_eq(IpCheck(RomanNo),1);

//Test-1-1
}
END_TEST

START_TEST(whenIpNumberCheckispassedVitReturnsOne)
{
#line 20
	
	RomanNo[0] = 'V';
	ck_assert_int_eq(IpCheck(RomanNo),1);

//Test-1-2
}
END_TEST

START_TEST(whenIpNumberCheckispassedXitReturnsOne)
{
#line 26
	
	RomanNo[0] = 'X';
	ck_assert_int_eq(IpCheck(RomanNo),1);

//Test-1-3
}
END_TEST

START_TEST(whenIpNumberCheckispassedLitReturnsOne)
{
#line 32
	
	RomanNo[0] = 'L';
	ck_assert_int_eq(IpCheck(RomanNo),1);

//Test-1-4
}
END_TEST

START_TEST(whenIpNumberCheckispassedCitReturnsOne)
{
#line 38
	
	RomanNo[0] = 'C';
	ck_assert_int_eq(IpCheck(RomanNo),1);

//Test-1-5
}
END_TEST

START_TEST(whenIpNumberCheckispassedDitReturnsOne)
{
#line 44
	
	RomanNo[0] = 'D';
	ck_assert_int_eq(IpCheck(RomanNo),1);

//Test-1-6
}
END_TEST

START_TEST(whenIpNumberCheckispassedMitReturnsOne)
{
#line 50
	
	RomanNo[0] = 'M';
	ck_assert_int_eq(IpCheck(RomanNo),1);

//Test-2
}
END_TEST

START_TEST(whenIpNumberCheckIsPassedRomanNumberStringItReturnsOne)
{
#line 56
	
	ck_assert_int_eq(IpCheck(RomanNo1),1);

//Test-3 
}
END_TEST

START_TEST(whenRomanToDecimalIsPassedIitReturnsOne)
{
#line 61
	
	RomanNo[0] = 'I';
	ck_assert_int_eq(RomanToDecimal(RomanNo),1);

//Test-3-1
}
END_TEST

START_TEST(whenRomanToDecimalIsPassedVitReturnsFive)
{
#line 67
	
	RomanNo[0] = 'V';
	ck_assert_int_eq(RomanToDecimal(RomanNo),5);

//Test-3-2
}
END_TEST

START_TEST(whenRomanToDecimalIsPassedXitReturnsTen)
{
#line 73
	
	RomanNo[0] = 'X';
	ck_assert_int_eq(RomanToDecimal(RomanNo),10);

//Test-3-3
}
END_TEST

START_TEST(whenRomanToDecimalIsPassedLitReturnsFifty)
{
#line 79
	
	RomanNo[0] = 'L';
	ck_assert_int_eq(RomanToDecimal(RomanNo),50);

//Test-3-4
}
END_TEST

START_TEST(whenRomanToDecimalIsPassedCitReturnsHundred)
{
#line 85
	
	RomanNo[0] = 'C';
	ck_assert_int_eq(RomanToDecimal(RomanNo),100);

//Test-3-5
}
END_TEST

START_TEST(whenRomanToDecimalIsPassedDitReturnsFiveHundred)
{
#line 91
	
	RomanNo[0] = 'D';
	ck_assert_int_eq(RomanToDecimal(RomanNo),500);

//Test-3-6
}
END_TEST

START_TEST(whenRomanToDecimalIsPassedMitReturnsThousand)
{
#line 97
	
	RomanNo[0] = 'M';
	ck_assert_int_eq(RomanToDecimal(RomanNo),1000);

//Test-4
}
END_TEST

START_TEST(whenRomanToDecimalIsPassedStrigItShouldReturnAdditionOfEachCharValue)
{
#line 103

	ck_assert_int_eq(RomanToDecimal(RomanNo1),1455);

//Test-5
}
END_TEST

START_TEST(whenRomanToDecimalIsPassedIVItShouldReturnFour)
{
#line 108

	ck_assert_int_eq(RomanToDecimal(RomanNo3),4);

//Test-6
}
END_TEST

START_TEST(whenAddIsPassedTwoValuesItReturnsItAddition)
{
#line 113

	ck_assert_int_eq(Add(RomanToDecimal(RomanNo1),RomanToDecimal(RomanNo2)),2501);

//Test-7
}
END_TEST

START_TEST(whenSubIsPassedTwoValuesItReturnsItSubtraction)
{
#line 118

	ck_assert_int_eq(Sub(RomanToDecimal(RomanNo1),RomanToDecimal(RomanNo2)),409);

//Test-8
}
END_TEST

START_TEST(whenSubIsPassedTwoValuesItReturnsPositiveValueOfItsSubtraction)
{
#line 123
//Where first value is less then second value							

	ck_assert_int_eq(Sub(RomanToDecimal(RomanNo2),RomanToDecimal(RomanNo1)),409);

//Test-9
}
END_TEST

START_TEST(whenDecimalToRomanIsPassedOneItShouldReturnI)
{
#line 129
	char *c1;
	c1 = (char *)malloc(30);
	c1 = DecimalToRoman(1);
	ck_assert_str_eq(c1,"I");

//Test-9-1
}
END_TEST

START_TEST(whenDecimalToRomanIsPassedTwoItShouldReturnII)
{
#line 136
	char *c1;
	c1 = (char *)malloc(30);
	c1 = DecimalToRoman(2);
	ck_assert_str_eq(c1,"II");

//Test-9-2
}
END_TEST

START_TEST(whenDecimalToRomanIsPassedThreeItShouldReturnIII)
{
#line 143
	char *c1;
	c1 = (char *)malloc(30);
	c1 = DecimalToRoman(3);
	ck_assert_str_eq(c1,"III");

//Test-9-3
}
END_TEST

START_TEST(whenDecimalToRomanIsPassedFourItShouldReturnIV)
{
#line 150
	char *c1;
	c1 = (char *)malloc(30);
	c1 = DecimalToRoman(4);
	ck_assert_str_eq(c1,"IV");

//Test-9-4
}
END_TEST

START_TEST(whenDecimalToRomanIsPassedFiveItShouldReturnV)
{
#line 157
	char *c1;
	c1 = (char *)malloc(30);
	c1 = DecimalToRoman(5);
	ck_assert_str_eq(c1,"V");

//Test-9-5
}
END_TEST

START_TEST(whenDecimalToRomanIsPassedSixItShouldReturnVI)
{
#line 164
	char *c1;
	c1 = (char *)malloc(30);
	c1 = DecimalToRoman(6);
	ck_assert_str_eq(c1,"VI");

//Test-9-6
}
END_TEST

START_TEST(whenDecimalToRomanIsPassedSevenItShouldReturnVII)
{
#line 171
	char *c1;
	c1 = (char *)malloc(30);
	c1 = DecimalToRoman(7);
	ck_assert_str_eq(c1,"VII");

//Test-9-7
}
END_TEST

START_TEST(whenDecimalToRomanIsPassedEightItShouldReturnVIII)
{
#line 178
	char *c1;
	c1 = (char *)malloc(30);
	c1 = DecimalToRoman(8);
	ck_assert_str_eq(c1,"VIII");

//Test-9-9
}
END_TEST

START_TEST(whenDecimalToRomanIsPassedNineItShouldReturnIX)
{
#line 185
	char *c1;
	c1 = (char *)malloc(30);
	c1 = DecimalToRoman(9);
	ck_assert_str_eq(c1,"IX");

	

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

    srunner_run_all(sr, CK_ENV);
    nf = srunner_ntests_failed(sr);
    srunner_free(sr);

    return nf == 0 ? 0 : 1;
}
