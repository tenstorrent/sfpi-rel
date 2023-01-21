/* Generated automatically by the program `gencodes'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CODES_H
#define GCC_INSN_CODES_H

enum insn_code {
  CODE_FOR_nothing = 0,
  CODE_FOR_addsf3 = 1,
  CODE_FOR_adddf3 = 2,
  CODE_FOR_addsi3 = 3,
  CODE_FOR_adddi3 = 4,
  CODE_FOR_subsf3 = 7,
  CODE_FOR_subdf3 = 8,
  CODE_FOR_subdi3 = 9,
  CODE_FOR_subsi3 = 10,
  CODE_FOR_negdi2 = 13,
  CODE_FOR_negsi2 = 14,
  CODE_FOR_mulsf3 = 17,
  CODE_FOR_muldf3 = 18,
  CODE_FOR_mulsi3 = 19,
  CODE_FOR_muldi3 = 20,
  CODE_FOR_muldi3_highpart = 23,
  CODE_FOR_umuldi3_highpart = 24,
  CODE_FOR_usmuldi3_highpart = 25,
  CODE_FOR_mulsi3_highpart = 26,
  CODE_FOR_umulsi3_highpart = 27,
  CODE_FOR_usmulsi3_highpart = 28,
  CODE_FOR_divsi3 = 29,
  CODE_FOR_udivsi3 = 30,
  CODE_FOR_modsi3 = 31,
  CODE_FOR_umodsi3 = 32,
  CODE_FOR_divdi3 = 33,
  CODE_FOR_udivdi3 = 34,
  CODE_FOR_moddi3 = 35,
  CODE_FOR_umoddi3 = 36,
  CODE_FOR_divsf3 = 41,
  CODE_FOR_divdf3 = 42,
  CODE_FOR_sqrtsf2 = 43,
  CODE_FOR_sqrtdf2 = 44,
  CODE_FOR_fmasf4 = 45,
  CODE_FOR_fmadf4 = 46,
  CODE_FOR_fmssf4 = 47,
  CODE_FOR_fmsdf4 = 48,
  CODE_FOR_fnmssf4 = 49,
  CODE_FOR_fnmsdf4 = 50,
  CODE_FOR_fnmasf4 = 51,
  CODE_FOR_fnmadf4 = 52,
  CODE_FOR_abssf2 = 61,
  CODE_FOR_absdf2 = 62,
  CODE_FOR_copysignsf3 = 63,
  CODE_FOR_copysigndf3 = 64,
  CODE_FOR_negsf2 = 65,
  CODE_FOR_negdf2 = 66,
  CODE_FOR_sminsf3 = 67,
  CODE_FOR_smindf3 = 68,
  CODE_FOR_smaxsf3 = 69,
  CODE_FOR_smaxdf3 = 70,
  CODE_FOR_andsi3 = 71,
  CODE_FOR_iorsi3 = 72,
  CODE_FOR_xorsi3 = 73,
  CODE_FOR_anddi3 = 74,
  CODE_FOR_iordi3 = 75,
  CODE_FOR_xordi3 = 76,
  CODE_FOR_one_cmplsi2 = 80,
  CODE_FOR_one_cmpldi2 = 81,
  CODE_FOR_truncdfsf2 = 83,
  CODE_FOR_zero_extendsidi2 = 84,
  CODE_FOR_zero_extendhisi2 = 85,
  CODE_FOR_zero_extendhidi2 = 86,
  CODE_FOR_zero_extendqihi2 = 87,
  CODE_FOR_zero_extendqisi2 = 88,
  CODE_FOR_zero_extendqidi2 = 89,
  CODE_FOR_extendsidi2 = 90,
  CODE_FOR_extendqihi2 = 91,
  CODE_FOR_extendqisi2 = 92,
  CODE_FOR_extendqidi2 = 93,
  CODE_FOR_extendhihi2 = 94,
  CODE_FOR_extendhisi2 = 95,
  CODE_FOR_extendhidi2 = 96,
  CODE_FOR_extendsfdf2 = 97,
  CODE_FOR_fix_truncsfsi2 = 98,
  CODE_FOR_fix_truncsfdi2 = 99,
  CODE_FOR_fix_truncdfsi2 = 100,
  CODE_FOR_fix_truncdfdi2 = 101,
  CODE_FOR_fixuns_truncsfsi2 = 102,
  CODE_FOR_fixuns_truncsfdi2 = 103,
  CODE_FOR_fixuns_truncdfsi2 = 104,
  CODE_FOR_fixuns_truncdfdi2 = 105,
  CODE_FOR_floatsisf2 = 106,
  CODE_FOR_floatdisf2 = 107,
  CODE_FOR_floatsidf2 = 108,
  CODE_FOR_floatdidf2 = 109,
  CODE_FOR_floatunssisf2 = 110,
  CODE_FOR_floatunsdisf2 = 111,
  CODE_FOR_floatunssidf2 = 112,
  CODE_FOR_floatunsdidf2 = 113,
  CODE_FOR_lrintsfsi2 = 114,
  CODE_FOR_lroundsfsi2 = 115,
  CODE_FOR_lrintsfdi2 = 116,
  CODE_FOR_lroundsfdi2 = 117,
  CODE_FOR_lrintdfsi2 = 118,
  CODE_FOR_lrounddfsi2 = 119,
  CODE_FOR_lrintdfdi2 = 120,
  CODE_FOR_lrounddfdi2 = 121,
  CODE_FOR_got_loadsi = 122,
  CODE_FOR_got_loaddi = 123,
  CODE_FOR_tls_add_tp_lesi = 124,
  CODE_FOR_tls_add_tp_ledi = 125,
  CODE_FOR_got_load_tls_gdsi = 126,
  CODE_FOR_got_load_tls_gddi = 127,
  CODE_FOR_got_load_tls_iesi = 128,
  CODE_FOR_got_load_tls_iedi = 129,
  CODE_FOR_auipcsi = 130,
  CODE_FOR_auipcdi = 131,
  CODE_FOR_fence = 148,
  CODE_FOR_fence_i = 149,
  CODE_FOR_ashlsi3 = 150,
  CODE_FOR_ashrsi3 = 151,
  CODE_FOR_lshrsi3 = 152,
  CODE_FOR_ashldi3 = 159,
  CODE_FOR_ashrdi3 = 160,
  CODE_FOR_lshrdi3 = 161,
  CODE_FOR_zero_extendsidi2_shifted = 180,
  CODE_FOR_jump = 251,
  CODE_FOR_indirect_jumpsi = 252,
  CODE_FOR_indirect_jumpdi = 253,
  CODE_FOR_tablejumpsi = 254,
  CODE_FOR_tablejumpdi = 255,
  CODE_FOR_blockage = 256,
  CODE_FOR_simple_return = 257,
  CODE_FOR_simple_return_internal = 258,
  CODE_FOR_eh_set_lr_si = 259,
  CODE_FOR_eh_set_lr_di = 260,
  CODE_FOR_eh_return_internal = 261,
  CODE_FOR_sibcall_internal = 262,
  CODE_FOR_sibcall_value_internal = 263,
  CODE_FOR_call_internal = 264,
  CODE_FOR_call_value_internal = 265,
  CODE_FOR_nop = 266,
  CODE_FOR_trap = 267,
  CODE_FOR_gpr_save = 268,
  CODE_FOR_gpr_restore = 269,
  CODE_FOR_gpr_restore_return = 270,
  CODE_FOR_riscv_frflags = 271,
  CODE_FOR_riscv_fsflags = 272,
  CODE_FOR_riscv_mret = 273,
  CODE_FOR_riscv_sret = 274,
  CODE_FOR_riscv_uret = 275,
  CODE_FOR_stack_tiesi = 276,
  CODE_FOR_stack_tiedi = 277,
  CODE_FOR_mem_thread_fence_1 = 278,
  CODE_FOR_atomic_storesi = 279,
  CODE_FOR_atomic_storedi = 280,
  CODE_FOR_atomic_addsi = 281,
  CODE_FOR_atomic_orsi = 282,
  CODE_FOR_atomic_xorsi = 283,
  CODE_FOR_atomic_andsi = 284,
  CODE_FOR_atomic_adddi = 285,
  CODE_FOR_atomic_ordi = 286,
  CODE_FOR_atomic_xordi = 287,
  CODE_FOR_atomic_anddi = 288,
  CODE_FOR_atomic_fetch_addsi = 289,
  CODE_FOR_atomic_fetch_orsi = 290,
  CODE_FOR_atomic_fetch_xorsi = 291,
  CODE_FOR_atomic_fetch_andsi = 292,
  CODE_FOR_atomic_fetch_adddi = 293,
  CODE_FOR_atomic_fetch_ordi = 294,
  CODE_FOR_atomic_fetch_xordi = 295,
  CODE_FOR_atomic_fetch_anddi = 296,
  CODE_FOR_atomic_exchangesi = 297,
  CODE_FOR_atomic_exchangedi = 298,
  CODE_FOR_atomic_cas_value_strongsi = 299,
  CODE_FOR_atomic_cas_value_strongdi = 300,
  CODE_FOR_rvtt_load_immediate = 353,
  CODE_FOR_rvtt_sfpassignlreg_int = 354,
  CODE_FOR_rvtt_sfpnonimm_dst = 355,
  CODE_FOR_rvtt_sfpnonimm_dst_src = 356,
  CODE_FOR_rvtt_sfpnonimm_src = 357,
  CODE_FOR_rvtt_sfpnonimm_store = 358,
  CODE_FOR_rvtt_sfpincrwc = 359,
  CODE_FOR_rvtt_gs_l1_load_war = 360,
  CODE_FOR_rvtt_gs_sfpgccmov_cc = 361,
  CODE_FOR_rvtt_gs_sfpassign_lv = 362,
  CODE_FOR_rvtt_gs_sfppreservelreg0_int = 363,
  CODE_FOR_rvtt_gs_sfppreservelreg1_int = 364,
  CODE_FOR_rvtt_gs_sfppreservelreg2_int = 365,
  CODE_FOR_rvtt_gs_sfppreservelreg3_int = 366,
  CODE_FOR_rvtt_gs_sfpload_int = 367,
  CODE_FOR_rvtt_gs_sfploadi_int = 368,
  CODE_FOR_rvtt_gs_sfpstore_int = 369,
  CODE_FOR_rvtt_gs_sfpmuli_int = 370,
  CODE_FOR_rvtt_gs_sfpaddi_int = 371,
  CODE_FOR_rvtt_gs_sfpdivp2_int = 372,
  CODE_FOR_rvtt_gs_sfpexexp_int = 373,
  CODE_FOR_rvtt_gs_sfpexman_int = 374,
  CODE_FOR_rvtt_gs_sfpabs_int = 375,
  CODE_FOR_rvtt_gs_sfpmov_int = 376,
  CODE_FOR_rvtt_gs_sfplz_int = 377,
  CODE_FOR_rvtt_gs_sfpmul_int = 378,
  CODE_FOR_rvtt_gs_sfpadd_int = 379,
  CODE_FOR_rvtt_gs_sfpiadd_v_int = 380,
  CODE_FOR_rvtt_gs_sfpiadd_i_int = 381,
  CODE_FOR_rvtt_gs_sfpshft_v = 382,
  CODE_FOR_rvtt_gs_sfpshft_i_int = 383,
  CODE_FOR_rvtt_gs_sfpand = 384,
  CODE_FOR_rvtt_gs_sfpor = 385,
  CODE_FOR_rvtt_gs_sfpnot_int = 386,
  CODE_FOR_rvtt_gs_sfpsetexp_v = 387,
  CODE_FOR_rvtt_gs_sfpsetman_v = 388,
  CODE_FOR_rvtt_gs_sfpsetsgn_v = 389,
  CODE_FOR_rvtt_gs_sfpsetexp_i_int = 390,
  CODE_FOR_rvtt_gs_sfpsetman_i_int = 391,
  CODE_FOR_rvtt_gs_sfpsetsgn_i_int = 392,
  CODE_FOR_rvtt_gs_sfpmad_int = 393,
  CODE_FOR_rvtt_gs_sfpsetcc_i = 394,
  CODE_FOR_rvtt_gs_sfpsetcc_v = 395,
  CODE_FOR_rvtt_gs_sfpencc = 396,
  CODE_FOR_rvtt_gs_sfpcompc = 397,
  CODE_FOR_rvtt_gs_sfppushc = 398,
  CODE_FOR_rvtt_gs_sfppopc = 399,
  CODE_FOR_rvtt_gs_sfplut = 400,
  CODE_FOR_rvtt_gs_sfpnop = 401,
  CODE_FOR_rvtt_wh_sfpgccmov_cc = 402,
  CODE_FOR_rvtt_wh_sfpassign_lv = 403,
  CODE_FOR_rvtt_wh_sfppreservelreg0_int = 404,
  CODE_FOR_rvtt_wh_sfppreservelreg1_int = 405,
  CODE_FOR_rvtt_wh_sfppreservelreg2_int = 406,
  CODE_FOR_rvtt_wh_sfppreservelreg3_int = 407,
  CODE_FOR_rvtt_wh_sfppreservelreg4_int = 408,
  CODE_FOR_rvtt_wh_sfppreservelreg5_int = 409,
  CODE_FOR_rvtt_wh_sfppreservelreg6_int = 410,
  CODE_FOR_rvtt_wh_sfppreservelreg7_int = 411,
  CODE_FOR_rvtt_wh_sfpload_int = 412,
  CODE_FOR_rvtt_wh_sfploadi_int = 413,
  CODE_FOR_rvtt_wh_sfpstore_int = 414,
  CODE_FOR_rvtt_wh_sfpmuli_int = 415,
  CODE_FOR_rvtt_wh_sfpaddi_int = 416,
  CODE_FOR_rvtt_wh_sfpdivp2_int = 417,
  CODE_FOR_rvtt_wh_sfpexexp_int = 418,
  CODE_FOR_rvtt_wh_sfpexman_int = 419,
  CODE_FOR_rvtt_wh_sfpabs_int = 420,
  CODE_FOR_rvtt_wh_sfpmov_int = 421,
  CODE_FOR_rvtt_wh_sfplz_int = 422,
  CODE_FOR_rvtt_wh_sfpmul_int = 423,
  CODE_FOR_rvtt_wh_sfpadd_int = 424,
  CODE_FOR_rvtt_wh_sfpiadd_v_int = 425,
  CODE_FOR_rvtt_wh_sfpiadd_i_int = 426,
  CODE_FOR_rvtt_wh_sfpshft_v = 427,
  CODE_FOR_rvtt_wh_sfpshft_i_int = 428,
  CODE_FOR_rvtt_wh_sfpand = 429,
  CODE_FOR_rvtt_wh_sfpor = 430,
  CODE_FOR_rvtt_wh_sfpxor = 431,
  CODE_FOR_rvtt_wh_sfpnot_int = 432,
  CODE_FOR_rvtt_wh_sfpcast_int = 433,
  CODE_FOR_rvtt_wh_sfpshft2_e_int = 434,
  CODE_FOR_rvtt_wh_sfpstochrnd_i_int = 435,
  CODE_FOR_rvtt_wh_sfpstochrnd_v_int = 436,
  CODE_FOR_rvtt_wh_sfpsetexp_v = 437,
  CODE_FOR_rvtt_wh_sfpsetman_v = 438,
  CODE_FOR_rvtt_wh_sfpsetsgn_v = 439,
  CODE_FOR_rvtt_wh_sfpsetexp_i_int = 440,
  CODE_FOR_rvtt_wh_sfpsetsgn_i_int = 441,
  CODE_FOR_rvtt_wh_sfpsetman_i_int = 442,
  CODE_FOR_rvtt_wh_sfpmad_int = 443,
  CODE_FOR_rvtt_wh_sfpsetcc_i = 444,
  CODE_FOR_rvtt_wh_sfpsetcc_v = 445,
  CODE_FOR_rvtt_wh_sfpencc = 446,
  CODE_FOR_rvtt_wh_sfpcompc = 447,
  CODE_FOR_rvtt_wh_sfppushc = 448,
  CODE_FOR_rvtt_wh_sfppopc = 449,
  CODE_FOR_rvtt_wh_sfplut = 450,
  CODE_FOR_rvtt_wh_sfplutfp32_3r = 451,
  CODE_FOR_rvtt_wh_sfplutfp32_6r = 452,
  CODE_FOR_rvtt_wh_sfpconfig_v = 453,
  CODE_FOR_rvtt_wh_sfpreplay = 454,
  CODE_FOR_rvtt_wh_sfpswap_int = 455,
  CODE_FOR_rvtt_wh_sfptransp = 456,
  CODE_FOR_rvtt_wh_sfpshft2_g = 457,
  CODE_FOR_rvtt_wh_sfpshft2_ge = 458,
  CODE_FOR_rvtt_wh_sfpnop = 459,
  CODE_FOR_mulditi3 = 460,
  CODE_FOR_umulditi3 = 461,
  CODE_FOR_usmulditi3 = 462,
  CODE_FOR_mulsidi3 = 463,
  CODE_FOR_umulsidi3 = 464,
  CODE_FOR_usmulsidi3 = 465,
  CODE_FOR_movdi = 466,
  CODE_FOR_movsi = 467,
  CODE_FOR_movhi = 468,
  CODE_FOR_movqi = 469,
  CODE_FOR_movsf = 470,
  CODE_FOR_movdf = 471,
  CODE_FOR_cpymemsi = 472,
  CODE_FOR_clear_cache = 473,
  CODE_FOR_movsicc = 474,
  CODE_FOR_movdicc = 475,
  CODE_FOR_condjump = 476,
  CODE_FOR_cbranchqi4 = 477,
  CODE_FOR_cbranchsi4 = 478,
  CODE_FOR_cbranchdi4 = 479,
  CODE_FOR_cbranchsf4 = 480,
  CODE_FOR_cbranchdf4 = 481,
  CODE_FOR_cstoresi4 = 482,
  CODE_FOR_cstoredi4 = 483,
  CODE_FOR_cstoresf4 = 484,
  CODE_FOR_cstoredf4 = 485,
  CODE_FOR_flt_quietsfsi4 = 486,
  CODE_FOR_fle_quietsfsi4 = 487,
  CODE_FOR_flt_quietsfdi4 = 488,
  CODE_FOR_fle_quietsfdi4 = 489,
  CODE_FOR_flt_quietdfsi4 = 490,
  CODE_FOR_fle_quietdfsi4 = 491,
  CODE_FOR_flt_quietdfdi4 = 492,
  CODE_FOR_fle_quietdfdi4 = 493,
  CODE_FOR_indirect_jump = 494,
  CODE_FOR_tablejump = 495,
  CODE_FOR_prologue = 496,
  CODE_FOR_epilogue = 497,
  CODE_FOR_sibcall_epilogue = 498,
  CODE_FOR_return = 499,
  CODE_FOR_eh_return = 500,
  CODE_FOR_sibcall = 501,
  CODE_FOR_sibcall_value = 502,
  CODE_FOR_call = 503,
  CODE_FOR_call_value = 504,
  CODE_FOR_untyped_call = 505,
  CODE_FOR_restore_stack_nonlocal = 506,
  CODE_FOR_mem_thread_fence = 507,
  CODE_FOR_atomic_compare_and_swapsi = 508,
  CODE_FOR_atomic_compare_and_swapdi = 509,
  CODE_FOR_atomic_test_and_set = 510,
  CODE_FOR_movv64sf = 511,
  CODE_FOR_rvtt_sfpassignlreg = 512,
  CODE_FOR_rvtt_sfpxicmps = 513,
  CODE_FOR_rvtt_sfpxicmpv = 514,
  CODE_FOR_rvtt_sfpxvif = 515,
  CODE_FOR_rvtt_sfpxbool = 516,
  CODE_FOR_rvtt_sfpxcondb = 517,
  CODE_FOR_rvtt_sfpxcondi = 518,
  CODE_FOR_rvtt_gs_sfppreservelreg = 519,
  CODE_FOR_rvtt_gs_sfpload = 520,
  CODE_FOR_rvtt_gs_sfpload_lv = 521,
  CODE_FOR_rvtt_gs_sfpxloadi = 522,
  CODE_FOR_rvtt_gs_sfpxloadi_lv = 523,
  CODE_FOR_rvtt_gs_sfpstore = 524,
  CODE_FOR_rvtt_gs_sfpmuli = 525,
  CODE_FOR_rvtt_gs_sfpaddi = 526,
  CODE_FOR_rvtt_gs_sfpdivp2 = 527,
  CODE_FOR_rvtt_gs_sfpdivp2_lv = 528,
  CODE_FOR_rvtt_gs_sfpexexp = 529,
  CODE_FOR_rvtt_gs_sfpexman = 530,
  CODE_FOR_rvtt_gs_sfpabs = 531,
  CODE_FOR_rvtt_gs_sfpmov = 532,
  CODE_FOR_rvtt_gs_sfplz = 533,
  CODE_FOR_rvtt_gs_sfpexexp_lv = 534,
  CODE_FOR_rvtt_gs_sfpexman_lv = 535,
  CODE_FOR_rvtt_gs_sfpabs_lv = 536,
  CODE_FOR_rvtt_gs_sfpmov_lv = 537,
  CODE_FOR_rvtt_gs_sfplz_lv = 538,
  CODE_FOR_rvtt_gs_sfpmul = 539,
  CODE_FOR_rvtt_gs_sfpadd = 540,
  CODE_FOR_rvtt_gs_sfpmul_lv = 541,
  CODE_FOR_rvtt_gs_sfpadd_lv = 542,
  CODE_FOR_rvtt_gs_sfpxiadd_v = 543,
  CODE_FOR_rvtt_gs_sfpxiadd_i = 544,
  CODE_FOR_rvtt_gs_sfpxiadd_i_lv = 545,
  CODE_FOR_rvtt_gs_sfpshft_i = 546,
  CODE_FOR_rvtt_gs_sfpnot = 547,
  CODE_FOR_rvtt_gs_sfpnot_lv = 548,
  CODE_FOR_rvtt_gs_sfpsetexp_i = 549,
  CODE_FOR_rvtt_gs_sfpsetman_i = 550,
  CODE_FOR_rvtt_gs_sfpsetsgn_i = 551,
  CODE_FOR_rvtt_gs_sfpsetexp_i_lv = 552,
  CODE_FOR_rvtt_gs_sfpsetman_i_lv = 553,
  CODE_FOR_rvtt_gs_sfpsetsgn_i_lv = 554,
  CODE_FOR_rvtt_gs_sfpmad = 555,
  CODE_FOR_rvtt_gs_sfpmad_lv = 556,
  CODE_FOR_rvtt_gs_sfpxfcmps = 557,
  CODE_FOR_rvtt_gs_sfpxfcmpv = 558,
  CODE_FOR_rvtt_wh_sfppreservelreg = 559,
  CODE_FOR_rvtt_wh_sfpload = 560,
  CODE_FOR_rvtt_wh_sfpload_lv = 561,
  CODE_FOR_rvtt_wh_sfpxloadi = 562,
  CODE_FOR_rvtt_wh_sfpxloadi_lv = 563,
  CODE_FOR_rvtt_wh_sfpstore = 564,
  CODE_FOR_rvtt_wh_sfpmuli = 565,
  CODE_FOR_rvtt_wh_sfpaddi = 566,
  CODE_FOR_rvtt_wh_sfpdivp2 = 567,
  CODE_FOR_rvtt_wh_sfpdivp2_lv = 568,
  CODE_FOR_rvtt_wh_sfpexexp = 569,
  CODE_FOR_rvtt_wh_sfpexman = 570,
  CODE_FOR_rvtt_wh_sfpabs = 571,
  CODE_FOR_rvtt_wh_sfpmov = 572,
  CODE_FOR_rvtt_wh_sfplz = 573,
  CODE_FOR_rvtt_wh_sfpexexp_lv = 574,
  CODE_FOR_rvtt_wh_sfpexman_lv = 575,
  CODE_FOR_rvtt_wh_sfpabs_lv = 576,
  CODE_FOR_rvtt_wh_sfpmov_lv = 577,
  CODE_FOR_rvtt_wh_sfplz_lv = 578,
  CODE_FOR_rvtt_wh_sfpmul = 579,
  CODE_FOR_rvtt_wh_sfpadd = 580,
  CODE_FOR_rvtt_wh_sfpmul_lv = 581,
  CODE_FOR_rvtt_wh_sfpadd_lv = 582,
  CODE_FOR_rvtt_wh_sfpxiadd_v = 583,
  CODE_FOR_rvtt_wh_sfpxiadd_i = 584,
  CODE_FOR_rvtt_wh_sfpxiadd_i_lv = 585,
  CODE_FOR_rvtt_wh_sfpshft_i = 586,
  CODE_FOR_rvtt_wh_sfpnot = 587,
  CODE_FOR_rvtt_wh_sfpnot_lv = 588,
  CODE_FOR_rvtt_wh_sfpcast = 589,
  CODE_FOR_rvtt_wh_sfpcast_lv = 590,
  CODE_FOR_rvtt_wh_sfpshft2_e = 591,
  CODE_FOR_rvtt_wh_sfpshft2_e_lv = 592,
  CODE_FOR_rvtt_wh_sfpstochrnd_i = 593,
  CODE_FOR_rvtt_wh_sfpstochrnd_i_lv = 594,
  CODE_FOR_rvtt_wh_sfpstochrnd_v = 595,
  CODE_FOR_rvtt_wh_sfpstochrnd_v_lv = 596,
  CODE_FOR_rvtt_wh_sfpsetexp_i = 597,
  CODE_FOR_rvtt_wh_sfpsetsgn_i = 598,
  CODE_FOR_rvtt_wh_sfpsetexp_i_lv = 599,
  CODE_FOR_rvtt_wh_sfpsetsgn_i_lv = 600,
  CODE_FOR_rvtt_wh_sfpsetman_i = 601,
  CODE_FOR_rvtt_wh_sfpsetman_i_lv = 602,
  CODE_FOR_rvtt_wh_sfpmad = 603,
  CODE_FOR_rvtt_wh_sfpmad_lv = 604,
  CODE_FOR_rvtt_wh_sfpxfcmps = 605,
  CODE_FOR_rvtt_wh_sfpxfcmpv = 606,
  CODE_FOR_rvtt_wh_sfpswap = 607
};

const unsigned int NUM_INSN_CODES = 608;
#endif /* GCC_INSN_CODES_H */