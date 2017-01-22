/*
 * DO NOT EDIT THIS FILE. Generated by checkmk.
 * Edit the original source file "RomanNoCalcTest.check" instead.
 */

#include <check.h>

#line 1 "RomanNoCalcTest.check"
#include "IpNumberCheck.h"
char RomanNo[20];
//Visit TestPlan.txt for more details about the tests
//Test-1 
START_TEST(whenIpNumberCheckispassedIitReturnsOne)
{
#line 6
	
	RomanNo[0] = 'I';
	ck_assert_int_eq(IpCheck(RomanNo),1);

//Test-1-1
}
END_TEST

START_TEST(whenIpNumberCheckispassedVitReturnsOne)
{
#line 12
	
	RomanNo[0] = 'V';
	ck_assert_int_eq(IpCheck(RomanNo),1);

//Test-1-2
}
END_TEST

START_TEST(whenIpNumberCheckispassedXitReturnsOne)
{
#line 18
	
	RomanNo[0] = 'X';
	ck_assert_int_eq(IpCheck(RomanNo),1);

//Test-1-3
}
END_TEST

START_TEST(whenIpNumberCheckispassedLitReturnsOne)
{
#line 24
	
	RomanNo[0] = 'L';
	ck_assert_int_eq(IpCheck(RomanNo),1);

//Test-1-4
}
END_TEST

START_TEST(whenIpNumberCheckispassedCitReturnsOne)
{
#line 30
	
	RomanNo[0] = 'C';
	ck_assert_int_eq(IpCheck(RomanNo),1);

//Test-1-5
}
END_TEST

START_TEST(whenIpNumberCheckispassedDitReturnsOne)
{
#line 36
	
	RomanNo[0] = 'D';
	ck_assert_int_eq(IpCheck(RomanNo),1);



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

    srunner_run_all(sr, CK_ENV);
    nf = srunner_ntests_failed(sr);
    srunner_free(sr);

    return nf == 0 ? 0 : 1;
}
