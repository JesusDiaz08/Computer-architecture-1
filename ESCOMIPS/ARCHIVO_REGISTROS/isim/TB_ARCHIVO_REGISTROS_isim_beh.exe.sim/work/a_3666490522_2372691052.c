/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/erick/Documentos/Software/Xilinx/ARCHIVO_REGISTROS/TB_ARCHIVO_REGISTROS.vhd";
extern char *STD_TEXTIO;
extern char *IEEE_P_3564397177;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
void ieee_p_3564397177_sub_1675032430035817134_91900896(char *, char *, char *, char *);
void ieee_p_3564397177_sub_2258168291854845616_91900896(char *, char *, char *, char *, char *, unsigned char , int );
void ieee_p_3564397177_sub_2518136782373626985_91900896(char *, char *, char *, unsigned char , unsigned char , int );
void ieee_p_3564397177_sub_2863756418437601506_91900896(char *, char *, char *, char *, char *);
void ieee_p_3564397177_sub_2863978933202788330_91900896(char *, char *, char *, char *, char *);


static void work_a_3666490522_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 5592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 6240);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 2928U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 5400);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 6240);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 2928U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 5400);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_3666490522_2372691052_p_1(char *t0)
{
    char t5[16];
    char t10[8];
    char t11[8];
    char t12[8];
    char t13[8];
    char t14[8];
    char t15[8];
    char t16[8];
    char t17[8];
    char t18[8];
    char t23[8];
    char t24[8];
    char t25[8];
    char t26[8];
    char t27[16];
    char t28[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    int64 t19;
    int t20;
    char *t21;
    unsigned char t22;
    int t29;

LAB0:    t1 = (t0 + 5840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(148, ng0);
    t2 = (t0 + 4456U);
    t3 = (t0 + 11804);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 1;
    t7 = (t6 + 4U);
    *((int *)t7) = 9;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (9 - 1);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    std_textio_file_open1(t2, t3, t5, 0);
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 4560U);
    t3 = (t0 + 11813);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 1;
    t7 = (t6 + 4U);
    *((int *)t7) = 10;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (10 - 1);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    std_textio_file_open1(t2, t3, t5, 0);
    xsi_set_current_line(152, ng0);
    t2 = (t0 + 11823);
    t4 = (t0 + 5016U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 4U);
    xsi_set_current_line(153, ng0);
    t2 = (t0 + 5648);
    t3 = (t0 + 4808U);
    t4 = (t0 + 5016U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t10, t7, 4U);
    t6 = (t0 + 11480U);
    t8 = (4U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t10, t6, (unsigned char)0, t8);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 11827);
    t4 = (t0 + 5016U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 4U);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 5648);
    t3 = (t0 + 4808U);
    t4 = (t0 + 5016U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t11, t7, 4U);
    t6 = (t0 + 11480U);
    t8 = (4U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t11, t6, (unsigned char)0, t8);
    xsi_set_current_line(156, ng0);
    t2 = (t0 + 11831);
    t4 = (t0 + 5016U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 4U);
    xsi_set_current_line(157, ng0);
    t2 = (t0 + 5648);
    t3 = (t0 + 4808U);
    t4 = (t0 + 5016U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t12, t7, 4U);
    t6 = (t0 + 11480U);
    t8 = (4U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t12, t6, (unsigned char)0, t8);
    xsi_set_current_line(158, ng0);
    t2 = (t0 + 11835);
    t4 = (t0 + 5016U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 4U);
    xsi_set_current_line(159, ng0);
    t2 = (t0 + 5648);
    t3 = (t0 + 4808U);
    t4 = (t0 + 5016U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t13, t7, 4U);
    t6 = (t0 + 11480U);
    t8 = (4U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t13, t6, (unsigned char)0, t8);
    xsi_set_current_line(160, ng0);
    t2 = (t0 + 11839);
    t4 = (t0 + 5016U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 4U);
    xsi_set_current_line(161, ng0);
    t2 = (t0 + 5648);
    t3 = (t0 + 4808U);
    t4 = (t0 + 5016U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t14, t7, 4U);
    t6 = (t0 + 11480U);
    t8 = (4U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t14, t6, (unsigned char)0, t8);
    xsi_set_current_line(162, ng0);
    t2 = (t0 + 11843);
    t4 = (t0 + 5016U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 4U);
    xsi_set_current_line(163, ng0);
    t2 = (t0 + 5648);
    t3 = (t0 + 4808U);
    t4 = (t0 + 5016U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t15, t7, 4U);
    t6 = (t0 + 11480U);
    t8 = (4U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t15, t6, (unsigned char)0, t8);
    xsi_set_current_line(164, ng0);
    t2 = (t0 + 11847);
    t4 = (t0 + 5016U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 4U);
    xsi_set_current_line(165, ng0);
    t2 = (t0 + 5648);
    t3 = (t0 + 4808U);
    t4 = (t0 + 5016U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t16, t7, 4U);
    t6 = (t0 + 11480U);
    t8 = (4U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t16, t6, (unsigned char)0, t8);
    xsi_set_current_line(166, ng0);
    t2 = (t0 + 11851);
    t4 = (t0 + 5016U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 4U);
    xsi_set_current_line(167, ng0);
    t2 = (t0 + 5648);
    t3 = (t0 + 4808U);
    t4 = (t0 + 5016U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t17, t7, 4U);
    t6 = (t0 + 11480U);
    t8 = (4U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t17, t6, (unsigned char)0, t8);
    xsi_set_current_line(168, ng0);
    t2 = (t0 + 11855);
    t4 = (t0 + 5016U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t2, 4U);
    xsi_set_current_line(169, ng0);
    t2 = (t0 + 5648);
    t3 = (t0 + 4808U);
    t4 = (t0 + 5016U);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t18, t7, 4U);
    t6 = (t0 + 11480U);
    t8 = (4U + 1);
    std_textio_write7(STD_TEXTIO, t2, t3, t18, t6, (unsigned char)0, t8);
    xsi_set_current_line(171, ng0);
    t2 = (t0 + 5648);
    t3 = (t0 + 4560U);
    t4 = (t0 + 4808U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t4);
    xsi_set_current_line(172, ng0);
    t19 = (100 * 1000LL);
    t2 = (t0 + 5648);
    xsi_process_wait(t2, t19);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(174, ng0);
    t2 = (t0 + 11859);
    *((int *)t2) = 0;
    t3 = (t0 + 11863);
    *((int *)t3) = 9;
    t8 = 0;
    t20 = 9;

LAB8:    if (t8 <= t20)
        goto LAB9;

LAB11:    xsi_set_current_line(231, ng0);
    t2 = (t0 + 4456U);
    std_textio_file_close(t2);
    xsi_set_current_line(233, ng0);
    t2 = (t0 + 4560U);
    std_textio_file_close(t2);
    xsi_set_current_line(234, ng0);

LAB19:    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(176, ng0);
    t4 = (t0 + 5648);
    t6 = (t0 + 4456U);
    t7 = (t0 + 4736U);
    std_textio_readline(STD_TEXTIO, t4, t6, t7);
    xsi_set_current_line(179, ng0);
    t2 = (t0 + 5648);
    t3 = (t0 + 4736U);
    t4 = (t0 + 3048U);
    t6 = *((char **)t4);
    t4 = (t0 + 11368U);
    ieee_p_3564397177_sub_2863756418437601506_91900896(IEEE_P_3564397177, t2, t3, t6, t4);
    xsi_set_current_line(180, ng0);
    t2 = (t0 + 3048U);
    t3 = *((char **)t2);
    t2 = (t0 + 6304);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t21 = *((char **)t7);
    memcpy(t21, t3, 4U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(182, ng0);
    t2 = (t0 + 5648);
    t3 = (t0 + 4736U);
    t4 = (t0 + 3168U);
    t6 = *((char **)t4);
    t4 = (t0 + 11384U);
    ieee_p_3564397177_sub_2863756418437601506_91900896(IEEE_P_3564397177, t2, t3, t6, t4);
    xsi_set_current_line(183, ng0);
    t2 = (t0 + 3168U);
    t3 = *((char **)t2);
    t2 = (t0 + 6368);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t21 = *((char **)t7);
    memcpy(t21, t3, 4U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(185, ng0);
    t2 = (t0 + 5648);
    t3 = (t0 + 4736U);
    t4 = (t0 + 3288U);
    t6 = *((char **)t4);
    t4 = (t0 + 11400U);
    ieee_p_3564397177_sub_2863756418437601506_91900896(IEEE_P_3564397177, t2, t3, t6, t4);
    xsi_set_current_line(186, ng0);
    t2 = (t0 + 3288U);
    t3 = *((char **)t2);
    t2 = (t0 + 6432);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t21 = *((char **)t7);
    memcpy(t21, t3, 4U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(188, ng0);
    t2 = (t0 + 5648);
    t3 = (t0 + 4736U);
    t4 = (t0 + 3408U);
    t6 = *((char **)t4);
    t4 = (t0 + 11416U);
    ieee_p_3564397177_sub_2863756418437601506_91900896(IEEE_P_3564397177, t2, t3, t6, t4);
    xsi_set_current_line(189, ng0);
    t2 = (t0 + 3408U);
    t3 = *((char **)t2);
    t2 = (t0 + 6496);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t21 = *((char **)t7);
    memcpy(t21, t3, 4U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(191, ng0);
    t2 = (t0 + 5648);
    t3 = (t0 + 4736U);
    t4 = (t0 + 3528U);
    t6 = *((char **)t4);
    t4 = (t0 + 11432U);
    ieee_p_3564397177_sub_2863978933202788330_91900896(IEEE_P_3564397177, t2, t3, t6, t4);
    xsi_set_current_line(192, ng0);
    t2 = (t0 + 3528U);
    t3 = *((char **)t2);
    t2 = (t0 + 6560);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t21 = *((char **)t7);
    memcpy(t21, t3, 16U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(194, ng0);
    t2 = (t0 + 5648);
    t3 = (t0 + 4736U);
    t4 = (t0 + 3648U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    ieee_p_3564397177_sub_1675032430035817134_91900896(IEEE_P_3564397177, t2, t3, t4);
    xsi_set_current_line(195, ng0);
    t2 = (t0 + 3648U);
    t3 = *((char **)t2);
    t22 = *((unsigned char *)t3);
    t2 = (t0 + 6624);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t21 = *((char **)t7);
    *((unsigned char *)t21) = t22;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(197, ng0);
    t2 = (t0 + 5648);
    t3 = (t0 + 4736U);
    t4 = (t0 + 3768U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    ieee_p_3564397177_sub_1675032430035817134_91900896(IEEE_P_3564397177, t2, t3, t4);
    xsi_set_current_line(198, ng0);
    t2 = (t0 + 3768U);
    t3 = *((char **)t2);
    t22 = *((unsigned char *)t3);
    t2 = (t0 + 6688);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t21 = *((char **)t7);
    *((unsigned char *)t21) = t22;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(200, ng0);
    t2 = (t0 + 5648);
    t3 = (t0 + 4736U);
    t4 = (t0 + 3888U);
    t6 = *((char **)t4);
    t4 = (t6 + 0);
    ieee_p_3564397177_sub_1675032430035817134_91900896(IEEE_P_3564397177, t2, t3, t4);
    xsi_set_current_line(201, ng0);
    t2 = (t0 + 3888U);
    t3 = *((char **)t2);
    t22 = *((unsigned char *)t3);
    t2 = (t0 + 6752);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t21 = *((char **)t7);
    *((unsigned char *)t21) = t22;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(203, ng0);

LAB14:    t2 = (t0 + 6160);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB10:    t2 = (t0 + 11859);
    t8 = *((int *)t2);
    t3 = (t0 + 11863);
    t20 = *((int *)t3);
    if (t8 == t20)
        goto LAB11;

LAB16:    t29 = (t8 + 1);
    t8 = t29;
    t4 = (t0 + 11859);
    *((int *)t4) = t8;
    goto LAB8;

LAB12:    t4 = (t0 + 6160);
    *((int *)t4) = 0;
    xsi_set_current_line(205, ng0);
    t2 = (t0 + 2632U);
    t3 = *((char **)t2);
    t2 = (t0 + 4128U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    memcpy(t2, t3, 16U);
    xsi_set_current_line(206, ng0);
    t2 = (t0 + 2472U);
    t3 = *((char **)t2);
    t2 = (t0 + 4008U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    memcpy(t2, t3, 16U);
    xsi_set_current_line(210, ng0);
    t2 = (t0 + 5648);
    t3 = (t0 + 4808U);
    t4 = (t0 + 3048U);
    t6 = *((char **)t4);
    memcpy(t23, t6, 4U);
    t4 = (t0 + 11368U);
    ieee_p_3564397177_sub_2258168291854845616_91900896(IEEE_P_3564397177, t2, t3, t23, t4, (unsigned char)0, 5);
    xsi_set_current_line(212, ng0);
    t2 = (t0 + 5648);
    t3 = (t0 + 4808U);
    t4 = (t0 + 3168U);
    t6 = *((char **)t4);
    memcpy(t24, t6, 4U);
    t4 = (t0 + 11384U);
    ieee_p_3564397177_sub_2258168291854845616_91900896(IEEE_P_3564397177, t2, t3, t24, t4, (unsigned char)0, 5);
    xsi_set_current_line(214, ng0);
    t2 = (t0 + 5648);
    t3 = (t0 + 4808U);
    t4 = (t0 + 3288U);
    t6 = *((char **)t4);
    memcpy(t25, t6, 4U);
    t4 = (t0 + 11400U);
    ieee_p_3564397177_sub_2258168291854845616_91900896(IEEE_P_3564397177, t2, t3, t25, t4, (unsigned char)0, 5);
    xsi_set_current_line(216, ng0);
    t2 = (t0 + 5648);
    t3 = (t0 + 4808U);
    t4 = (t0 + 3408U);
    t6 = *((char **)t4);
    memcpy(t26, t6, 4U);
    t4 = (t0 + 11416U);
    ieee_p_3564397177_sub_2258168291854845616_91900896(IEEE_P_3564397177, t2, t3, t26, t4, (unsigned char)0, 5);
    xsi_set_current_line(218, ng0);
    t2 = (t0 + 5648);
    t3 = (t0 + 4808U);
    t4 = (t0 + 3528U);
    t6 = *((char **)t4);
    memcpy(t5, t6, 16U);
    t4 = (t0 + 11432U);
    ieee_p_3564397177_sub_2258168291854845616_91900896(IEEE_P_3564397177, t2, t3, t5, t4, (unsigned char)0, 5);
    xsi_set_current_line(220, ng0);
    t2 = (t0 + 5648);
    t3 = (t0 + 4808U);
    t4 = (t0 + 3648U);
    t6 = *((char **)t4);
    t22 = *((unsigned char *)t6);
    ieee_p_3564397177_sub_2518136782373626985_91900896(IEEE_P_3564397177, t2, t3, t22, (unsigned char)0, 5);
    xsi_set_current_line(222, ng0);
    t2 = (t0 + 5648);
    t3 = (t0 + 4808U);
    t4 = (t0 + 3768U);
    t6 = *((char **)t4);
    t22 = *((unsigned char *)t6);
    ieee_p_3564397177_sub_2518136782373626985_91900896(IEEE_P_3564397177, t2, t3, t22, (unsigned char)0, 5);
    xsi_set_current_line(224, ng0);
    t2 = (t0 + 5648);
    t3 = (t0 + 4808U);
    t4 = (t0 + 3888U);
    t6 = *((char **)t4);
    t22 = *((unsigned char *)t6);
    ieee_p_3564397177_sub_2518136782373626985_91900896(IEEE_P_3564397177, t2, t3, t22, (unsigned char)0, 5);
    xsi_set_current_line(226, ng0);
    t2 = (t0 + 5648);
    t3 = (t0 + 4808U);
    t4 = (t0 + 4008U);
    t6 = *((char **)t4);
    memcpy(t27, t6, 16U);
    t4 = (t0 + 11448U);
    ieee_p_3564397177_sub_2258168291854845616_91900896(IEEE_P_3564397177, t2, t3, t27, t4, (unsigned char)0, 5);
    xsi_set_current_line(228, ng0);
    t2 = (t0 + 5648);
    t3 = (t0 + 4808U);
    t4 = (t0 + 4128U);
    t6 = *((char **)t4);
    memcpy(t28, t6, 16U);
    t4 = (t0 + 11464U);
    ieee_p_3564397177_sub_2258168291854845616_91900896(IEEE_P_3564397177, t2, t3, t28, t4, (unsigned char)0, 5);
    goto LAB10;

LAB13:    t3 = (t0 + 1312U);
    t22 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t22 == 1)
        goto LAB12;
    else
        goto LAB14;

LAB15:    goto LAB13;

LAB17:    goto LAB2;

LAB18:    goto LAB17;

LAB20:    goto LAB18;

}


extern void work_a_3666490522_2372691052_init()
{
	static char *pe[] = {(void *)work_a_3666490522_2372691052_p_0,(void *)work_a_3666490522_2372691052_p_1};
	xsi_register_didat("work_a_3666490522_2372691052", "isim/TB_ARCHIVO_REGISTROS_isim_beh.exe.sim/work/a_3666490522_2372691052.didat");
	xsi_register_executes(pe);
}
