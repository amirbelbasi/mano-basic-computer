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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/mohsen/Desktop/mano/mano/common_bus.vhd";
extern char *IEEE_P_2592010699;



static void work_a_1578579697_3212880686_p_0(char *t0)
{
    char t6[16];
    char t11[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(183, ng0);

LAB3:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1992U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t7 = ((IEEE_P_2592010699) + 4024);
    t1 = xsi_base_array_concat(t1, t6, t7, (char)99, t3, (char)99, t5, (char)101);
    t8 = (t0 + 1832U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t12 = ((IEEE_P_2592010699) + 4024);
    t8 = xsi_base_array_concat(t8, t11, t12, (char)97, t1, t6, (char)99, t10, (char)101);
    t13 = (1U + 1U);
    t14 = (t13 + 1U);
    t15 = (3U != t14);
    if (t15 == 1)
        goto LAB5;

LAB6:    t16 = (t0 + 11432);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t8, 3U);
    xsi_driver_first_trans_fast(t16);

LAB2:    t21 = (t0 + 11272);
    *((int *)t21) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(3U, t14, 0);
    goto LAB6;

}

static void work_a_1578579697_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(185, ng0);

LAB3:    t1 = (t0 + 8072U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 11496);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 11288);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1578579697_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(186, ng0);

LAB3:    t1 = (t0 + 7112U);
    t2 = *((char **)t1);
    t1 = (t0 + 11560);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 11304);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1578579697_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(187, ng0);

LAB3:    t1 = (t0 + 7272U);
    t2 = *((char **)t1);
    t1 = (t0 + 11624);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 11320);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1578579697_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(188, ng0);

LAB3:    t1 = (t0 + 6952U);
    t2 = *((char **)t1);
    t1 = (t0 + 11688);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 11336);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1578579697_3212880686_p_5(char *t0)
{
    char t28[16];
    char t30[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    int t11;
    char *t12;
    char *t13;
    int t14;
    char *t15;
    char *t16;
    int t17;
    char *t18;
    int t20;
    char *t21;
    int t23;
    char *t24;
    char *t26;
    char *t27;
    char *t29;
    char *t31;
    char *t32;
    int t33;
    unsigned int t34;
    unsigned char t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;

LAB0:    t1 = (t0 + 10952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(213, ng0);
    t2 = (t0 + 8552U);
    t3 = *((char **)t2);
    t2 = (t0 + 17954);
    t5 = xsi_mem_cmp(t2, t3, 3U);
    if (t5 == 1)
        goto LAB5;

LAB13:    t6 = (t0 + 17957);
    t8 = xsi_mem_cmp(t6, t3, 3U);
    if (t8 == 1)
        goto LAB6;

LAB14:    t9 = (t0 + 17960);
    t11 = xsi_mem_cmp(t9, t3, 3U);
    if (t11 == 1)
        goto LAB7;

LAB15:    t12 = (t0 + 17963);
    t14 = xsi_mem_cmp(t12, t3, 3U);
    if (t14 == 1)
        goto LAB8;

LAB16:    t15 = (t0 + 17966);
    t17 = xsi_mem_cmp(t15, t3, 3U);
    if (t17 == 1)
        goto LAB9;

LAB17:    t18 = (t0 + 17969);
    t20 = xsi_mem_cmp(t18, t3, 3U);
    if (t20 == 1)
        goto LAB10;

LAB18:    t21 = (t0 + 17972);
    t23 = xsi_mem_cmp(t21, t3, 3U);
    if (t23 == 1)
        goto LAB11;

LAB19:
LAB12:    xsi_set_current_line(213, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t3 = t2;
    memset(t3, (unsigned char)2, 16U);
    t4 = (t0 + 11752);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_fast(t4);

LAB4:    xsi_set_current_line(213, ng0);

LAB27:    t2 = (t0 + 11352);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB28;

LAB1:    return;
LAB5:    xsi_set_current_line(213, ng0);
    t24 = (t0 + 17975);
    t26 = (t0 + 6632U);
    t27 = *((char **)t26);
    t29 = ((IEEE_P_2592010699) + 4024);
    t31 = (t30 + 0U);
    t32 = (t31 + 0U);
    *((int *)t32) = 0;
    t32 = (t31 + 4U);
    *((int *)t32) = 3;
    t32 = (t31 + 8U);
    *((int *)t32) = 1;
    t33 = (3 - 0);
    t34 = (t33 * 1);
    t34 = (t34 + 1);
    t32 = (t31 + 12U);
    *((unsigned int *)t32) = t34;
    t32 = (t0 + 17588U);
    t26 = xsi_base_array_concat(t26, t28, t29, (char)97, t24, t30, (char)97, t27, t32, (char)101);
    t34 = (4U + 12U);
    t35 = (16U != t34);
    if (t35 == 1)
        goto LAB21;

LAB22:    t36 = (t0 + 11752);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    memcpy(t40, t26, 16U);
    xsi_driver_first_trans_fast(t36);
    goto LAB4;

LAB6:    xsi_set_current_line(213, ng0);
    t2 = (t0 + 17979);
    t4 = (t0 + 6792U);
    t6 = *((char **)t4);
    t7 = ((IEEE_P_2592010699) + 4024);
    t9 = (t30 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 3;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t5 = (3 - 0);
    t34 = (t5 * 1);
    t34 = (t34 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t34;
    t10 = (t0 + 17604U);
    t4 = xsi_base_array_concat(t4, t28, t7, (char)97, t2, t30, (char)97, t6, t10, (char)101);
    t34 = (4U + 12U);
    t35 = (16U != t34);
    if (t35 == 1)
        goto LAB23;

LAB24:    t12 = (t0 + 11752);
    t13 = (t12 + 56U);
    t15 = *((char **)t13);
    t16 = (t15 + 56U);
    t18 = *((char **)t16);
    memcpy(t18, t4, 16U);
    xsi_driver_first_trans_fast(t12);
    goto LAB4;

LAB7:    xsi_set_current_line(213, ng0);
    t2 = (t0 + 6952U);
    t3 = *((char **)t2);
    t2 = (t0 + 11752);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast(t2);
    goto LAB4;

LAB8:    xsi_set_current_line(213, ng0);
    t2 = (t0 + 7112U);
    t3 = *((char **)t2);
    t2 = (t0 + 11752);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast(t2);
    goto LAB4;

LAB9:    xsi_set_current_line(213, ng0);
    t2 = (t0 + 7272U);
    t3 = *((char **)t2);
    t2 = (t0 + 11752);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast(t2);
    goto LAB4;

LAB10:    xsi_set_current_line(213, ng0);
    t2 = (t0 + 7432U);
    t3 = *((char **)t2);
    t2 = (t0 + 11752);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast(t2);
    goto LAB4;

LAB11:    xsi_set_current_line(213, ng0);
    t2 = (t0 + 7752U);
    t3 = *((char **)t2);
    t2 = (t0 + 11752);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast(t2);
    goto LAB4;

LAB20:;
LAB21:    xsi_size_not_matching(16U, t34, 0);
    goto LAB22;

LAB23:    xsi_size_not_matching(16U, t34, 0);
    goto LAB24;

LAB25:    t3 = (t0 + 11352);
    *((int *)t3) = 0;
    goto LAB2;

LAB26:    goto LAB25;

LAB28:    goto LAB26;

}


extern void work_a_1578579697_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1578579697_3212880686_p_0,(void *)work_a_1578579697_3212880686_p_1,(void *)work_a_1578579697_3212880686_p_2,(void *)work_a_1578579697_3212880686_p_3,(void *)work_a_1578579697_3212880686_p_4,(void *)work_a_1578579697_3212880686_p_5};
	xsi_register_didat("work_a_1578579697_3212880686", "isim/top_test_isim_beh.exe.sim/work/a_1578579697_3212880686.didat");
	xsi_register_executes(pe);
}
