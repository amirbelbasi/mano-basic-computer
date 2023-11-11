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
static const char *ng0 = "C:/Users/mohsen/Desktop/mano/mano/alu.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_3499444699;
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_1735675855_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_1837678034_503743352(char *, char *, char *, char *);
char *ieee_p_2592010699_sub_795620321_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_3499444699_sub_2213602152_3536714472(char *, char *, int , int );
int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);
char *ieee_p_3620187407_sub_767632659_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_0832606739_3212880686_p_0(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(25, ng0);

LAB3:    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 8788U);
    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t4 = (t0 + 8804U);
    t6 = ieee_p_3620187407_sub_767632659_3965413181(IEEE_P_3620187407, t1, t3, t2, t5, t4);
    t7 = (t1 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (1U * t8);
    t10 = (32U != t9);
    if (t10 == 1)
        goto LAB5;

LAB6:    t11 = (t0 + 6040);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast(t11);

LAB2:    t16 = (t0 + 5848);
    *((int *)t16) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(32U, t9, 0);
    goto LAB6;

}

static void work_a_0832606739_3212880686_p_1(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(26, ng0);

LAB3:    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 8788U);
    t4 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t3, t2);
    t5 = (t0 + 1192U);
    t6 = *((char **)t5);
    t5 = (t0 + 8804U);
    t7 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t6, t5);
    t8 = (t4 + t7);
    t9 = ieee_p_3499444699_sub_2213602152_3536714472(IEEE_P_3499444699, t1, t8, 17);
    t10 = (t1 + 12U);
    t11 = *((unsigned int *)t10);
    t11 = (t11 * 1U);
    t12 = (17U != t11);
    if (t12 == 1)
        goto LAB5;

LAB6:    t13 = (t0 + 6104);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t9, 17U);
    xsi_driver_first_trans_fast(t13);

LAB2:    t18 = (t0 + 5864);
    *((int *)t18) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(17U, t11, 0);
    goto LAB6;

}

static void work_a_0832606739_3212880686_p_2(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    int t4;
    int t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(27, ng0);

LAB3:    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 8788U);
    t4 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t3, t2);
    t5 = (t4 + 1);
    t6 = ieee_p_3499444699_sub_2213602152_3536714472(IEEE_P_3499444699, t1, t5, 17);
    t7 = (t1 + 12U);
    t8 = *((unsigned int *)t7);
    t8 = (t8 * 1U);
    t9 = (17U != t8);
    if (t9 == 1)
        goto LAB5;

LAB6:    t10 = (t0 + 6168);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t6, 17U);
    xsi_driver_first_trans_fast(t10);

LAB2:    t15 = (t0 + 5880);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(17U, t8, 0);
    goto LAB6;

}

static void work_a_0832606739_3212880686_p_3(char *t0)
{
    char t40[16];
    char t42[16];
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
    int t26;
    char *t27;
    int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned char t41;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned char t47;

LAB0:    t1 = (t0 + 4536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 9043);
    t5 = xsi_mem_cmp(t2, t3, 4U);
    if (t5 == 1)
        goto LAB5;

LAB15:    t6 = (t0 + 9047);
    t8 = xsi_mem_cmp(t6, t3, 4U);
    if (t8 == 1)
        goto LAB6;

LAB16:    t9 = (t0 + 9051);
    t11 = xsi_mem_cmp(t9, t3, 4U);
    if (t11 == 1)
        goto LAB7;

LAB17:    t12 = (t0 + 9055);
    t14 = xsi_mem_cmp(t12, t3, 4U);
    if (t14 == 1)
        goto LAB8;

LAB18:    t15 = (t0 + 9059);
    t17 = xsi_mem_cmp(t15, t3, 4U);
    if (t17 == 1)
        goto LAB9;

LAB19:    t18 = (t0 + 9063);
    t20 = xsi_mem_cmp(t18, t3, 4U);
    if (t20 == 1)
        goto LAB10;

LAB20:    t21 = (t0 + 9067);
    t23 = xsi_mem_cmp(t21, t3, 4U);
    if (t23 == 1)
        goto LAB11;

LAB21:    t24 = (t0 + 9071);
    t26 = xsi_mem_cmp(t24, t3, 4U);
    if (t26 == 1)
        goto LAB12;

LAB22:    t27 = (t0 + 9075);
    t29 = xsi_mem_cmp(t27, t3, 4U);
    if (t29 == 1)
        goto LAB13;

LAB23:
LAB14:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 9079);
    t4 = (t0 + 6232);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_fast(t4);

LAB4:    xsi_set_current_line(28, ng0);

LAB37:    t2 = (t0 + 5896);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB38;

LAB1:    return;
LAB5:    xsi_set_current_line(28, ng0);
    t30 = (t0 + 2312U);
    t31 = *((char **)t30);
    t32 = (31 - 15);
    t33 = (t32 * 1U);
    t34 = (0 + t33);
    t30 = (t31 + t34);
    t35 = (t0 + 6232);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    memcpy(t39, t30, 16U);
    xsi_driver_first_trans_fast(t35);
    goto LAB4;

LAB6:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t32 = (16 - 15);
    t33 = (t32 * 1U);
    t34 = (0 + t33);
    t2 = (t3 + t34);
    t4 = (t0 + 6232);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    goto LAB4;

LAB7:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 8788U);
    t4 = (t0 + 1192U);
    t6 = *((char **)t4);
    t4 = (t0 + 8804U);
    t7 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t40, t3, t2, t6, t4);
    t9 = (t40 + 12U);
    t32 = *((unsigned int *)t9);
    t33 = (1U * t32);
    t41 = (16U != t33);
    if (t41 == 1)
        goto LAB25;

LAB26:    t10 = (t0 + 6232);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 16U);
    xsi_driver_first_trans_fast(t10);
    goto LAB4;

LAB8:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 8788U);
    t4 = (t0 + 1192U);
    t6 = *((char **)t4);
    t4 = (t0 + 8804U);
    t7 = ieee_p_2592010699_sub_1735675855_503743352(IEEE_P_2592010699, t40, t3, t2, t6, t4);
    t9 = (t40 + 12U);
    t32 = *((unsigned int *)t9);
    t33 = (1U * t32);
    t41 = (16U != t33);
    if (t41 == 1)
        goto LAB27;

LAB28:    t10 = (t0 + 6232);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 16U);
    xsi_driver_first_trans_fast(t10);
    goto LAB4;

LAB9:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 8788U);
    t4 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t40, t3, t2);
    t6 = (t40 + 12U);
    t32 = *((unsigned int *)t6);
    t33 = (1U * t32);
    t41 = (16U != t33);
    if (t41 == 1)
        goto LAB29;

LAB30:    t7 = (t0 + 6232);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t4, 16U);
    xsi_driver_first_trans_fast(t7);
    goto LAB4;

LAB10:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 2152U);
    t3 = *((char **)t2);
    t32 = (16 - 15);
    t33 = (t32 * 1U);
    t34 = (0 + t33);
    t2 = (t3 + t34);
    t4 = (t0 + 6232);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    goto LAB4;

LAB11:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t32 = (15 - 14);
    t33 = (t32 * 1U);
    t34 = (0 + t33);
    t2 = (t3 + t34);
    t6 = ((IEEE_P_2592010699) + 4024);
    t7 = (t42 + 0U);
    t9 = (t7 + 0U);
    *((int *)t9) = 14;
    t9 = (t7 + 4U);
    *((int *)t9) = 0;
    t9 = (t7 + 8U);
    *((int *)t9) = -1;
    t5 = (0 - 14);
    t43 = (t5 * -1);
    t43 = (t43 + 1);
    t9 = (t7 + 12U);
    *((unsigned int *)t9) = t43;
    t4 = xsi_base_array_concat(t4, t40, t6, (char)97, t2, t42, (char)99, (unsigned char)2, (char)101);
    t43 = (15U + 1U);
    t41 = (16U != t43);
    if (t41 == 1)
        goto LAB31;

LAB32:    t9 = (t0 + 6232);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    t13 = (t12 + 56U);
    t15 = *((char **)t13);
    memcpy(t15, t4, 16U);
    xsi_driver_first_trans_fast(t9);
    goto LAB4;

LAB12:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t5 = (15 - 15);
    t32 = (t5 * -1);
    t33 = (1U * t32);
    t34 = (0 + t33);
    t2 = (t3 + t34);
    t41 = *((unsigned char *)t2);
    t4 = (t0 + 1032U);
    t6 = *((char **)t4);
    t43 = (15 - 15);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t4 = (t6 + t45);
    t9 = ((IEEE_P_2592010699) + 4024);
    t10 = (t42 + 0U);
    t12 = (t10 + 0U);
    *((int *)t12) = 15;
    t12 = (t10 + 4U);
    *((int *)t12) = 1;
    t12 = (t10 + 8U);
    *((int *)t12) = -1;
    t8 = (1 - 15);
    t46 = (t8 * -1);
    t46 = (t46 + 1);
    t12 = (t10 + 12U);
    *((unsigned int *)t12) = t46;
    t7 = xsi_base_array_concat(t7, t40, t9, (char)99, t41, (char)97, t4, t42, (char)101);
    t46 = (1U + 15U);
    t47 = (16U != t46);
    if (t47 == 1)
        goto LAB33;

LAB34:    t12 = (t0 + 6232);
    t13 = (t12 + 56U);
    t15 = *((char **)t13);
    t16 = (t15 + 56U);
    t18 = *((char **)t16);
    memcpy(t18, t7, 16U);
    xsi_driver_first_trans_fast(t12);
    goto LAB4;

LAB13:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 6232);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast(t2);
    goto LAB4;

LAB24:;
LAB25:    xsi_size_not_matching(16U, t33, 0);
    goto LAB26;

LAB27:    xsi_size_not_matching(16U, t33, 0);
    goto LAB28;

LAB29:    xsi_size_not_matching(16U, t33, 0);
    goto LAB30;

LAB31:    xsi_size_not_matching(16U, t43, 0);
    goto LAB32;

LAB33:    xsi_size_not_matching(16U, t46, 0);
    goto LAB34;

LAB35:    t3 = (t0 + 5896);
    *((int *)t3) = 0;
    goto LAB2;

LAB36:    goto LAB35;

LAB38:    goto LAB36;

}

static void work_a_0832606739_3212880686_p_4(char *t0)
{
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
    int t14;
    char *t15;
    int t17;
    char *t18;
    int t20;
    char *t21;
    int t23;
    char *t24;
    int t26;
    char *t27;
    char *t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned char t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;

LAB0:    t1 = (t0 + 4784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 9095);
    t5 = xsi_mem_cmp(t2, t3, 4U);
    if (t5 == 1)
        goto LAB5;

LAB14:    t6 = (t0 + 9099);
    t8 = xsi_mem_cmp(t6, t3, 4U);
    if (t8 == 1)
        goto LAB6;

LAB15:    t9 = (t0 + 9103);
    t11 = xsi_mem_cmp(t9, t3, 4U);
    if (t11 == 1)
        goto LAB7;

LAB16:    t12 = (t0 + 9107);
    t14 = xsi_mem_cmp(t12, t3, 4U);
    if (t14 == 1)
        goto LAB8;

LAB17:    t15 = (t0 + 9111);
    t17 = xsi_mem_cmp(t15, t3, 4U);
    if (t17 == 1)
        goto LAB9;

LAB18:    t18 = (t0 + 9115);
    t20 = xsi_mem_cmp(t18, t3, 4U);
    if (t20 == 1)
        goto LAB10;

LAB19:    t21 = (t0 + 9119);
    t23 = xsi_mem_cmp(t21, t3, 4U);
    if (t23 == 1)
        goto LAB11;

LAB20:    t24 = (t0 + 9123);
    t26 = xsi_mem_cmp(t24, t3, 4U);
    if (t26 == 1)
        goto LAB12;

LAB21:
LAB13:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 6296);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB4:    xsi_set_current_line(39, ng0);

LAB25:    t2 = (t0 + 5912);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB26;

LAB1:    return;
LAB5:    xsi_set_current_line(39, ng0);
    t27 = (t0 + 2312U);
    t28 = *((char **)t27);
    t29 = (16 - 31);
    t30 = (t29 * -1);
    t31 = (1U * t30);
    t32 = (0 + t31);
    t27 = (t28 + t32);
    t33 = *((unsigned char *)t27);
    t34 = (t0 + 6296);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    *((unsigned char *)t38) = t33;
    xsi_driver_first_trans_fast(t34);
    goto LAB4;

LAB6:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t5 = (16 - 16);
    t30 = (t5 * -1);
    t31 = (1U * t30);
    t32 = (0 + t31);
    t2 = (t3 + t32);
    t33 = *((unsigned char *)t2);
    t4 = (t0 + 6296);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t33;
    xsi_driver_first_trans_fast(t4);
    goto LAB4;

LAB7:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 6296);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB4;

LAB8:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 6296);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB4;

LAB9:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 6296);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB4;

LAB10:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2152U);
    t3 = *((char **)t2);
    t5 = (16 - 16);
    t30 = (t5 * -1);
    t31 = (1U * t30);
    t32 = (0 + t31);
    t2 = (t3 + t32);
    t33 = *((unsigned char *)t2);
    t4 = (t0 + 6296);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t33;
    xsi_driver_first_trans_fast(t4);
    goto LAB4;

LAB11:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t5 = (15 - 15);
    t30 = (t5 * -1);
    t31 = (1U * t30);
    t32 = (0 + t31);
    t2 = (t3 + t32);
    t33 = *((unsigned char *)t2);
    t4 = (t0 + 6296);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t33;
    xsi_driver_first_trans_fast(t4);
    goto LAB4;

LAB12:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t5 = (0 - 15);
    t30 = (t5 * -1);
    t31 = (1U * t30);
    t32 = (0 + t31);
    t2 = (t3 + t32);
    t33 = *((unsigned char *)t2);
    t4 = (t0 + 6296);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t33;
    xsi_driver_first_trans_fast(t4);
    goto LAB4;

LAB22:;
LAB23:    t3 = (t0 + 5912);
    *((int *)t3) = 0;
    goto LAB2;

LAB24:    goto LAB23;

LAB26:    goto LAB24;

}

static void work_a_0832606739_3212880686_p_5(char *t0)
{
    char t5[16];
    char t10[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 2472U);
    t4 = *((char **)t1);
    t6 = ((IEEE_P_2592010699) + 4024);
    t7 = (t0 + 8900U);
    t1 = xsi_base_array_concat(t1, t5, t6, (char)99, t3, (char)97, t4, t7, (char)101);
    t8 = (t0 + 9127);
    t11 = (t10 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 0;
    t12 = (t11 + 4U);
    *((int *)t12) = 16;
    t12 = (t11 + 8U);
    *((int *)t12) = 1;
    t13 = (16 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t14;
    t15 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t1, t5, t8, t10);
    if (t15 != 0)
        goto LAB3;

LAB4:
LAB5:    t20 = (t0 + 6360);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t20);

LAB2:    t25 = (t0 + 5928);
    *((int *)t25) = 1;

LAB1:    return;
LAB3:    t12 = (t0 + 6360);
    t16 = (t12 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t12);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_0832606739_3212880686_p_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(51, ng0);

LAB3:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 6424);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5944);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0832606739_3212880686_p_7(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(52, ng0);

LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 6488);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 5960);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0832606739_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0832606739_3212880686_p_0,(void *)work_a_0832606739_3212880686_p_1,(void *)work_a_0832606739_3212880686_p_2,(void *)work_a_0832606739_3212880686_p_3,(void *)work_a_0832606739_3212880686_p_4,(void *)work_a_0832606739_3212880686_p_5,(void *)work_a_0832606739_3212880686_p_6,(void *)work_a_0832606739_3212880686_p_7};
	xsi_register_didat("work_a_0832606739_3212880686", "isim/top_test_isim_beh.exe.sim/work/a_0832606739_3212880686.didat");
	xsi_register_executes(pe);
}
