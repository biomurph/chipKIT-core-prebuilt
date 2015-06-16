/* Generated automatically by the program `genflags'
   from the machine description file `md'.  */

#ifndef GCC_INSN_FLAGS_H
#define GCC_INSN_FLAGS_H

#define HAVE_ls2_alu1_turn_enabled_insn (TUNE_LOONGSON_2EF)
#define HAVE_ls2_alu2_turn_enabled_insn (TUNE_LOONGSON_2EF)
#define HAVE_ls2_falu1_turn_enabled_insn (TUNE_LOONGSON_2EF)
#define HAVE_ls2_falu2_turn_enabled_insn (TUNE_LOONGSON_2EF)
#define HAVE_trap 1
#define HAVE_subsi3 1
#define HAVE_mulsi3_mul3_ls2ef (TARGET_LOONGSON_2EF)
#define HAVE_mulsi3_mul3 (ISA_HAS_MUL3)
#define HAVE_mulsi3_internal (!TARGET_FIX_R4000)
#define HAVE_mulsi3_r4000 (TARGET_FIX_R4000)
#define HAVE_mulsidi3_32bit (!TARGET_64BIT && (!TARGET_FIX_R4000 || ISA_HAS_DSP))
#define HAVE_umulsidi3_32bit (!TARGET_64BIT && (!TARGET_FIX_R4000 || ISA_HAS_DSP))
#define HAVE_mulsidi3_32bit_r4000 (!TARGET_64BIT && TARGET_FIX_R4000)
#define HAVE_umulsidi3_32bit_r4000 (!TARGET_64BIT && TARGET_FIX_R4000)
#define HAVE_msubsidi4 (!TARGET_64BIT && (ISA_HAS_MSAC || GENERATE_MADD_MSUB || ISA_HAS_DSP))
#define HAVE_umsubsidi4 (!TARGET_64BIT && (ISA_HAS_MSAC || GENERATE_MADD_MSUB || ISA_HAS_DSP))
#define HAVE_smulsi3_highpart_internal (!ISA_HAS_MULHI)
#define HAVE_umulsi3_highpart_internal (!ISA_HAS_MULHI)
#define HAVE_smulsi3_highpart_mulhi_internal (ISA_HAS_MULHI)
#define HAVE_umulsi3_highpart_mulhi_internal (ISA_HAS_MULHI)
#define HAVE_madsi (TARGET_MAD)
#define HAVE_maddsidi4 ((TARGET_MAD || ISA_HAS_MACC || GENERATE_MADD_MSUB || ISA_HAS_DSP) \
   && !TARGET_64BIT)
#define HAVE_umaddsidi4 ((TARGET_MAD || ISA_HAS_MACC || GENERATE_MADD_MSUB || ISA_HAS_DSP) \
   && !TARGET_64BIT)
#define HAVE_divmodsi4_internal (!TARGET_FIX_VR4120 && !TARGET_MIPS16)
#define HAVE_udivmodsi4_internal (!TARGET_MIPS16)
#define HAVE_divmodsi4_hilo_di 1
#define HAVE_udivmodsi4_hilo_di 1
#define HAVE_clzsi2 (ISA_HAS_CLZ_CLO)
#define HAVE_popcountsi2 (ISA_HAS_POP)
#define HAVE_negsi2 1
#define HAVE_one_cmplsi2 1
#define HAVE_extvsi (ISA_HAS_EXTS && UINTVAL (operands[2]) <= 32)
#define HAVE_extzvsi (mips_use_ins_ext_p (operands[1], INTVAL (operands[2]), \
		       INTVAL (operands[3])))
#define HAVE_extzvdi ((mips_use_ins_ext_p (operands[1], INTVAL (operands[2]), \
		       INTVAL (operands[3]))) && (TARGET_64BIT))
#define HAVE_insvsi (mips_use_ins_ext_p (operands[0], INTVAL (operands[1]), \
		       INTVAL (operands[2])))
#define HAVE_insvdi ((mips_use_ins_ext_p (operands[0], INTVAL (operands[1]), \
		       INTVAL (operands[2]))) && (TARGET_64BIT))
#define HAVE_mov_lwl (!TARGET_MIPS16 \
   && !ISA_HAS_UL_US \
   && mips_mem_fits_mode_p (SImode, operands[1]))
#define HAVE_mov_ldl ((!TARGET_MIPS16 \
   && !ISA_HAS_UL_US \
   && mips_mem_fits_mode_p (DImode, operands[1])) && (TARGET_64BIT))
#define HAVE_mov_lwr (!TARGET_MIPS16 \
   && !ISA_HAS_UL_US \
   && mips_mem_fits_mode_p (SImode, operands[1]))
#define HAVE_mov_ldr ((!TARGET_MIPS16 \
   && !ISA_HAS_UL_US \
   && mips_mem_fits_mode_p (DImode, operands[1])) && (TARGET_64BIT))
#define HAVE_mov_swl (!TARGET_MIPS16 \
   && !ISA_HAS_UL_US \
   && mips_mem_fits_mode_p (SImode, operands[0]))
#define HAVE_mov_sdl ((!TARGET_MIPS16 \
   && !ISA_HAS_UL_US \
   && mips_mem_fits_mode_p (DImode, operands[0])) && (TARGET_64BIT))
#define HAVE_mov_swr (!TARGET_MIPS16 && mips_mem_fits_mode_p (SImode, operands[0]))
#define HAVE_mov_sdr ((!TARGET_MIPS16 && mips_mem_fits_mode_p (DImode, operands[0])) && (TARGET_64BIT))
#define HAVE_load_gotsi 1
#define HAVE_mfhisi_di 1
#define HAVE_mthisi_di 1
#define HAVE_loadgp_newabi_si ((mips_current_loadgp_style () == LOADGP_NEWABI) && (Pmode == SImode))
#define HAVE_loadgp_newabi_di ((mips_current_loadgp_style () == LOADGP_NEWABI) && (Pmode == DImode))
#define HAVE_loadgp_absolute_si ((mips_current_loadgp_style () == LOADGP_ABSOLUTE) && (Pmode == SImode))
#define HAVE_loadgp_absolute_di ((mips_current_loadgp_style () == LOADGP_ABSOLUTE) && (Pmode == DImode))
#define HAVE_loadgp_blockage 1
#define HAVE_loadgp_rtp_si ((mips_current_loadgp_style () == LOADGP_RTP) && (Pmode == SImode))
#define HAVE_loadgp_rtp_di ((mips_current_loadgp_style () == LOADGP_RTP) && (Pmode == DImode))
#define HAVE_copygp_mips16 (TARGET_MIPS16)
#define HAVE_potential_cprestore (!TARGET_CPRESTORE_DIRECTIVE || operands[2] == pic_offset_table_rtx)
#define HAVE_cprestore (TARGET_CPRESTORE_DIRECTIVE)
#define HAVE_use_cprestore 1
#define HAVE_sync (GENERATE_SYNC)
#define HAVE_synci (TARGET_SYNCI)
#define HAVE_rdhwr_synci_step_si ((ISA_HAS_SYNCI) && (Pmode == SImode))
#define HAVE_clear_hazard_si ((ISA_HAS_SYNCI) && (Pmode == SImode))
#define HAVE_mips_cache (ISA_HAS_CACHE)
#define HAVE_r10k_cache_barrier (ISA_HAS_CACHE)
#define HAVE_rotrsi3 (ISA_HAS_ROR)
#define HAVE_branch_equalitysi (!TARGET_MIPS16 && !TARGET_MICROMIPS)
#define HAVE_indirect_jumpsi 1
#define HAVE_tablejumpsi 1
#define HAVE_casesi_internal_mips16 (TARGET_MIPS16_SHORT_JUMP_TABLES)
#define HAVE_blockage 1
#define HAVE_return_internal 1
#define HAVE_simple_return_internal 1
#define HAVE_mips_eret 1
#define HAVE_mips_deret 1
#define HAVE_mips_di 1
#define HAVE_pic32_di 1
#define HAVE_pic32_ei 1
#define HAVE_pic32_sdbbp0 1
#define HAVE_mips_ehb 1
#define HAVE_mips_rdpgpr 1
#define HAVE_mips_wrpgpr 1
#define HAVE_cop0_move 1
#define HAVE_eh_set_lr_si 1
#define HAVE_restore_gp (TARGET_CALL_CLOBBERED_GP)
#define HAVE_move_gpsi 1
#define HAVE_load_callsi ((TARGET_USE_GOT) && (Pmode == SImode))
#define HAVE_set_got_version (TARGET_USE_GOT)
#define HAVE_update_got_version (TARGET_USE_GOT)
#define HAVE_sibcall_internal (mchp_check_for_conversion(insn) && TARGET_SIBCALLS && SIBLING_CALL_P (insn))
#define HAVE_sibcall_value_internal ((mchp_check_for_conversion(insn)) && TARGET_SIBCALLS && SIBLING_CALL_P (insn))
#define HAVE_sibcall_value_multiple_internal ((mchp_check_for_conversion(insn)) && TARGET_SIBCALLS && SIBLING_CALL_P (insn))
#define HAVE_call_internal ((mchp_check_for_conversion(insn)))
#define HAVE_call_split ((mchp_check_for_conversion(insn)) && TARGET_SPLIT_CALLS)
#define HAVE_call_internal_direct ((mchp_check_for_conversion(insn)))
#define HAVE_call_direct_split ( (mchp_check_for_conversion(insn)) && TARGET_SPLIT_CALLS)
#define HAVE_call_value_internal ((mchp_check_for_conversion(insn)))
#define HAVE_call_value_split ((mchp_check_for_conversion(insn)) && TARGET_SPLIT_CALLS)
#define HAVE_call_value_internal_direct ((mchp_check_for_conversion(insn)))
#define HAVE_call_value_direct_split ((mchp_check_for_conversion(insn)) && TARGET_SPLIT_CALLS)
#define HAVE_call_value_multiple_internal ((mchp_check_for_conversion(insn)))
#define HAVE_call_value_multiple_split ((mchp_check_for_conversion(insn)) && TARGET_SPLIT_CALLS)
#define HAVE_prefetch (ISA_HAS_PREFETCH && TARGET_EXPLICIT_RELOCS)
#define HAVE_nop 1
#define HAVE_hazard_nop 1
#define HAVE_bifnop32 1
#define HAVE_bifnop16 1
#define HAVE_pic32_switch_isabase 1
#define HAVE_pic32_mfc0 1
#define HAVE_pic32_mtc0 1
#define HAVE_pic32_mxc0 1
#define HAVE_pic32_bcc0 1
#define HAVE_pic32_bsc0 1
#define HAVE_pic32_bcsc0 1
#define HAVE_pic32_unique_id 1
#define HAVE_pic32_unique_id_32 (!TARGET_MIPS16)
#define HAVE_pic32_unique_id_16 (TARGET_MIPS16)
#define HAVE_consttable_tls_reloc (TARGET_MIPS16_PCREL_LOADS)
#define HAVE_consttable_int (TARGET_MIPS16)
#define HAVE_consttable_float (TARGET_MIPS16)
#define HAVE_align 1
#define HAVE_pic32_section_begin_32el (!TARGET_MIPS16)
#define HAVE_pic32_section_begin_16el (TARGET_MIPS16)
#define HAVE_pic32_section_end_32el (!TARGET_MIPS16)
#define HAVE_pic32_section_end_16el (TARGET_MIPS16)
#define HAVE_pic32_section_size_32el (!TARGET_MIPS16)
#define HAVE_pic32_section_size_16el (TARGET_MIPS16)
#define HAVE_pic32_get_interrupt_state_mips16 1
#define HAVE_pic32_set_interrupt_state_mips16 1
#define HAVE_sync_compare_and_swapsi (GENERATE_LL_SC)
#define HAVE_mips_val_compare_and_swap_acq (GENERATE_LL_SC)
#define HAVE_mips_val_compare_and_swap_rel (GENERATE_LL_SC)
#define HAVE_mips_bool_compare_and_swap_acq (GENERATE_LL_SC)
#define HAVE_mips_bool_compare_and_swap_rel (GENERATE_LL_SC)
#define HAVE_compare_and_swap_12 (GENERATE_LL_SC)
#define HAVE_sync_add_ldaddsi (GENERATE_LDADD)
#define HAVE_sync_add_ll_scsi (GENERATE_LL_SC && !GENERATE_LDADD)
#define HAVE_sync_add_12 (GENERATE_LL_SC)
#define HAVE_sync_sub_12 (GENERATE_LL_SC)
#define HAVE_sync_ior_12 (GENERATE_LL_SC)
#define HAVE_sync_xor_12 (GENERATE_LL_SC)
#define HAVE_sync_and_12 (GENERATE_LL_SC)
#define HAVE_sync_old_add_12 (GENERATE_LL_SC)
#define HAVE_sync_old_sub_12 (GENERATE_LL_SC)
#define HAVE_sync_old_ior_12 (GENERATE_LL_SC)
#define HAVE_sync_old_xor_12 (GENERATE_LL_SC)
#define HAVE_sync_old_and_12 (GENERATE_LL_SC)
#define HAVE_sync_new_add_12 (GENERATE_LL_SC)
#define HAVE_sync_new_sub_12 (GENERATE_LL_SC)
#define HAVE_sync_new_ior_12 (GENERATE_LL_SC)
#define HAVE_sync_new_xor_12 (GENERATE_LL_SC)
#define HAVE_sync_new_and_12 (GENERATE_LL_SC)
#define HAVE_sync_nand_12 (GENERATE_LL_SC)
#define HAVE_sync_old_nand_12 (GENERATE_LL_SC)
#define HAVE_sync_new_nand_12 (GENERATE_LL_SC)
#define HAVE_sync_sub_ldaddsi (GENERATE_LDADD)
#define HAVE_sync_sub_ll_scsi (GENERATE_LL_SC && !GENERATE_LDADD)
#define HAVE_sync_old_add_ldaddsi (GENERATE_LDADD)
#define HAVE_sync_old_add_ll_scsi (GENERATE_LL_SC && !GENERATE_LDADD)
#define HAVE_sync_old_sub_ldaddsi (GENERATE_LDADD)
#define HAVE_sync_old_sub_ll_scsi (GENERATE_LL_SC && !GENERATE_LDADD)
#define HAVE_sync_new_add_ll_scsi (GENERATE_LL_SC && !GENERATE_LDADD)
#define HAVE_sync_new_sub_ll_scsi (GENERATE_LL_SC)
#define HAVE_sync_iorsi (GENERATE_LL_SC)
#define HAVE_sync_xorsi (GENERATE_LL_SC)
#define HAVE_sync_andsi (GENERATE_LL_SC)
#define HAVE_sync_old_iorsi (GENERATE_LL_SC)
#define HAVE_sync_old_xorsi (GENERATE_LL_SC)
#define HAVE_sync_old_andsi (GENERATE_LL_SC)
#define HAVE_sync_new_iorsi (GENERATE_LL_SC)
#define HAVE_sync_new_xorsi (GENERATE_LL_SC)
#define HAVE_sync_new_andsi (GENERATE_LL_SC)
#define HAVE_sync_nandsi (GENERATE_LL_SC)
#define HAVE_sync_old_nandsi (GENERATE_LL_SC)
#define HAVE_sync_new_nandsi (GENERATE_LL_SC)
#define HAVE_mips_swap_ll_sc_acq (GENERATE_LL_SC && !GENERATE_SWAP)
#define HAVE_mips_swap_ll_sc_rel (GENERATE_LL_SC && !GENERATE_SWAP)
#define HAVE_mips_swap_acq (GENERATE_SWAP)
#define HAVE_mips_swap_rel (GENERATE_SWAP)
#define HAVE_test_and_set_12 (GENERATE_LL_SC)
#define HAVE_addv2hi3 (ISA_HAS_DSP)
#define HAVE_addv4qi3 (ISA_HAS_DSP)
#define HAVE_mips_addq_s_w (ISA_HAS_DSP)
#define HAVE_mips_addq_s_ph (ISA_HAS_DSP)
#define HAVE_mips_addu_s_qb (ISA_HAS_DSP)
#define HAVE_subv2hi3 (ISA_HAS_DSP)
#define HAVE_subv4qi3 (ISA_HAS_DSP)
#define HAVE_mips_subq_s_w (ISA_HAS_DSP)
#define HAVE_mips_subq_s_ph (ISA_HAS_DSP)
#define HAVE_mips_subu_s_qb (ISA_HAS_DSP)
#define HAVE_mips_addsc (ISA_HAS_DSP)
#define HAVE_mips_addwc (ISA_HAS_DSP)
#define HAVE_mips_modsub (ISA_HAS_DSP)
#define HAVE_mips_raddu_w_qb (ISA_HAS_DSP)
#define HAVE_mips_absq_s_w (ISA_HAS_DSP)
#define HAVE_mips_absq_s_ph (ISA_HAS_DSP)
#define HAVE_mips_precrq_qb_ph (ISA_HAS_DSP)
#define HAVE_mips_precrq_ph_w (ISA_HAS_DSP)
#define HAVE_mips_precrq_rs_ph_w (ISA_HAS_DSP)
#define HAVE_mips_precrqu_s_qb_ph (ISA_HAS_DSP)
#define HAVE_mips_preceq_w_phl (ISA_HAS_DSP)
#define HAVE_mips_preceq_w_phr (ISA_HAS_DSP)
#define HAVE_mips_precequ_ph_qbl (ISA_HAS_DSP)
#define HAVE_mips_precequ_ph_qbr (ISA_HAS_DSP)
#define HAVE_mips_precequ_ph_qbla (ISA_HAS_DSP)
#define HAVE_mips_precequ_ph_qbra (ISA_HAS_DSP)
#define HAVE_mips_preceu_ph_qbl (ISA_HAS_DSP)
#define HAVE_mips_preceu_ph_qbr (ISA_HAS_DSP)
#define HAVE_mips_preceu_ph_qbla (ISA_HAS_DSP)
#define HAVE_mips_preceu_ph_qbra (ISA_HAS_DSP)
#define HAVE_mips_shll_ph (ISA_HAS_DSP)
#define HAVE_mips_shll_qb (ISA_HAS_DSP)
#define HAVE_mips_shll_s_w (ISA_HAS_DSP)
#define HAVE_mips_shll_s_ph (ISA_HAS_DSP)
#define HAVE_mips_shrl_qb (ISA_HAS_DSP)
#define HAVE_mips_shra_ph (ISA_HAS_DSP)
#define HAVE_mips_shra_r_w (ISA_HAS_DSP)
#define HAVE_mips_shra_r_ph (ISA_HAS_DSP)
#define HAVE_mips_muleu_s_ph_qbl (ISA_HAS_DSP)
#define HAVE_mips_muleu_s_ph_qbr (ISA_HAS_DSP)
#define HAVE_mips_mulq_rs_ph (ISA_HAS_DSP)
#define HAVE_mips_muleq_s_w_phl (ISA_HAS_DSP)
#define HAVE_mips_muleq_s_w_phr (ISA_HAS_DSP)
#define HAVE_mips_dpau_h_qbl (ISA_HAS_DSP && !TARGET_64BIT)
#define HAVE_mips_dpau_h_qbr (ISA_HAS_DSP && !TARGET_64BIT)
#define HAVE_mips_dpsu_h_qbl (ISA_HAS_DSP && !TARGET_64BIT)
#define HAVE_mips_dpsu_h_qbr (ISA_HAS_DSP && !TARGET_64BIT)
#define HAVE_mips_dpaq_s_w_ph (ISA_HAS_DSP && !TARGET_64BIT)
#define HAVE_mips_dpsq_s_w_ph (ISA_HAS_DSP && !TARGET_64BIT)
#define HAVE_mips_mulsaq_s_w_ph (ISA_HAS_DSP && !TARGET_64BIT)
#define HAVE_mips_dpaq_sa_l_w (ISA_HAS_DSP && !TARGET_64BIT)
#define HAVE_mips_dpsq_sa_l_w (ISA_HAS_DSP && !TARGET_64BIT)
#define HAVE_mips_maq_s_w_phl (ISA_HAS_DSP && !TARGET_64BIT)
#define HAVE_mips_maq_s_w_phr (ISA_HAS_DSP && !TARGET_64BIT)
#define HAVE_mips_maq_sa_w_phl (ISA_HAS_DSP && !TARGET_64BIT)
#define HAVE_mips_maq_sa_w_phr (ISA_HAS_DSP && !TARGET_64BIT)
#define HAVE_mips_bitrev (ISA_HAS_DSP)
#define HAVE_mips_insv (ISA_HAS_DSP)
#define HAVE_mips_repl_qb (ISA_HAS_DSP)
#define HAVE_mips_repl_ph (ISA_HAS_DSP)
#define HAVE_mips_cmp_eq_ph (ISA_HAS_DSP)
#define HAVE_mips_cmpu_eq_qb (ISA_HAS_DSP)
#define HAVE_mips_cmp_lt_ph (ISA_HAS_DSP)
#define HAVE_mips_cmpu_lt_qb (ISA_HAS_DSP)
#define HAVE_mips_cmp_le_ph (ISA_HAS_DSP)
#define HAVE_mips_cmpu_le_qb (ISA_HAS_DSP)
#define HAVE_mips_cmpgu_eq_qb (ISA_HAS_DSP)
#define HAVE_mips_cmpgu_lt_qb (ISA_HAS_DSP)
#define HAVE_mips_cmpgu_le_qb (ISA_HAS_DSP)
#define HAVE_mips_pick_ph (ISA_HAS_DSP)
#define HAVE_mips_pick_qb (ISA_HAS_DSP)
#define HAVE_mips_packrl_ph (ISA_HAS_DSP)
#define HAVE_mips_extr_w (ISA_HAS_DSP && !TARGET_64BIT)
#define HAVE_mips_extr_r_w (ISA_HAS_DSP && !TARGET_64BIT)
#define HAVE_mips_extr_rs_w (ISA_HAS_DSP && !TARGET_64BIT)
#define HAVE_mips_extr_s_h (ISA_HAS_DSP && !TARGET_64BIT)
#define HAVE_mips_extp (ISA_HAS_DSP && !TARGET_64BIT)
#define HAVE_mips_extpdp (ISA_HAS_DSP && !TARGET_64BIT)
#define HAVE_mips_shilo (ISA_HAS_DSP && !TARGET_64BIT)
#define HAVE_mips_mthlip (ISA_HAS_DSP && !TARGET_64BIT)
#define HAVE_mips_wrdsp (ISA_HAS_DSP)
#define HAVE_mips_rddsp (ISA_HAS_DSP)
#define HAVE_mips_lbux_si ((ISA_HAS_DSP) && (Pmode == SImode))
#define HAVE_mips_lhx_si ((ISA_HAS_DSP) && (Pmode == SImode))
#define HAVE_mips_lwx_si ((ISA_HAS_DSP) && (Pmode == SImode))
#define HAVE_mips_bposge (ISA_HAS_DSP)
#define HAVE_mips_absq_s_qb (ISA_HAS_DSPR2)
#define HAVE_mips_addu_ph (ISA_HAS_DSPR2)
#define HAVE_mips_addu_s_ph (ISA_HAS_DSPR2)
#define HAVE_mips_adduh_qb (ISA_HAS_DSPR2)
#define HAVE_mips_adduh_r_qb (ISA_HAS_DSPR2)
#define HAVE_mips_append (ISA_HAS_DSPR2)
#define HAVE_mips_balign (ISA_HAS_DSPR2)
#define HAVE_mips_cmpgdu_eq_qb (ISA_HAS_DSPR2)
#define HAVE_mips_cmpgdu_lt_qb (ISA_HAS_DSPR2)
#define HAVE_mips_cmpgdu_le_qb (ISA_HAS_DSPR2)
#define HAVE_mips_dpa_w_ph (ISA_HAS_DSPR2 && !TARGET_64BIT)
#define HAVE_mips_dps_w_ph (ISA_HAS_DSPR2 && !TARGET_64BIT)
#define HAVE_mulv2hi3 (ISA_HAS_DSPR2)
#define HAVE_mips_mul_s_ph (ISA_HAS_DSPR2)
#define HAVE_mips_mulq_rs_w (ISA_HAS_DSPR2)
#define HAVE_mips_mulq_s_ph (ISA_HAS_DSPR2)
#define HAVE_mips_mulq_s_w (ISA_HAS_DSPR2)
#define HAVE_mips_mulsa_w_ph (ISA_HAS_DSPR2 && !TARGET_64BIT)
#define HAVE_mips_precr_qb_ph (ISA_HAS_DSPR2)
#define HAVE_mips_precr_sra_ph_w (ISA_HAS_DSPR2)
#define HAVE_mips_precr_sra_r_ph_w (ISA_HAS_DSPR2)
#define HAVE_mips_prepend (ISA_HAS_DSPR2)
#define HAVE_mips_shra_qb (ISA_HAS_DSPR2)
#define HAVE_mips_shra_r_qb (ISA_HAS_DSPR2)
#define HAVE_mips_shrl_ph (ISA_HAS_DSPR2)
#define HAVE_mips_subu_ph (ISA_HAS_DSPR2)
#define HAVE_mips_subu_s_ph (ISA_HAS_DSPR2)
#define HAVE_mips_subuh_qb (ISA_HAS_DSPR2)
#define HAVE_mips_subuh_r_qb (ISA_HAS_DSPR2)
#define HAVE_mips_addqh_ph (ISA_HAS_DSPR2)
#define HAVE_mips_addqh_r_ph (ISA_HAS_DSPR2)
#define HAVE_mips_addqh_w (ISA_HAS_DSPR2)
#define HAVE_mips_addqh_r_w (ISA_HAS_DSPR2)
#define HAVE_mips_subqh_ph (ISA_HAS_DSPR2)
#define HAVE_mips_subqh_r_ph (ISA_HAS_DSPR2)
#define HAVE_mips_subqh_w (ISA_HAS_DSPR2)
#define HAVE_mips_subqh_r_w (ISA_HAS_DSPR2)
#define HAVE_mips_dpax_w_ph (ISA_HAS_DSPR2 && !TARGET_64BIT)
#define HAVE_mips_dpsx_w_ph (ISA_HAS_DSPR2 && !TARGET_64BIT)
#define HAVE_mips_dpaqx_s_w_ph (ISA_HAS_DSPR2 && !TARGET_64BIT)
#define HAVE_mips_dpaqx_sa_w_ph (ISA_HAS_DSPR2 && !TARGET_64BIT)
#define HAVE_mips_dpsqx_s_w_ph (ISA_HAS_DSPR2 && !TARGET_64BIT)
#define HAVE_mips_dpsqx_sa_w_ph (ISA_HAS_DSPR2 && !TARGET_64BIT)
#define HAVE_addqq3 1
#define HAVE_addhq3 1
#define HAVE_addsq3 1
#define HAVE_adduqq3 1
#define HAVE_adduhq3 1
#define HAVE_addusq3 1
#define HAVE_addha3 1
#define HAVE_addsa3 1
#define HAVE_adduha3 1
#define HAVE_addusa3 1
#define HAVE_usadduqq3 (ISA_HAS_DSP)
#define HAVE_usadduhq3 (ISA_HAS_DSPR2)
#define HAVE_usadduha3 (ISA_HAS_DSPR2)
#define HAVE_usaddv4uqq3 (ISA_HAS_DSP)
#define HAVE_usaddv2uhq3 (ISA_HAS_DSPR2)
#define HAVE_usaddv2uha3 (ISA_HAS_DSPR2)
#define HAVE_ssaddhq3 (ISA_HAS_DSP)
#define HAVE_ssaddsq3 (ISA_HAS_DSP)
#define HAVE_ssaddha3 (ISA_HAS_DSP)
#define HAVE_ssaddsa3 (ISA_HAS_DSP)
#define HAVE_ssaddv2hq3 (ISA_HAS_DSP)
#define HAVE_ssaddv2ha3 (ISA_HAS_DSP)
#define HAVE_subqq3 1
#define HAVE_subhq3 1
#define HAVE_subsq3 1
#define HAVE_subuqq3 1
#define HAVE_subuhq3 1
#define HAVE_subusq3 1
#define HAVE_subha3 1
#define HAVE_subsa3 1
#define HAVE_subuha3 1
#define HAVE_subusa3 1
#define HAVE_ussubuqq3 (ISA_HAS_DSP)
#define HAVE_ussubuhq3 (ISA_HAS_DSPR2)
#define HAVE_ussubuha3 (ISA_HAS_DSPR2)
#define HAVE_ussubv4uqq3 (ISA_HAS_DSP)
#define HAVE_ussubv2uhq3 (ISA_HAS_DSPR2)
#define HAVE_ussubv2uha3 (ISA_HAS_DSPR2)
#define HAVE_sssubhq3 (ISA_HAS_DSP)
#define HAVE_sssubsq3 (ISA_HAS_DSP)
#define HAVE_sssubha3 (ISA_HAS_DSP)
#define HAVE_sssubsa3 (ISA_HAS_DSP)
#define HAVE_sssubv2hq3 (ISA_HAS_DSP)
#define HAVE_sssubv2ha3 (ISA_HAS_DSP)
#define HAVE_ssmulv2hq3 (ISA_HAS_DSP)
#define HAVE_ssmulhq3 (ISA_HAS_DSP)
#define HAVE_ssmulsq3 (ISA_HAS_DSPR2)
#define HAVE_ssmaddsqdq4 (ISA_HAS_DSP && !TARGET_64BIT)
#define HAVE_ssmsubsqdq4 (ISA_HAS_DSP && !TARGET_64BIT)
#define HAVE_mips_jraddiusp (TARGET_MICROMIPS)
#define HAVE_divsi3 (TARGET_LOONGSON_2EF)
#define HAVE_udivsi3 (TARGET_LOONGSON_2EF)
#define HAVE_modsi3 (TARGET_LOONGSON_2EF)
#define HAVE_umodsi3 (TARGET_LOONGSON_2EF)
#define HAVE_ctrapsi4 (ISA_HAS_COND_TRAP)
#define HAVE_addsi3 1
#define HAVE_mulsi3 1
#define HAVE_mulsidi3 (mips_mulsidi3_gen_fn (SIGN_EXTEND) != NULL)
#define HAVE_umulsidi3 (mips_mulsidi3_gen_fn (ZERO_EXTEND) != NULL)
#define HAVE_smulsi3_highpart 1
#define HAVE_umulsi3_highpart 1
#define HAVE_divmodsi4 (!TARGET_FIX_VR4120)
#define HAVE_udivmodsi4 1
#define HAVE_divmodsi4_split 1
#define HAVE_udivmodsi4_split 1
#define HAVE_andsi3 1
#define HAVE_iorsi3 1
#define HAVE_xorsi3 1
#define HAVE_zero_extendqisi2 1
#define HAVE_zero_extendhisi2 1
#define HAVE_zero_extendqihi2 1
#define HAVE_extendqisi2 1
#define HAVE_extendhisi2 1
#define HAVE_extendqihi2 1
#define HAVE_extv (!TARGET_MIPS16)
#define HAVE_extzv (!TARGET_MIPS16)
#define HAVE_insv (!TARGET_MIPS16)
#define HAVE_unspec_gotsi 1
#define HAVE_movdi 1
#define HAVE_movsi 1
#define HAVE_movv2hi (TARGET_DSP)
#define HAVE_movv4qi (TARGET_DSP)
#define HAVE_movv2hq (TARGET_DSP)
#define HAVE_movv2uhq (TARGET_DSP)
#define HAVE_movv2ha (TARGET_DSP)
#define HAVE_movv2uha (TARGET_DSP)
#define HAVE_movv4qq (TARGET_DSP)
#define HAVE_movv4uqq (TARGET_DSP)
#define HAVE_movhi 1
#define HAVE_movqi 1
#define HAVE_movsf 1
#define HAVE_movdf 1
#define HAVE_move_doubleword_fprdf 1
#define HAVE_move_doubleword_fprdi 1
#define HAVE_load_const_gp_si 1
#define HAVE_clear_cache 1
#define HAVE_movmemsi (!TARGET_MIPS16 && !TARGET_MEMCPY)
#define HAVE_ashlsi3 1
#define HAVE_ashrsi3 1
#define HAVE_lshrsi3 1
#define HAVE_cbranchsi4 1
#define HAVE_condjump 1
#define HAVE_cstoresi4 1
#define HAVE_jump 1
#define HAVE_indirect_jump 1
#define HAVE_tablejump (!TARGET_MIPS16_SHORT_JUMP_TABLES)
#define HAVE_casesi (TARGET_MIPS16_SHORT_JUMP_TABLES)
#define HAVE_builtin_setjmp_setup (TARGET_USE_GOT)
#define HAVE_builtin_longjmp (TARGET_USE_GOT)
#define HAVE_prologue 1
#define HAVE_epilogue 1
#define HAVE_sibcall_epilogue 1
#define HAVE_return (mips_can_use_return_insn ())
#define HAVE_simple_return (!mips_can_use_return_insn ())
#define HAVE_eh_return 1
#define HAVE_exception_receiver (TARGET_USE_GOT)
#define HAVE_nonlocal_goto_receiver (TARGET_USE_GOT)
#define HAVE_sibcall (TARGET_SIBCALLS)
#define HAVE_sibcall_value (TARGET_SIBCALLS)
#define HAVE_call 1
#define HAVE_call_value 1
#define HAVE_untyped_call 1
#define HAVE_movsicc (ISA_HAS_CONDMOVE)
#define HAVE_memory_barrier (GENERATE_SYNC)
#define HAVE_sync_compare_and_swapqi (GENERATE_LL_SC)
#define HAVE_sync_compare_and_swaphi (GENERATE_LL_SC)
#define HAVE_sync_addsi (GENERATE_LL_SC || GENERATE_LDADD)
#define HAVE_sync_addqi (GENERATE_LL_SC)
#define HAVE_sync_subqi (GENERATE_LL_SC)
#define HAVE_sync_iorqi (GENERATE_LL_SC)
#define HAVE_sync_xorqi (GENERATE_LL_SC)
#define HAVE_sync_andqi (GENERATE_LL_SC)
#define HAVE_sync_addhi (GENERATE_LL_SC)
#define HAVE_sync_subhi (GENERATE_LL_SC)
#define HAVE_sync_iorhi (GENERATE_LL_SC)
#define HAVE_sync_xorhi (GENERATE_LL_SC)
#define HAVE_sync_andhi (GENERATE_LL_SC)
#define HAVE_sync_old_addqi (GENERATE_LL_SC)
#define HAVE_sync_old_subqi (GENERATE_LL_SC)
#define HAVE_sync_old_iorqi (GENERATE_LL_SC)
#define HAVE_sync_old_xorqi (GENERATE_LL_SC)
#define HAVE_sync_old_andqi (GENERATE_LL_SC)
#define HAVE_sync_old_addhi (GENERATE_LL_SC)
#define HAVE_sync_old_subhi (GENERATE_LL_SC)
#define HAVE_sync_old_iorhi (GENERATE_LL_SC)
#define HAVE_sync_old_xorhi (GENERATE_LL_SC)
#define HAVE_sync_old_andhi (GENERATE_LL_SC)
#define HAVE_sync_new_addqi (GENERATE_LL_SC)
#define HAVE_sync_new_subqi (GENERATE_LL_SC)
#define HAVE_sync_new_iorqi (GENERATE_LL_SC)
#define HAVE_sync_new_xorqi (GENERATE_LL_SC)
#define HAVE_sync_new_andqi (GENERATE_LL_SC)
#define HAVE_sync_new_addhi (GENERATE_LL_SC)
#define HAVE_sync_new_subhi (GENERATE_LL_SC)
#define HAVE_sync_new_iorhi (GENERATE_LL_SC)
#define HAVE_sync_new_xorhi (GENERATE_LL_SC)
#define HAVE_sync_new_andhi (GENERATE_LL_SC)
#define HAVE_sync_nandqi (GENERATE_LL_SC)
#define HAVE_sync_nandhi (GENERATE_LL_SC)
#define HAVE_sync_old_nandqi (GENERATE_LL_SC)
#define HAVE_sync_old_nandhi (GENERATE_LL_SC)
#define HAVE_sync_new_nandqi (GENERATE_LL_SC)
#define HAVE_sync_new_nandhi (GENERATE_LL_SC)
#define HAVE_sync_subsi (GENERATE_LL_SC || GENERATE_LDADD)
#define HAVE_sync_old_addsi (GENERATE_LL_SC || GENERATE_LDADD)
#define HAVE_sync_old_subsi (GENERATE_LL_SC || GENERATE_LDADD)
#define HAVE_sync_new_addsi (GENERATE_LL_SC || GENERATE_LDADD)
#define HAVE_sync_new_subsi (GENERATE_LL_SC || GENERATE_LDADD)
#define HAVE_sync_lock_test_and_setsi (GENERATE_LL_SC || GENERATE_SWAP)
#define HAVE_sync_lock_test_and_setqi (GENERATE_LL_SC)
#define HAVE_sync_lock_test_and_sethi (GENERATE_LL_SC)
#define HAVE_scc_ps 1
#define HAVE_single_cc 1
#define HAVE_mips_lbux (ISA_HAS_DSP)
#define HAVE_mips_lhx (ISA_HAS_DSP)
#define HAVE_mips_lwx (ISA_HAS_DSP)
#define HAVE_mips_madd (ISA_HAS_DSP && !TARGET_64BIT)
#define HAVE_mips_maddu (ISA_HAS_DSP && !TARGET_64BIT)
#define HAVE_mips_msub (ISA_HAS_DSP && !TARGET_64BIT)
#define HAVE_mips_msubu (ISA_HAS_DSP && !TARGET_64BIT)
extern rtx        gen_ls2_alu1_turn_enabled_insn       (void);
extern rtx        gen_ls2_alu2_turn_enabled_insn       (void);
extern rtx        gen_ls2_falu1_turn_enabled_insn      (void);
extern rtx        gen_ls2_falu2_turn_enabled_insn      (void);
extern rtx        gen_trap                             (void);
static inline rtx gen_addsf3                           (rtx, rtx, rtx);
static inline rtx
gen_addsf3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_adddf3                           (rtx, rtx, rtx);
static inline rtx
gen_adddf3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_addv2sf3                         (rtx, rtx, rtx);
static inline rtx
gen_addv2sf3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_subsf3                           (rtx, rtx, rtx);
static inline rtx
gen_subsf3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_subdf3                           (rtx, rtx, rtx);
static inline rtx
gen_subdf3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_subv2sf3                         (rtx, rtx, rtx);
static inline rtx
gen_subv2sf3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_subsi3                           (rtx, rtx, rtx);
static inline rtx gen_subdi3                           (rtx, rtx, rtx);
static inline rtx
gen_subdi3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_mulv2sf3                         (rtx, rtx, rtx);
static inline rtx
gen_mulv2sf3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_mulsi3_mul3_ls2ef                (rtx, rtx, rtx);
static inline rtx gen_muldi3_mul3_ls2ef                (rtx, rtx, rtx);
static inline rtx
gen_muldi3_mul3_ls2ef(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_mulsi3_mul3                      (rtx, rtx, rtx);
static inline rtx gen_muldi3_mul3                      (rtx, rtx, rtx);
static inline rtx
gen_muldi3_mul3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_mulsi3_internal                  (rtx, rtx, rtx);
static inline rtx gen_muldi3_internal                  (rtx, rtx, rtx);
static inline rtx
gen_muldi3_internal(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_mulsi3_r4000                     (rtx, rtx, rtx);
static inline rtx gen_muldi3_r4000                     (rtx, rtx, rtx);
static inline rtx
gen_muldi3_r4000(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_mulsidi3_32bit                   (rtx, rtx, rtx);
extern rtx        gen_umulsidi3_32bit                  (rtx, rtx, rtx);
extern rtx        gen_mulsidi3_32bit_r4000             (rtx, rtx, rtx);
extern rtx        gen_umulsidi3_32bit_r4000            (rtx, rtx, rtx);
static inline rtx gen_mulsidi3_64bit                   (rtx, rtx, rtx);
static inline rtx
gen_mulsidi3_64bit(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_umulsidi3_64bit                  (rtx, rtx, rtx);
static inline rtx
gen_umulsidi3_64bit(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_mulsidi3_64bit_hilo              (rtx, rtx, rtx);
static inline rtx
gen_mulsidi3_64bit_hilo(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_umulsidi3_64bit_hilo             (rtx, rtx, rtx);
static inline rtx
gen_umulsidi3_64bit_hilo(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_mulsidi3_64bit_dmul              (rtx, rtx, rtx);
static inline rtx
gen_mulsidi3_64bit_dmul(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_msubsidi4                        (rtx, rtx, rtx, rtx);
extern rtx        gen_umsubsidi4                       (rtx, rtx, rtx, rtx);
extern rtx        gen_smulsi3_highpart_internal        (rtx, rtx, rtx);
extern rtx        gen_umulsi3_highpart_internal        (rtx, rtx, rtx);
extern rtx        gen_smulsi3_highpart_mulhi_internal  (rtx, rtx, rtx);
extern rtx        gen_umulsi3_highpart_mulhi_internal  (rtx, rtx, rtx);
static inline rtx gen_smuldi3_highpart                 (rtx, rtx, rtx);
static inline rtx
gen_smuldi3_highpart(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_umuldi3_highpart                 (rtx, rtx, rtx);
static inline rtx
gen_umuldi3_highpart(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_mulditi3_internal                (rtx, rtx, rtx);
static inline rtx
gen_mulditi3_internal(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_umulditi3_internal               (rtx, rtx, rtx);
static inline rtx
gen_umulditi3_internal(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_mulditi3_r4000                   (rtx, rtx, rtx);
static inline rtx
gen_mulditi3_r4000(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_umulditi3_r4000                  (rtx, rtx, rtx);
static inline rtx
gen_umulditi3_r4000(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_madsi                            (rtx, rtx, rtx);
extern rtx        gen_maddsidi4                        (rtx, rtx, rtx, rtx);
extern rtx        gen_umaddsidi4                       (rtx, rtx, rtx, rtx);
extern rtx        gen_divmodsi4_internal               (rtx, rtx, rtx, rtx);
static inline rtx gen_divmoddi4_internal               (rtx, rtx, rtx, rtx);
static inline rtx
gen_divmoddi4_internal(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
extern rtx        gen_udivmodsi4_internal              (rtx, rtx, rtx, rtx);
static inline rtx gen_udivmoddi4_internal              (rtx, rtx, rtx, rtx);
static inline rtx
gen_udivmoddi4_internal(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
extern rtx        gen_divmodsi4_hilo_di                (rtx, rtx, rtx);
extern rtx        gen_udivmodsi4_hilo_di               (rtx, rtx, rtx);
static inline rtx gen_divmodsi4_hilo_ti                (rtx, rtx, rtx);
static inline rtx
gen_divmodsi4_hilo_ti(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_udivmodsi4_hilo_ti               (rtx, rtx, rtx);
static inline rtx
gen_udivmodsi4_hilo_ti(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_divmoddi4_hilo_di                (rtx, rtx, rtx);
static inline rtx
gen_divmoddi4_hilo_di(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_udivmoddi4_hilo_di               (rtx, rtx, rtx);
static inline rtx
gen_udivmoddi4_hilo_di(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_divmoddi4_hilo_ti                (rtx, rtx, rtx);
static inline rtx
gen_divmoddi4_hilo_ti(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_udivmoddi4_hilo_ti               (rtx, rtx, rtx);
static inline rtx
gen_udivmoddi4_hilo_ti(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_sqrtsf2                          (rtx, rtx);
static inline rtx
gen_sqrtsf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_sqrtdf2                          (rtx, rtx);
static inline rtx
gen_sqrtdf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_sqrtv2sf2                        (rtx, rtx);
static inline rtx
gen_sqrtv2sf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_abssf2                           (rtx, rtx);
static inline rtx
gen_abssf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_absdf2                           (rtx, rtx);
static inline rtx
gen_absdf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_absv2sf2                         (rtx, rtx);
static inline rtx
gen_absv2sf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_clzsi2                           (rtx, rtx);
static inline rtx gen_clzdi2                           (rtx, rtx);
static inline rtx
gen_clzdi2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_popcountsi2                      (rtx, rtx);
static inline rtx gen_popcountdi2                      (rtx, rtx);
static inline rtx
gen_popcountdi2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_negsi2                           (rtx, rtx);
static inline rtx gen_negdi2                           (rtx, rtx);
static inline rtx
gen_negdi2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_negsf2                           (rtx, rtx);
static inline rtx
gen_negsf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_negdf2                           (rtx, rtx);
static inline rtx
gen_negdf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_negv2sf2                         (rtx, rtx);
static inline rtx
gen_negv2sf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_one_cmplsi2                      (rtx, rtx);
static inline rtx gen_one_cmpldi2                      (rtx, rtx);
static inline rtx
gen_one_cmpldi2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_truncdfsf2                       (rtx, rtx);
static inline rtx
gen_truncdfsf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_truncdiqi2                       (rtx, rtx);
static inline rtx
gen_truncdiqi2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_truncdihi2                       (rtx, rtx);
static inline rtx
gen_truncdihi2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_truncdisi2                       (rtx, rtx);
static inline rtx
gen_truncdisi2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_extendsidi2                      (rtx, rtx);
static inline rtx
gen_extendsidi2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_extendsfdf2                      (rtx, rtx);
static inline rtx
gen_extendsfdf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_fix_truncdfsi2_insn              (rtx, rtx);
static inline rtx
gen_fix_truncdfsi2_insn(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_fix_truncdfsi2_macro             (rtx, rtx);
static inline rtx
gen_fix_truncdfsi2_macro(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_fix_truncsfsi2_insn              (rtx, rtx);
static inline rtx
gen_fix_truncsfsi2_insn(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_fix_truncsfsi2_macro             (rtx, rtx);
static inline rtx
gen_fix_truncsfsi2_macro(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_fix_truncdfdi2                   (rtx, rtx);
static inline rtx
gen_fix_truncdfdi2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_fix_truncsfdi2                   (rtx, rtx);
static inline rtx
gen_fix_truncsfdi2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_floatsidf2                       (rtx, rtx);
static inline rtx
gen_floatsidf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_floatdidf2                       (rtx, rtx);
static inline rtx
gen_floatdidf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_floatsisf2                       (rtx, rtx);
static inline rtx
gen_floatsisf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_floatdisf2                       (rtx, rtx);
static inline rtx
gen_floatdisf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_extvsi                           (rtx, rtx, rtx, rtx);
static inline rtx gen_extvdi                           (rtx, rtx, rtx, rtx);
static inline rtx
gen_extvdi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
extern rtx        gen_extzvsi                          (rtx, rtx, rtx, rtx);
extern rtx        gen_extzvdi                          (rtx, rtx, rtx, rtx);
extern rtx        gen_insvsi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_insvdi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_mov_lwl                          (rtx, rtx, rtx);
extern rtx        gen_mov_ldl                          (rtx, rtx, rtx);
extern rtx        gen_mov_lwr                          (rtx, rtx, rtx, rtx);
extern rtx        gen_mov_ldr                          (rtx, rtx, rtx, rtx);
extern rtx        gen_mov_swl                          (rtx, rtx, rtx);
extern rtx        gen_mov_sdl                          (rtx, rtx, rtx);
extern rtx        gen_mov_swr                          (rtx, rtx, rtx);
extern rtx        gen_mov_sdr                          (rtx, rtx, rtx);
static inline rtx gen_mov_ulw                          (rtx, rtx, rtx);
static inline rtx
gen_mov_ulw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_mov_uld                          (rtx, rtx, rtx);
static inline rtx
gen_mov_uld(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_mov_usw                          (rtx, rtx, rtx);
static inline rtx
gen_mov_usw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_mov_usd                          (rtx, rtx, rtx);
static inline rtx
gen_mov_usd(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_load_gotsi                       (rtx, rtx, rtx);
static inline rtx gen_load_gotdi                       (rtx, rtx, rtx);
static inline rtx
gen_load_gotdi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_movcc                            (rtx, rtx);
static inline rtx
gen_movcc(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_mfhisi_di                        (rtx, rtx);
static inline rtx gen_mfhisi_ti                        (rtx, rtx);
static inline rtx
gen_mfhisi_ti(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_mfhidi_di                        (rtx, rtx);
static inline rtx
gen_mfhidi_di(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_mfhidi_ti                        (rtx, rtx);
static inline rtx
gen_mfhidi_ti(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_mthisi_di                        (rtx, rtx, rtx);
static inline rtx gen_mthisi_ti                        (rtx, rtx, rtx);
static inline rtx
gen_mthisi_ti(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_mthidi_di                        (rtx, rtx, rtx);
static inline rtx
gen_mthidi_di(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_mthidi_ti                        (rtx, rtx, rtx);
static inline rtx
gen_mthidi_ti(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_load_lowdf                       (rtx, rtx);
static inline rtx
gen_load_lowdf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_load_lowdi                       (rtx, rtx);
static inline rtx
gen_load_lowdi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_load_lowv2sf                     (rtx, rtx);
static inline rtx
gen_load_lowv2sf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_load_lowv2si                     (rtx, rtx);
static inline rtx
gen_load_lowv2si(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_load_lowv4hi                     (rtx, rtx);
static inline rtx
gen_load_lowv4hi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_load_lowv8qi                     (rtx, rtx);
static inline rtx
gen_load_lowv8qi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_load_lowtf                       (rtx, rtx);
static inline rtx
gen_load_lowtf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_load_highdf                      (rtx, rtx, rtx);
static inline rtx
gen_load_highdf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_load_highdi                      (rtx, rtx, rtx);
static inline rtx
gen_load_highdi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_load_highv2sf                    (rtx, rtx, rtx);
static inline rtx
gen_load_highv2sf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_load_highv2si                    (rtx, rtx, rtx);
static inline rtx
gen_load_highv2si(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_load_highv4hi                    (rtx, rtx, rtx);
static inline rtx
gen_load_highv4hi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_load_highv8qi                    (rtx, rtx, rtx);
static inline rtx
gen_load_highv8qi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_load_hightf                      (rtx, rtx, rtx);
static inline rtx
gen_load_hightf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_store_worddf                     (rtx, rtx, rtx);
static inline rtx
gen_store_worddf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_store_worddi                     (rtx, rtx, rtx);
static inline rtx
gen_store_worddi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_store_wordv2sf                   (rtx, rtx, rtx);
static inline rtx
gen_store_wordv2sf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_store_wordv2si                   (rtx, rtx, rtx);
static inline rtx
gen_store_wordv2si(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_store_wordv4hi                   (rtx, rtx, rtx);
static inline rtx
gen_store_wordv4hi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_store_wordv8qi                   (rtx, rtx, rtx);
static inline rtx
gen_store_wordv8qi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_store_wordtf                     (rtx, rtx, rtx);
static inline rtx
gen_store_wordtf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_mthc1df                          (rtx, rtx, rtx);
static inline rtx
gen_mthc1df(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_mthc1di                          (rtx, rtx, rtx);
static inline rtx
gen_mthc1di(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_mthc1v2sf                        (rtx, rtx, rtx);
static inline rtx
gen_mthc1v2sf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_mthc1v2si                        (rtx, rtx, rtx);
static inline rtx
gen_mthc1v2si(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_mthc1v4hi                        (rtx, rtx, rtx);
static inline rtx
gen_mthc1v4hi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_mthc1v8qi                        (rtx, rtx, rtx);
static inline rtx
gen_mthc1v8qi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_mthc1tf                          (rtx, rtx, rtx);
static inline rtx
gen_mthc1tf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_mfhc1df                          (rtx, rtx);
static inline rtx
gen_mfhc1df(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_mfhc1di                          (rtx, rtx);
static inline rtx
gen_mfhc1di(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_mfhc1v2sf                        (rtx, rtx);
static inline rtx
gen_mfhc1v2sf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_mfhc1v2si                        (rtx, rtx);
static inline rtx
gen_mfhc1v2si(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_mfhc1v4hi                        (rtx, rtx);
static inline rtx
gen_mfhc1v4hi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_mfhc1v8qi                        (rtx, rtx);
static inline rtx
gen_mfhc1v8qi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_mfhc1tf                          (rtx, rtx);
static inline rtx
gen_mfhc1tf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_loadgp_newabi_si                 (rtx, rtx, rtx);
extern rtx        gen_loadgp_newabi_di                 (rtx, rtx, rtx);
extern rtx        gen_loadgp_absolute_si               (rtx, rtx);
extern rtx        gen_loadgp_absolute_di               (rtx, rtx);
extern rtx        gen_loadgp_blockage                  (void);
extern rtx        gen_loadgp_rtp_si                    (rtx, rtx, rtx);
extern rtx        gen_loadgp_rtp_di                    (rtx, rtx, rtx);
extern rtx        gen_copygp_mips16                    (rtx, rtx);
extern rtx        gen_potential_cprestore              (rtx, rtx, rtx, rtx);
extern rtx        gen_cprestore                        (rtx, rtx);
extern rtx        gen_use_cprestore                    (rtx);
extern rtx        gen_sync                             (void);
extern rtx        gen_synci                            (rtx);
extern rtx        gen_rdhwr_synci_step_si              (rtx);
static inline rtx gen_rdhwr_synci_step_di              (rtx);
static inline rtx
gen_rdhwr_synci_step_di(rtx ARG_UNUSED (a))
{
  return 0;
}
extern rtx        gen_clear_hazard_si                  (void);
static inline rtx gen_clear_hazard_di                  (void);
static inline rtx
gen_clear_hazard_di(void)
{
  return 0;
}
extern rtx        gen_mips_cache                       (rtx, rtx);
extern rtx        gen_r10k_cache_barrier               (void);
extern rtx        gen_rotrsi3                          (rtx, rtx, rtx);
static inline rtx gen_rotrdi3                          (rtx, rtx, rtx);
static inline rtx
gen_rotrdi3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_branch_equalitysi                (rtx, rtx, rtx, rtx);
static inline rtx gen_branch_equalitydi                (rtx, rtx, rtx, rtx);
static inline rtx
gen_branch_equalitydi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
static inline rtx gen_sunordered_sf                    (rtx, rtx, rtx);
static inline rtx
gen_sunordered_sf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_suneq_sf                         (rtx, rtx, rtx);
static inline rtx
gen_suneq_sf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_sunlt_sf                         (rtx, rtx, rtx);
static inline rtx
gen_sunlt_sf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_sunle_sf                         (rtx, rtx, rtx);
static inline rtx
gen_sunle_sf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_seq_sf                           (rtx, rtx, rtx);
static inline rtx
gen_seq_sf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_slt_sf                           (rtx, rtx, rtx);
static inline rtx
gen_slt_sf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_sle_sf                           (rtx, rtx, rtx);
static inline rtx
gen_sle_sf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_sunordered_df                    (rtx, rtx, rtx);
static inline rtx
gen_sunordered_df(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_suneq_df                         (rtx, rtx, rtx);
static inline rtx
gen_suneq_df(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_sunlt_df                         (rtx, rtx, rtx);
static inline rtx
gen_sunlt_df(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_sunle_df                         (rtx, rtx, rtx);
static inline rtx
gen_sunle_df(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_seq_df                           (rtx, rtx, rtx);
static inline rtx
gen_seq_df(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_slt_df                           (rtx, rtx, rtx);
static inline rtx
gen_slt_df(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_sle_df                           (rtx, rtx, rtx);
static inline rtx
gen_sle_df(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_sge_sf                           (rtx, rtx, rtx);
static inline rtx
gen_sge_sf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_sgt_sf                           (rtx, rtx, rtx);
static inline rtx
gen_sgt_sf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_sunge_sf                         (rtx, rtx, rtx);
static inline rtx
gen_sunge_sf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_sungt_sf                         (rtx, rtx, rtx);
static inline rtx
gen_sungt_sf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_sge_df                           (rtx, rtx, rtx);
static inline rtx
gen_sge_df(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_sgt_df                           (rtx, rtx, rtx);
static inline rtx
gen_sgt_df(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_sunge_df                         (rtx, rtx, rtx);
static inline rtx
gen_sunge_df(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_sungt_df                         (rtx, rtx, rtx);
static inline rtx
gen_sungt_df(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_indirect_jumpsi                  (rtx);
static inline rtx gen_indirect_jumpdi                  (rtx);
static inline rtx
gen_indirect_jumpdi(rtx ARG_UNUSED (a))
{
  return 0;
}
extern rtx        gen_tablejumpsi                      (rtx, rtx);
static inline rtx gen_tablejumpdi                      (rtx, rtx);
static inline rtx
gen_tablejumpdi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_casesi_internal_mips16           (rtx, rtx, rtx, rtx);
extern rtx        gen_blockage                         (void);
extern rtx        gen_return_internal                  (rtx);
extern rtx        gen_simple_return_internal           (rtx);
extern rtx        gen_mips_eret                        (void);
extern rtx        gen_mips_deret                       (void);
extern rtx        gen_mips_di                          (void);
extern rtx        gen_pic32_di                         (rtx);
extern rtx        gen_pic32_ei                         (rtx);
extern rtx        gen_pic32_sdbbp0                     (void);
extern rtx        gen_mips_ehb                         (void);
extern rtx        gen_mips_rdpgpr                      (rtx, rtx);
extern rtx        gen_mips_wrpgpr                      (rtx, rtx);
extern rtx        gen_cop0_move                        (rtx, rtx);
extern rtx        gen_eh_set_lr_si                     (rtx);
static inline rtx gen_eh_set_lr_di                     (rtx);
static inline rtx
gen_eh_set_lr_di(rtx ARG_UNUSED (a))
{
  return 0;
}
extern rtx        gen_restore_gp                       (void);
extern rtx        gen_move_gpsi                        (rtx, rtx);
static inline rtx gen_move_gpdi                        (rtx, rtx);
static inline rtx
gen_move_gpdi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_load_callsi                      (rtx, rtx, rtx);
static inline rtx gen_load_calldi                      (rtx, rtx, rtx);
static inline rtx
gen_load_calldi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_set_got_version                  (void);
extern rtx        gen_update_got_version               (void);
extern rtx        gen_sibcall_internal                 (rtx, rtx);
extern rtx        gen_sibcall_value_internal           (rtx, rtx, rtx);
extern rtx        gen_sibcall_value_multiple_internal  (rtx, rtx, rtx, rtx);
extern rtx        gen_call_internal                    (rtx, rtx);
extern rtx        gen_call_split                       (rtx, rtx);
extern rtx        gen_call_internal_direct             (rtx, rtx);
extern rtx        gen_call_direct_split                (rtx, rtx);
extern rtx        gen_call_value_internal              (rtx, rtx, rtx);
extern rtx        gen_call_value_split                 (rtx, rtx, rtx);
extern rtx        gen_call_value_internal_direct       (rtx, rtx, rtx);
extern rtx        gen_call_value_direct_split          (rtx, rtx, rtx);
extern rtx        gen_call_value_multiple_internal     (rtx, rtx, rtx, rtx);
extern rtx        gen_call_value_multiple_split        (rtx, rtx, rtx, rtx);
extern rtx        gen_prefetch                         (rtx, rtx, rtx);
extern rtx        gen_nop                              (void);
extern rtx        gen_hazard_nop                       (void);
extern rtx        gen_bifnop32                         (void);
extern rtx        gen_bifnop16                         (void);
extern rtx        gen_pic32_switch_isabase             (void);
extern rtx        gen_pic32_mfc0                       (rtx, rtx, rtx);
extern rtx        gen_pic32_mtc0                       (rtx, rtx, rtx);
extern rtx        gen_pic32_mxc0                       (rtx, rtx, rtx, rtx);
extern rtx        gen_pic32_bcc0                       (rtx, rtx, rtx, rtx);
extern rtx        gen_pic32_bsc0                       (rtx, rtx, rtx, rtx);
extern rtx        gen_pic32_bcsc0                      (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_pic32_unique_id                  (rtx, rtx, rtx);
extern rtx        gen_pic32_unique_id_32               (rtx, rtx, rtx);
extern rtx        gen_pic32_unique_id_16               (rtx, rtx, rtx);
extern rtx        gen_consttable_tls_reloc             (rtx, rtx);
extern rtx        gen_consttable_int                   (rtx, rtx);
extern rtx        gen_consttable_float                 (rtx);
extern rtx        gen_align                            (rtx);
static inline rtx gen_tls_get_tp_si                    (rtx);
static inline rtx
gen_tls_get_tp_si(rtx ARG_UNUSED (a))
{
  return 0;
}
static inline rtx gen_tls_get_tp_di                    (rtx);
static inline rtx
gen_tls_get_tp_di(rtx ARG_UNUSED (a))
{
  return 0;
}
static inline rtx gen_tls_get_tp_si_mips16             (rtx);
static inline rtx
gen_tls_get_tp_si_mips16(rtx ARG_UNUSED (a))
{
  return 0;
}
static inline rtx gen_tls_get_tp_di_mips16             (rtx);
static inline rtx
gen_tls_get_tp_di_mips16(rtx ARG_UNUSED (a))
{
  return 0;
}
extern rtx        gen_pic32_section_begin_32el         (rtx, rtx);
extern rtx        gen_pic32_section_begin_16el         (rtx, rtx);
extern rtx        gen_pic32_section_end_32el           (rtx, rtx);
extern rtx        gen_pic32_section_end_16el           (rtx, rtx);
extern rtx        gen_pic32_section_size_32el          (rtx, rtx);
extern rtx        gen_pic32_section_size_16el          (rtx, rtx);
extern rtx        gen_pic32_get_interrupt_state_mips16 (rtx, rtx);
extern rtx        gen_pic32_set_interrupt_state_mips16 (rtx, rtx);
extern rtx        gen_sync_compare_and_swapsi          (rtx, rtx, rtx, rtx);
static inline rtx gen_sync_compare_and_swapdi          (rtx, rtx, rtx, rtx);
static inline rtx
gen_sync_compare_and_swapdi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
extern rtx        gen_mips_val_compare_and_swap_acq    (rtx, rtx, rtx, rtx);
static inline rtx gen_mips_val_compare_and_swapd_acq   (rtx, rtx, rtx, rtx);
static inline rtx
gen_mips_val_compare_and_swapd_acq(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
extern rtx        gen_mips_val_compare_and_swap_rel    (rtx, rtx, rtx, rtx);
static inline rtx gen_mips_val_compare_and_swapd_rel   (rtx, rtx, rtx, rtx);
static inline rtx
gen_mips_val_compare_and_swapd_rel(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
extern rtx        gen_mips_bool_compare_and_swap_acq   (rtx, rtx, rtx, rtx);
static inline rtx gen_mips_bool_compare_and_swapd_acq  (rtx, rtx, rtx, rtx);
static inline rtx
gen_mips_bool_compare_and_swapd_acq(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
extern rtx        gen_mips_bool_compare_and_swap_rel   (rtx, rtx, rtx, rtx);
static inline rtx gen_mips_bool_compare_and_swapd_rel  (rtx, rtx, rtx, rtx);
static inline rtx
gen_mips_bool_compare_and_swapd_rel(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
extern rtx        gen_compare_and_swap_12              (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_sync_add_ldaddsi                 (rtx, rtx);
static inline rtx gen_sync_add_ldadddi                 (rtx, rtx);
static inline rtx
gen_sync_add_ldadddi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_sync_add_ll_scsi                 (rtx, rtx);
static inline rtx gen_sync_add_ll_scdi                 (rtx, rtx);
static inline rtx
gen_sync_add_ll_scdi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_sync_add_12                      (rtx, rtx, rtx, rtx);
extern rtx        gen_sync_sub_12                      (rtx, rtx, rtx, rtx);
extern rtx        gen_sync_ior_12                      (rtx, rtx, rtx, rtx);
extern rtx        gen_sync_xor_12                      (rtx, rtx, rtx, rtx);
extern rtx        gen_sync_and_12                      (rtx, rtx, rtx, rtx);
extern rtx        gen_sync_old_add_12                  (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_sync_old_sub_12                  (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_sync_old_ior_12                  (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_sync_old_xor_12                  (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_sync_old_and_12                  (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_sync_new_add_12                  (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_sync_new_sub_12                  (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_sync_new_ior_12                  (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_sync_new_xor_12                  (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_sync_new_and_12                  (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_sync_nand_12                     (rtx, rtx, rtx, rtx);
extern rtx        gen_sync_old_nand_12                 (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_sync_new_nand_12                 (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_sync_sub_ldaddsi                 (rtx, rtx);
static inline rtx gen_sync_sub_ldadddi                 (rtx, rtx);
static inline rtx
gen_sync_sub_ldadddi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_sync_sub_ll_scsi                 (rtx, rtx);
static inline rtx gen_sync_sub_ll_scdi                 (rtx, rtx);
static inline rtx
gen_sync_sub_ll_scdi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_sync_old_add_ldaddsi             (rtx, rtx, rtx);
static inline rtx gen_sync_old_add_ldadddi             (rtx, rtx, rtx);
static inline rtx
gen_sync_old_add_ldadddi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_sync_old_add_ll_scsi             (rtx, rtx, rtx);
static inline rtx gen_sync_old_add_ll_scdi             (rtx, rtx, rtx);
static inline rtx
gen_sync_old_add_ll_scdi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_sync_old_sub_ldaddsi             (rtx, rtx, rtx);
static inline rtx gen_sync_old_sub_ldadddi             (rtx, rtx, rtx);
static inline rtx
gen_sync_old_sub_ldadddi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_sync_old_sub_ll_scsi             (rtx, rtx, rtx);
static inline rtx gen_sync_old_sub_ll_scdi             (rtx, rtx, rtx);
static inline rtx
gen_sync_old_sub_ll_scdi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_sync_new_add_ll_scsi             (rtx, rtx, rtx);
static inline rtx gen_sync_new_add_ll_scdi             (rtx, rtx, rtx);
static inline rtx
gen_sync_new_add_ll_scdi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_sync_new_sub_ll_scsi             (rtx, rtx, rtx);
static inline rtx gen_sync_new_sub_ll_scdi             (rtx, rtx, rtx);
static inline rtx
gen_sync_new_sub_ll_scdi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_sync_iorsi                       (rtx, rtx);
extern rtx        gen_sync_xorsi                       (rtx, rtx);
extern rtx        gen_sync_andsi                       (rtx, rtx);
static inline rtx gen_sync_iordi                       (rtx, rtx);
static inline rtx
gen_sync_iordi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_sync_xordi                       (rtx, rtx);
static inline rtx
gen_sync_xordi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_sync_anddi                       (rtx, rtx);
static inline rtx
gen_sync_anddi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_sync_old_iorsi                   (rtx, rtx, rtx);
extern rtx        gen_sync_old_xorsi                   (rtx, rtx, rtx);
extern rtx        gen_sync_old_andsi                   (rtx, rtx, rtx);
static inline rtx gen_sync_old_iordi                   (rtx, rtx, rtx);
static inline rtx
gen_sync_old_iordi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_sync_old_xordi                   (rtx, rtx, rtx);
static inline rtx
gen_sync_old_xordi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_sync_old_anddi                   (rtx, rtx, rtx);
static inline rtx
gen_sync_old_anddi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_sync_new_iorsi                   (rtx, rtx, rtx);
extern rtx        gen_sync_new_xorsi                   (rtx, rtx, rtx);
extern rtx        gen_sync_new_andsi                   (rtx, rtx, rtx);
static inline rtx gen_sync_new_iordi                   (rtx, rtx, rtx);
static inline rtx
gen_sync_new_iordi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_sync_new_xordi                   (rtx, rtx, rtx);
static inline rtx
gen_sync_new_xordi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_sync_new_anddi                   (rtx, rtx, rtx);
static inline rtx
gen_sync_new_anddi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_sync_nandsi                      (rtx, rtx);
static inline rtx gen_sync_nanddi                      (rtx, rtx);
static inline rtx
gen_sync_nanddi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_sync_old_nandsi                  (rtx, rtx, rtx);
static inline rtx gen_sync_old_nanddi                  (rtx, rtx, rtx);
static inline rtx
gen_sync_old_nanddi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_sync_new_nandsi                  (rtx, rtx, rtx);
static inline rtx gen_sync_new_nanddi                  (rtx, rtx, rtx);
static inline rtx
gen_sync_new_nanddi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_mips_swap_ll_sc_acq              (rtx, rtx, rtx);
static inline rtx gen_mips_swapd_ll_sc_acq             (rtx, rtx, rtx);
static inline rtx
gen_mips_swapd_ll_sc_acq(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_mips_swap_ll_sc_rel              (rtx, rtx, rtx);
static inline rtx gen_mips_swapd_ll_sc_rel             (rtx, rtx, rtx);
static inline rtx
gen_mips_swapd_ll_sc_rel(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_mips_swap_acq                    (rtx, rtx, rtx);
static inline rtx gen_mips_swapd_acq                   (rtx, rtx, rtx);
static inline rtx
gen_mips_swapd_acq(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_mips_swap_rel                    (rtx, rtx, rtx);
static inline rtx gen_mips_swapd_rel                   (rtx, rtx, rtx);
static inline rtx
gen_mips_swapd_rel(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_test_and_set_12                  (rtx, rtx, rtx, rtx, rtx);
static inline rtx gen_mips_cond_move_tf_ps             (rtx, rtx, rtx, rtx);
static inline rtx
gen_mips_cond_move_tf_ps(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
static inline rtx gen_mips_pul_ps                      (rtx, rtx, rtx);
static inline rtx
gen_mips_pul_ps(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_mips_puu_ps                      (rtx, rtx, rtx);
static inline rtx
gen_mips_puu_ps(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_mips_pll_ps                      (rtx, rtx, rtx);
static inline rtx
gen_mips_pll_ps(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_mips_plu_ps                      (rtx, rtx, rtx);
static inline rtx
gen_mips_plu_ps(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_vec_initv2sf_internal            (rtx, rtx, rtx);
static inline rtx
gen_vec_initv2sf_internal(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_vec_extractv2sf                  (rtx, rtx, rtx);
static inline rtx
gen_vec_extractv2sf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_mips_alnv_ps                     (rtx, rtx, rtx, rtx);
static inline rtx
gen_mips_alnv_ps(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
static inline rtx gen_mips_addr_ps                     (rtx, rtx, rtx);
static inline rtx
gen_mips_addr_ps(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_mips_cvt_pw_ps                   (rtx, rtx);
static inline rtx
gen_mips_cvt_pw_ps(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_mips_cvt_ps_pw                   (rtx, rtx);
static inline rtx
gen_mips_cvt_ps_pw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_mips_mulr_ps                     (rtx, rtx, rtx);
static inline rtx
gen_mips_mulr_ps(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_mips_cabs_cond_s                 (rtx, rtx, rtx, rtx);
static inline rtx
gen_mips_cabs_cond_s(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
static inline rtx gen_mips_cabs_cond_d                 (rtx, rtx, rtx, rtx);
static inline rtx
gen_mips_cabs_cond_d(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
static inline rtx gen_mips_c_cond_4s                   (rtx, rtx, rtx, rtx, rtx, rtx);
static inline rtx
gen_mips_c_cond_4s(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d), rtx ARG_UNUSED (e), rtx ARG_UNUSED (f))
{
  return 0;
}
static inline rtx gen_mips_cabs_cond_4s                (rtx, rtx, rtx, rtx, rtx, rtx);
static inline rtx
gen_mips_cabs_cond_4s(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d), rtx ARG_UNUSED (e), rtx ARG_UNUSED (f))
{
  return 0;
}
static inline rtx gen_mips_c_cond_ps                   (rtx, rtx, rtx, rtx);
static inline rtx
gen_mips_c_cond_ps(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
static inline rtx gen_mips_cabs_cond_ps                (rtx, rtx, rtx, rtx);
static inline rtx
gen_mips_cabs_cond_ps(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
static inline rtx gen_sunordered_ps                    (rtx, rtx, rtx);
static inline rtx
gen_sunordered_ps(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_suneq_ps                         (rtx, rtx, rtx);
static inline rtx
gen_suneq_ps(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_sunlt_ps                         (rtx, rtx, rtx);
static inline rtx
gen_sunlt_ps(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_sunle_ps                         (rtx, rtx, rtx);
static inline rtx
gen_sunle_ps(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_seq_ps                           (rtx, rtx, rtx);
static inline rtx
gen_seq_ps(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_slt_ps                           (rtx, rtx, rtx);
static inline rtx
gen_slt_ps(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_sle_ps                           (rtx, rtx, rtx);
static inline rtx
gen_sle_ps(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_sge_ps                           (rtx, rtx, rtx);
static inline rtx
gen_sge_ps(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_sgt_ps                           (rtx, rtx, rtx);
static inline rtx
gen_sgt_ps(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_sunge_ps                         (rtx, rtx, rtx);
static inline rtx
gen_sunge_ps(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_sungt_ps                         (rtx, rtx, rtx);
static inline rtx
gen_sungt_ps(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_bc1any4t                         (rtx, rtx);
static inline rtx
gen_bc1any4t(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_bc1any4f                         (rtx, rtx);
static inline rtx
gen_bc1any4f(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_bc1any2t                         (rtx, rtx);
static inline rtx
gen_bc1any2t(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_bc1any2f                         (rtx, rtx);
static inline rtx
gen_bc1any2f(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_mips_rsqrt1_s                    (rtx, rtx);
static inline rtx
gen_mips_rsqrt1_s(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_mips_rsqrt1_d                    (rtx, rtx);
static inline rtx
gen_mips_rsqrt1_d(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_mips_rsqrt1_ps                   (rtx, rtx);
static inline rtx
gen_mips_rsqrt1_ps(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_mips_rsqrt2_s                    (rtx, rtx, rtx);
static inline rtx
gen_mips_rsqrt2_s(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_mips_rsqrt2_d                    (rtx, rtx, rtx);
static inline rtx
gen_mips_rsqrt2_d(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_mips_rsqrt2_ps                   (rtx, rtx, rtx);
static inline rtx
gen_mips_rsqrt2_ps(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_mips_recip1_s                    (rtx, rtx);
static inline rtx
gen_mips_recip1_s(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_mips_recip1_d                    (rtx, rtx);
static inline rtx
gen_mips_recip1_d(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_mips_recip1_ps                   (rtx, rtx);
static inline rtx
gen_mips_recip1_ps(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_mips_recip2_s                    (rtx, rtx, rtx);
static inline rtx
gen_mips_recip2_s(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_mips_recip2_d                    (rtx, rtx, rtx);
static inline rtx
gen_mips_recip2_d(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_mips_recip2_ps                   (rtx, rtx, rtx);
static inline rtx
gen_mips_recip2_ps(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_addv2hi3                         (rtx, rtx, rtx);
extern rtx        gen_addv4qi3                         (rtx, rtx, rtx);
extern rtx        gen_mips_addq_s_w                    (rtx, rtx, rtx);
extern rtx        gen_mips_addq_s_ph                   (rtx, rtx, rtx);
extern rtx        gen_mips_addu_s_qb                   (rtx, rtx, rtx);
extern rtx        gen_subv2hi3                         (rtx, rtx, rtx);
extern rtx        gen_subv4qi3                         (rtx, rtx, rtx);
extern rtx        gen_mips_subq_s_w                    (rtx, rtx, rtx);
extern rtx        gen_mips_subq_s_ph                   (rtx, rtx, rtx);
extern rtx        gen_mips_subu_s_qb                   (rtx, rtx, rtx);
extern rtx        gen_mips_addsc                       (rtx, rtx, rtx);
extern rtx        gen_mips_addwc                       (rtx, rtx, rtx);
extern rtx        gen_mips_modsub                      (rtx, rtx, rtx);
extern rtx        gen_mips_raddu_w_qb                  (rtx, rtx);
extern rtx        gen_mips_absq_s_w                    (rtx, rtx);
extern rtx        gen_mips_absq_s_ph                   (rtx, rtx);
extern rtx        gen_mips_precrq_qb_ph                (rtx, rtx, rtx);
extern rtx        gen_mips_precrq_ph_w                 (rtx, rtx, rtx);
extern rtx        gen_mips_precrq_rs_ph_w              (rtx, rtx, rtx);
extern rtx        gen_mips_precrqu_s_qb_ph             (rtx, rtx, rtx);
extern rtx        gen_mips_preceq_w_phl                (rtx, rtx);
extern rtx        gen_mips_preceq_w_phr                (rtx, rtx);
extern rtx        gen_mips_precequ_ph_qbl              (rtx, rtx);
extern rtx        gen_mips_precequ_ph_qbr              (rtx, rtx);
extern rtx        gen_mips_precequ_ph_qbla             (rtx, rtx);
extern rtx        gen_mips_precequ_ph_qbra             (rtx, rtx);
extern rtx        gen_mips_preceu_ph_qbl               (rtx, rtx);
extern rtx        gen_mips_preceu_ph_qbr               (rtx, rtx);
extern rtx        gen_mips_preceu_ph_qbla              (rtx, rtx);
extern rtx        gen_mips_preceu_ph_qbra              (rtx, rtx);
extern rtx        gen_mips_shll_ph                     (rtx, rtx, rtx);
extern rtx        gen_mips_shll_qb                     (rtx, rtx, rtx);
extern rtx        gen_mips_shll_s_w                    (rtx, rtx, rtx);
extern rtx        gen_mips_shll_s_ph                   (rtx, rtx, rtx);
extern rtx        gen_mips_shrl_qb                     (rtx, rtx, rtx);
extern rtx        gen_mips_shra_ph                     (rtx, rtx, rtx);
extern rtx        gen_mips_shra_r_w                    (rtx, rtx, rtx);
extern rtx        gen_mips_shra_r_ph                   (rtx, rtx, rtx);
extern rtx        gen_mips_muleu_s_ph_qbl              (rtx, rtx, rtx);
extern rtx        gen_mips_muleu_s_ph_qbr              (rtx, rtx, rtx);
extern rtx        gen_mips_mulq_rs_ph                  (rtx, rtx, rtx);
extern rtx        gen_mips_muleq_s_w_phl               (rtx, rtx, rtx);
extern rtx        gen_mips_muleq_s_w_phr               (rtx, rtx, rtx);
extern rtx        gen_mips_dpau_h_qbl                  (rtx, rtx, rtx, rtx);
extern rtx        gen_mips_dpau_h_qbr                  (rtx, rtx, rtx, rtx);
extern rtx        gen_mips_dpsu_h_qbl                  (rtx, rtx, rtx, rtx);
extern rtx        gen_mips_dpsu_h_qbr                  (rtx, rtx, rtx, rtx);
extern rtx        gen_mips_dpaq_s_w_ph                 (rtx, rtx, rtx, rtx);
extern rtx        gen_mips_dpsq_s_w_ph                 (rtx, rtx, rtx, rtx);
extern rtx        gen_mips_mulsaq_s_w_ph               (rtx, rtx, rtx, rtx);
extern rtx        gen_mips_dpaq_sa_l_w                 (rtx, rtx, rtx, rtx);
extern rtx        gen_mips_dpsq_sa_l_w                 (rtx, rtx, rtx, rtx);
extern rtx        gen_mips_maq_s_w_phl                 (rtx, rtx, rtx, rtx);
extern rtx        gen_mips_maq_s_w_phr                 (rtx, rtx, rtx, rtx);
extern rtx        gen_mips_maq_sa_w_phl                (rtx, rtx, rtx, rtx);
extern rtx        gen_mips_maq_sa_w_phr                (rtx, rtx, rtx, rtx);
extern rtx        gen_mips_bitrev                      (rtx, rtx);
extern rtx        gen_mips_insv                        (rtx, rtx, rtx);
extern rtx        gen_mips_repl_qb                     (rtx, rtx);
extern rtx        gen_mips_repl_ph                     (rtx, rtx);
extern rtx        gen_mips_cmp_eq_ph                   (rtx, rtx);
extern rtx        gen_mips_cmpu_eq_qb                  (rtx, rtx);
extern rtx        gen_mips_cmp_lt_ph                   (rtx, rtx);
extern rtx        gen_mips_cmpu_lt_qb                  (rtx, rtx);
extern rtx        gen_mips_cmp_le_ph                   (rtx, rtx);
extern rtx        gen_mips_cmpu_le_qb                  (rtx, rtx);
extern rtx        gen_mips_cmpgu_eq_qb                 (rtx, rtx, rtx);
extern rtx        gen_mips_cmpgu_lt_qb                 (rtx, rtx, rtx);
extern rtx        gen_mips_cmpgu_le_qb                 (rtx, rtx, rtx);
extern rtx        gen_mips_pick_ph                     (rtx, rtx, rtx);
extern rtx        gen_mips_pick_qb                     (rtx, rtx, rtx);
extern rtx        gen_mips_packrl_ph                   (rtx, rtx, rtx);
extern rtx        gen_mips_extr_w                      (rtx, rtx, rtx);
extern rtx        gen_mips_extr_r_w                    (rtx, rtx, rtx);
extern rtx        gen_mips_extr_rs_w                   (rtx, rtx, rtx);
extern rtx        gen_mips_extr_s_h                    (rtx, rtx, rtx);
extern rtx        gen_mips_extp                        (rtx, rtx, rtx);
extern rtx        gen_mips_extpdp                      (rtx, rtx, rtx);
extern rtx        gen_mips_shilo                       (rtx, rtx, rtx);
extern rtx        gen_mips_mthlip                      (rtx, rtx, rtx);
extern rtx        gen_mips_wrdsp                       (rtx, rtx);
extern rtx        gen_mips_rddsp                       (rtx, rtx);
extern rtx        gen_mips_lbux_si                     (rtx, rtx, rtx);
static inline rtx gen_mips_lbux_di                     (rtx, rtx, rtx);
static inline rtx
gen_mips_lbux_di(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_mips_lhx_si                      (rtx, rtx, rtx);
static inline rtx gen_mips_lhx_di                      (rtx, rtx, rtx);
static inline rtx
gen_mips_lhx_di(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_mips_lwx_si                      (rtx, rtx, rtx);
static inline rtx gen_mips_lwx_di                      (rtx, rtx, rtx);
static inline rtx
gen_mips_lwx_di(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_mips_bposge                      (rtx, rtx);
extern rtx        gen_mips_absq_s_qb                   (rtx, rtx);
extern rtx        gen_mips_addu_ph                     (rtx, rtx, rtx);
extern rtx        gen_mips_addu_s_ph                   (rtx, rtx, rtx);
extern rtx        gen_mips_adduh_qb                    (rtx, rtx, rtx);
extern rtx        gen_mips_adduh_r_qb                  (rtx, rtx, rtx);
extern rtx        gen_mips_append                      (rtx, rtx, rtx, rtx);
extern rtx        gen_mips_balign                      (rtx, rtx, rtx, rtx);
extern rtx        gen_mips_cmpgdu_eq_qb                (rtx, rtx, rtx);
extern rtx        gen_mips_cmpgdu_lt_qb                (rtx, rtx, rtx);
extern rtx        gen_mips_cmpgdu_le_qb                (rtx, rtx, rtx);
extern rtx        gen_mips_dpa_w_ph                    (rtx, rtx, rtx, rtx);
extern rtx        gen_mips_dps_w_ph                    (rtx, rtx, rtx, rtx);
extern rtx        gen_mulv2hi3                         (rtx, rtx, rtx);
extern rtx        gen_mips_mul_s_ph                    (rtx, rtx, rtx);
extern rtx        gen_mips_mulq_rs_w                   (rtx, rtx, rtx);
extern rtx        gen_mips_mulq_s_ph                   (rtx, rtx, rtx);
extern rtx        gen_mips_mulq_s_w                    (rtx, rtx, rtx);
extern rtx        gen_mips_mulsa_w_ph                  (rtx, rtx, rtx, rtx);
extern rtx        gen_mips_precr_qb_ph                 (rtx, rtx, rtx);
extern rtx        gen_mips_precr_sra_ph_w              (rtx, rtx, rtx, rtx);
extern rtx        gen_mips_precr_sra_r_ph_w            (rtx, rtx, rtx, rtx);
extern rtx        gen_mips_prepend                     (rtx, rtx, rtx, rtx);
extern rtx        gen_mips_shra_qb                     (rtx, rtx, rtx);
extern rtx        gen_mips_shra_r_qb                   (rtx, rtx, rtx);
extern rtx        gen_mips_shrl_ph                     (rtx, rtx, rtx);
extern rtx        gen_mips_subu_ph                     (rtx, rtx, rtx);
extern rtx        gen_mips_subu_s_ph                   (rtx, rtx, rtx);
extern rtx        gen_mips_subuh_qb                    (rtx, rtx, rtx);
extern rtx        gen_mips_subuh_r_qb                  (rtx, rtx, rtx);
extern rtx        gen_mips_addqh_ph                    (rtx, rtx, rtx);
extern rtx        gen_mips_addqh_r_ph                  (rtx, rtx, rtx);
extern rtx        gen_mips_addqh_w                     (rtx, rtx, rtx);
extern rtx        gen_mips_addqh_r_w                   (rtx, rtx, rtx);
extern rtx        gen_mips_subqh_ph                    (rtx, rtx, rtx);
extern rtx        gen_mips_subqh_r_ph                  (rtx, rtx, rtx);
extern rtx        gen_mips_subqh_w                     (rtx, rtx, rtx);
extern rtx        gen_mips_subqh_r_w                   (rtx, rtx, rtx);
extern rtx        gen_mips_dpax_w_ph                   (rtx, rtx, rtx, rtx);
extern rtx        gen_mips_dpsx_w_ph                   (rtx, rtx, rtx, rtx);
extern rtx        gen_mips_dpaqx_s_w_ph                (rtx, rtx, rtx, rtx);
extern rtx        gen_mips_dpaqx_sa_w_ph               (rtx, rtx, rtx, rtx);
extern rtx        gen_mips_dpsqx_s_w_ph                (rtx, rtx, rtx, rtx);
extern rtx        gen_mips_dpsqx_sa_w_ph               (rtx, rtx, rtx, rtx);
extern rtx        gen_addqq3                           (rtx, rtx, rtx);
extern rtx        gen_addhq3                           (rtx, rtx, rtx);
extern rtx        gen_addsq3                           (rtx, rtx, rtx);
static inline rtx gen_adddq3                           (rtx, rtx, rtx);
static inline rtx
gen_adddq3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_adduqq3                          (rtx, rtx, rtx);
extern rtx        gen_adduhq3                          (rtx, rtx, rtx);
extern rtx        gen_addusq3                          (rtx, rtx, rtx);
static inline rtx gen_addudq3                          (rtx, rtx, rtx);
static inline rtx
gen_addudq3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_addha3                           (rtx, rtx, rtx);
extern rtx        gen_addsa3                           (rtx, rtx, rtx);
static inline rtx gen_addda3                           (rtx, rtx, rtx);
static inline rtx
gen_addda3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_adduha3                          (rtx, rtx, rtx);
extern rtx        gen_addusa3                          (rtx, rtx, rtx);
static inline rtx gen_adduda3                          (rtx, rtx, rtx);
static inline rtx
gen_adduda3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_usadduqq3                        (rtx, rtx, rtx);
extern rtx        gen_usadduhq3                        (rtx, rtx, rtx);
extern rtx        gen_usadduha3                        (rtx, rtx, rtx);
extern rtx        gen_usaddv4uqq3                      (rtx, rtx, rtx);
extern rtx        gen_usaddv2uhq3                      (rtx, rtx, rtx);
extern rtx        gen_usaddv2uha3                      (rtx, rtx, rtx);
extern rtx        gen_ssaddhq3                         (rtx, rtx, rtx);
extern rtx        gen_ssaddsq3                         (rtx, rtx, rtx);
extern rtx        gen_ssaddha3                         (rtx, rtx, rtx);
extern rtx        gen_ssaddsa3                         (rtx, rtx, rtx);
extern rtx        gen_ssaddv2hq3                       (rtx, rtx, rtx);
extern rtx        gen_ssaddv2ha3                       (rtx, rtx, rtx);
extern rtx        gen_subqq3                           (rtx, rtx, rtx);
extern rtx        gen_subhq3                           (rtx, rtx, rtx);
extern rtx        gen_subsq3                           (rtx, rtx, rtx);
static inline rtx gen_subdq3                           (rtx, rtx, rtx);
static inline rtx
gen_subdq3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_subuqq3                          (rtx, rtx, rtx);
extern rtx        gen_subuhq3                          (rtx, rtx, rtx);
extern rtx        gen_subusq3                          (rtx, rtx, rtx);
static inline rtx gen_subudq3                          (rtx, rtx, rtx);
static inline rtx
gen_subudq3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_subha3                           (rtx, rtx, rtx);
extern rtx        gen_subsa3                           (rtx, rtx, rtx);
static inline rtx gen_subda3                           (rtx, rtx, rtx);
static inline rtx
gen_subda3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_subuha3                          (rtx, rtx, rtx);
extern rtx        gen_subusa3                          (rtx, rtx, rtx);
static inline rtx gen_subuda3                          (rtx, rtx, rtx);
static inline rtx
gen_subuda3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_ussubuqq3                        (rtx, rtx, rtx);
extern rtx        gen_ussubuhq3                        (rtx, rtx, rtx);
extern rtx        gen_ussubuha3                        (rtx, rtx, rtx);
extern rtx        gen_ussubv4uqq3                      (rtx, rtx, rtx);
extern rtx        gen_ussubv2uhq3                      (rtx, rtx, rtx);
extern rtx        gen_ussubv2uha3                      (rtx, rtx, rtx);
extern rtx        gen_sssubhq3                         (rtx, rtx, rtx);
extern rtx        gen_sssubsq3                         (rtx, rtx, rtx);
extern rtx        gen_sssubha3                         (rtx, rtx, rtx);
extern rtx        gen_sssubsa3                         (rtx, rtx, rtx);
extern rtx        gen_sssubv2hq3                       (rtx, rtx, rtx);
extern rtx        gen_sssubv2ha3                       (rtx, rtx, rtx);
extern rtx        gen_ssmulv2hq3                       (rtx, rtx, rtx);
extern rtx        gen_ssmulhq3                         (rtx, rtx, rtx);
extern rtx        gen_ssmulsq3                         (rtx, rtx, rtx);
extern rtx        gen_ssmaddsqdq4                      (rtx, rtx, rtx, rtx);
extern rtx        gen_ssmsubsqdq4                      (rtx, rtx, rtx, rtx);
extern rtx        gen_mips_jraddiusp                   (rtx);
static inline rtx gen_movv2si_internal                 (rtx, rtx);
static inline rtx
gen_movv2si_internal(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_movv4hi_internal                 (rtx, rtx);
static inline rtx
gen_movv4hi_internal(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_movv8qi_internal                 (rtx, rtx);
static inline rtx
gen_movv8qi_internal(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_vec_pack_ssat_v2si               (rtx, rtx, rtx);
static inline rtx
gen_vec_pack_ssat_v2si(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_vec_pack_ssat_v4hi               (rtx, rtx, rtx);
static inline rtx
gen_vec_pack_ssat_v4hi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_vec_pack_usat_v4hi               (rtx, rtx, rtx);
static inline rtx
gen_vec_pack_usat_v4hi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_addv2si3                         (rtx, rtx, rtx);
static inline rtx
gen_addv2si3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_addv4hi3                         (rtx, rtx, rtx);
static inline rtx
gen_addv4hi3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_addv8qi3                         (rtx, rtx, rtx);
static inline rtx
gen_addv8qi3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_loongson_paddd                   (rtx, rtx, rtx);
static inline rtx
gen_loongson_paddd(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_ssaddv4hi3                       (rtx, rtx, rtx);
static inline rtx
gen_ssaddv4hi3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_ssaddv8qi3                       (rtx, rtx, rtx);
static inline rtx
gen_ssaddv8qi3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_usaddv4hi3                       (rtx, rtx, rtx);
static inline rtx
gen_usaddv4hi3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_usaddv8qi3                       (rtx, rtx, rtx);
static inline rtx
gen_usaddv8qi3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_loongson_pandn_w                 (rtx, rtx, rtx);
static inline rtx
gen_loongson_pandn_w(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_loongson_pandn_h                 (rtx, rtx, rtx);
static inline rtx
gen_loongson_pandn_h(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_loongson_pandn_b                 (rtx, rtx, rtx);
static inline rtx
gen_loongson_pandn_b(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_loongson_pandn_d                 (rtx, rtx, rtx);
static inline rtx
gen_loongson_pandn_d(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_loongson_pavgh                   (rtx, rtx, rtx);
static inline rtx
gen_loongson_pavgh(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_loongson_pavgb                   (rtx, rtx, rtx);
static inline rtx
gen_loongson_pavgb(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_loongson_pcmpeqw                 (rtx, rtx, rtx);
static inline rtx
gen_loongson_pcmpeqw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_loongson_pcmpeqh                 (rtx, rtx, rtx);
static inline rtx
gen_loongson_pcmpeqh(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_loongson_pcmpeqb                 (rtx, rtx, rtx);
static inline rtx
gen_loongson_pcmpeqb(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_loongson_pcmpgtw                 (rtx, rtx, rtx);
static inline rtx
gen_loongson_pcmpgtw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_loongson_pcmpgth                 (rtx, rtx, rtx);
static inline rtx
gen_loongson_pcmpgth(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_loongson_pcmpgtb                 (rtx, rtx, rtx);
static inline rtx
gen_loongson_pcmpgtb(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_loongson_pextrh                  (rtx, rtx, rtx);
static inline rtx
gen_loongson_pextrh(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_loongson_pinsrh_0                (rtx, rtx, rtx);
static inline rtx
gen_loongson_pinsrh_0(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_loongson_pinsrh_1                (rtx, rtx, rtx);
static inline rtx
gen_loongson_pinsrh_1(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_loongson_pinsrh_2                (rtx, rtx, rtx);
static inline rtx
gen_loongson_pinsrh_2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_loongson_pinsrh_3                (rtx, rtx, rtx);
static inline rtx
gen_loongson_pinsrh_3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_loongson_pmaddhw                 (rtx, rtx, rtx);
static inline rtx
gen_loongson_pmaddhw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_smaxv4hi3                        (rtx, rtx, rtx);
static inline rtx
gen_smaxv4hi3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_umaxv8qi3                        (rtx, rtx, rtx);
static inline rtx
gen_umaxv8qi3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_sminv4hi3                        (rtx, rtx, rtx);
static inline rtx
gen_sminv4hi3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_uminv8qi3                        (rtx, rtx, rtx);
static inline rtx
gen_uminv8qi3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_loongson_pmovmskb                (rtx, rtx);
static inline rtx
gen_loongson_pmovmskb(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_umulv4hi3_highpart               (rtx, rtx, rtx);
static inline rtx
gen_umulv4hi3_highpart(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_smulv4hi3_highpart               (rtx, rtx, rtx);
static inline rtx
gen_smulv4hi3_highpart(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_loongson_pmullh                  (rtx, rtx, rtx);
static inline rtx
gen_loongson_pmullh(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_loongson_pmuluw                  (rtx, rtx, rtx);
static inline rtx
gen_loongson_pmuluw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_loongson_pasubub                 (rtx, rtx, rtx);
static inline rtx
gen_loongson_pasubub(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_loongson_biadd                   (rtx, rtx);
static inline rtx
gen_loongson_biadd(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_loongson_psadbh                  (rtx, rtx, rtx);
static inline rtx
gen_loongson_psadbh(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_loongson_pshufh                  (rtx, rtx, rtx, rtx);
static inline rtx
gen_loongson_pshufh(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
static inline rtx gen_loongson_psllw                   (rtx, rtx, rtx);
static inline rtx
gen_loongson_psllw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_loongson_psllh                   (rtx, rtx, rtx);
static inline rtx
gen_loongson_psllh(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_loongson_psraw                   (rtx, rtx, rtx);
static inline rtx
gen_loongson_psraw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_loongson_psrah                   (rtx, rtx, rtx);
static inline rtx
gen_loongson_psrah(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_loongson_psrlw                   (rtx, rtx, rtx);
static inline rtx
gen_loongson_psrlw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_loongson_psrlh                   (rtx, rtx, rtx);
static inline rtx
gen_loongson_psrlh(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_subv2si3                         (rtx, rtx, rtx);
static inline rtx
gen_subv2si3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_subv4hi3                         (rtx, rtx, rtx);
static inline rtx
gen_subv4hi3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_subv8qi3                         (rtx, rtx, rtx);
static inline rtx
gen_subv8qi3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_loongson_psubd                   (rtx, rtx, rtx);
static inline rtx
gen_loongson_psubd(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_sssubv4hi3                       (rtx, rtx, rtx);
static inline rtx
gen_sssubv4hi3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_sssubv8qi3                       (rtx, rtx, rtx);
static inline rtx
gen_sssubv8qi3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_ussubv4hi3                       (rtx, rtx, rtx);
static inline rtx
gen_ussubv4hi3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_ussubv8qi3                       (rtx, rtx, rtx);
static inline rtx
gen_ussubv8qi3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_vec_interleave_highv2si          (rtx, rtx, rtx);
static inline rtx
gen_vec_interleave_highv2si(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_vec_interleave_highv4hi          (rtx, rtx, rtx);
static inline rtx
gen_vec_interleave_highv4hi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_vec_interleave_highv8qi          (rtx, rtx, rtx);
static inline rtx
gen_vec_interleave_highv8qi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_vec_interleave_lowv2si           (rtx, rtx, rtx);
static inline rtx
gen_vec_interleave_lowv2si(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_vec_interleave_lowv4hi           (rtx, rtx, rtx);
static inline rtx
gen_vec_interleave_lowv4hi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_vec_interleave_lowv8qi           (rtx, rtx, rtx);
static inline rtx
gen_vec_interleave_lowv8qi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_divsi3                           (rtx, rtx, rtx);
extern rtx        gen_udivsi3                          (rtx, rtx, rtx);
static inline rtx gen_divdi3                           (rtx, rtx, rtx);
static inline rtx
gen_divdi3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_udivdi3                          (rtx, rtx, rtx);
static inline rtx
gen_udivdi3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_modsi3                           (rtx, rtx, rtx);
extern rtx        gen_umodsi3                          (rtx, rtx, rtx);
static inline rtx gen_moddi3                           (rtx, rtx, rtx);
static inline rtx
gen_moddi3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_umoddi3                          (rtx, rtx, rtx);
static inline rtx
gen_umoddi3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_ctrapsi4                         (rtx, rtx, rtx, rtx);
static inline rtx gen_ctrapdi4                         (rtx, rtx, rtx, rtx);
static inline rtx
gen_ctrapdi4(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
extern rtx        gen_addsi3                           (rtx, rtx, rtx);
static inline rtx gen_adddi3                           (rtx, rtx, rtx);
static inline rtx
gen_adddi3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_mulsf3                           (rtx, rtx, rtx);
static inline rtx
gen_mulsf3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_muldf3                           (rtx, rtx, rtx);
static inline rtx
gen_muldf3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_mulsi3                           (rtx, rtx, rtx);
static inline rtx gen_muldi3                           (rtx, rtx, rtx);
static inline rtx
gen_muldi3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_mulsidi3                         (rtx, rtx, rtx);
extern rtx        gen_umulsidi3                        (rtx, rtx, rtx);
extern rtx        gen_smulsi3_highpart                 (rtx, rtx, rtx);
extern rtx        gen_umulsi3_highpart                 (rtx, rtx, rtx);
static inline rtx gen_mulditi3                         (rtx, rtx, rtx);
static inline rtx
gen_mulditi3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_umulditi3                        (rtx, rtx, rtx);
static inline rtx
gen_umulditi3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_divsf3                           (rtx, rtx, rtx);
static inline rtx
gen_divsf3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_divdf3                           (rtx, rtx, rtx);
static inline rtx
gen_divdf3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_divv2sf3                         (rtx, rtx, rtx);
static inline rtx
gen_divv2sf3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_divmodsi4                        (rtx, rtx, rtx, rtx);
static inline rtx gen_divmoddi4                        (rtx, rtx, rtx, rtx);
static inline rtx
gen_divmoddi4(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
extern rtx        gen_udivmodsi4                       (rtx, rtx, rtx, rtx);
static inline rtx gen_udivmoddi4                       (rtx, rtx, rtx, rtx);
static inline rtx
gen_udivmoddi4(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
extern rtx        gen_divmodsi4_split                  (rtx, rtx, rtx);
extern rtx        gen_udivmodsi4_split                 (rtx, rtx, rtx);
static inline rtx gen_divmoddi4_split                  (rtx, rtx, rtx);
static inline rtx
gen_divmoddi4_split(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_udivmoddi4_split                 (rtx, rtx, rtx);
static inline rtx
gen_udivmoddi4_split(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_andsi3                           (rtx, rtx, rtx);
static inline rtx gen_anddi3                           (rtx, rtx, rtx);
static inline rtx
gen_anddi3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_iorsi3                           (rtx, rtx, rtx);
static inline rtx gen_iordi3                           (rtx, rtx, rtx);
static inline rtx
gen_iordi3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_xorsi3                           (rtx, rtx, rtx);
static inline rtx gen_xordi3                           (rtx, rtx, rtx);
static inline rtx
gen_xordi3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_zero_extendsidi2                 (rtx, rtx);
static inline rtx
gen_zero_extendsidi2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_zero_extendqisi2                 (rtx, rtx);
extern rtx        gen_zero_extendhisi2                 (rtx, rtx);
static inline rtx gen_zero_extendqidi2                 (rtx, rtx);
static inline rtx
gen_zero_extendqidi2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_zero_extendhidi2                 (rtx, rtx);
static inline rtx
gen_zero_extendhidi2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_zero_extendqihi2                 (rtx, rtx);
extern rtx        gen_extendqisi2                      (rtx, rtx);
extern rtx        gen_extendhisi2                      (rtx, rtx);
static inline rtx gen_extendqidi2                      (rtx, rtx);
static inline rtx
gen_extendqidi2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_extendhidi2                      (rtx, rtx);
static inline rtx
gen_extendhidi2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_extendqihi2                      (rtx, rtx);
static inline rtx gen_fix_truncdfsi2                   (rtx, rtx);
static inline rtx
gen_fix_truncdfsi2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_fix_truncsfsi2                   (rtx, rtx);
static inline rtx
gen_fix_truncsfsi2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_fixuns_truncdfsi2                (rtx, rtx);
static inline rtx
gen_fixuns_truncdfsi2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_fixuns_truncdfdi2                (rtx, rtx);
static inline rtx
gen_fixuns_truncdfdi2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_fixuns_truncsfsi2                (rtx, rtx);
static inline rtx
gen_fixuns_truncsfsi2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_fixuns_truncsfdi2                (rtx, rtx);
static inline rtx
gen_fixuns_truncsfdi2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_extv                             (rtx, rtx, rtx, rtx);
extern rtx        gen_extzv                            (rtx, rtx, rtx, rtx);
extern rtx        gen_insv                             (rtx, rtx, rtx, rtx);
extern rtx        gen_unspec_gotsi                     (rtx, rtx);
static inline rtx gen_unspec_gotdi                     (rtx, rtx);
static inline rtx
gen_unspec_gotdi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_movdi                            (rtx, rtx);
extern rtx        gen_movsi                            (rtx, rtx);
extern rtx        gen_movv2hi                          (rtx, rtx);
extern rtx        gen_movv4qi                          (rtx, rtx);
extern rtx        gen_movv2hq                          (rtx, rtx);
extern rtx        gen_movv2uhq                         (rtx, rtx);
extern rtx        gen_movv2ha                          (rtx, rtx);
extern rtx        gen_movv2uha                         (rtx, rtx);
extern rtx        gen_movv4qq                          (rtx, rtx);
extern rtx        gen_movv4uqq                         (rtx, rtx);
static inline rtx gen_reload_incc                      (rtx, rtx, rtx);
static inline rtx
gen_reload_incc(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_reload_outcc                     (rtx, rtx, rtx);
static inline rtx
gen_reload_outcc(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_movhi                            (rtx, rtx);
extern rtx        gen_movqi                            (rtx, rtx);
extern rtx        gen_movsf                            (rtx, rtx);
extern rtx        gen_movdf                            (rtx, rtx);
static inline rtx gen_movti                            (rtx, rtx);
static inline rtx
gen_movti(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_movtf                            (rtx, rtx);
static inline rtx
gen_movtf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_movv2sf                          (rtx, rtx);
static inline rtx
gen_movv2sf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_move_doubleword_fprdf            (rtx, rtx);
extern rtx        gen_move_doubleword_fprdi            (rtx, rtx);
static inline rtx gen_move_doubleword_fprv2sf          (rtx, rtx);
static inline rtx
gen_move_doubleword_fprv2sf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_move_doubleword_fprv2si          (rtx, rtx);
static inline rtx
gen_move_doubleword_fprv2si(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_move_doubleword_fprv4hi          (rtx, rtx);
static inline rtx
gen_move_doubleword_fprv4hi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_move_doubleword_fprv8qi          (rtx, rtx);
static inline rtx
gen_move_doubleword_fprv8qi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_move_doubleword_fprtf            (rtx, rtx);
static inline rtx
gen_move_doubleword_fprtf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_load_const_gp_si                 (rtx);
static inline rtx gen_load_const_gp_di                 (rtx);
static inline rtx
gen_load_const_gp_di(rtx ARG_UNUSED (a))
{
  return 0;
}
extern rtx        gen_clear_cache                      (rtx, rtx);
extern rtx        gen_movmemsi                         (rtx, rtx, rtx, rtx);
extern rtx        gen_ashlsi3                          (rtx, rtx, rtx);
extern rtx        gen_ashrsi3                          (rtx, rtx, rtx);
extern rtx        gen_lshrsi3                          (rtx, rtx, rtx);
static inline rtx gen_ashldi3                          (rtx, rtx, rtx);
static inline rtx
gen_ashldi3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_ashrdi3                          (rtx, rtx, rtx);
static inline rtx
gen_ashrdi3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_lshrdi3                          (rtx, rtx, rtx);
static inline rtx
gen_lshrdi3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_cbranchsi4                       (rtx, rtx, rtx, rtx);
static inline rtx gen_cbranchdi4                       (rtx, rtx, rtx, rtx);
static inline rtx
gen_cbranchdi4(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
static inline rtx gen_cbranchsf4                       (rtx, rtx, rtx, rtx);
static inline rtx
gen_cbranchsf4(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
static inline rtx gen_cbranchdf4                       (rtx, rtx, rtx, rtx);
static inline rtx
gen_cbranchdf4(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
extern rtx        gen_condjump                         (rtx, rtx);
extern rtx        gen_cstoresi4                        (rtx, rtx, rtx, rtx);
static inline rtx gen_cstoredi4                        (rtx, rtx, rtx, rtx);
static inline rtx
gen_cstoredi4(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
extern rtx        gen_jump                             (rtx);
extern rtx        gen_indirect_jump                    (rtx);
extern rtx        gen_tablejump                        (rtx, rtx);
extern rtx        gen_casesi                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_builtin_setjmp_setup             (rtx);
extern rtx        gen_builtin_longjmp                  (rtx);
extern rtx        gen_prologue                         (void);
extern rtx        gen_epilogue                         (void);
extern rtx        gen_sibcall_epilogue                 (void);
extern rtx        gen_return                           (void);
extern rtx        gen_simple_return                    (void);
extern rtx        gen_eh_return                        (rtx);
extern rtx        gen_exception_receiver               (void);
extern rtx        gen_nonlocal_goto_receiver           (void);
#define GEN_SIBCALL(A, B, C, D) gen_sibcall ((A), (B), (C), (D))
extern rtx        gen_sibcall                          (rtx, rtx, rtx, rtx);
#define GEN_SIBCALL_VALUE(A, B, C, D, E) gen_sibcall_value ((A), (B), (C), (D))
extern rtx        gen_sibcall_value                    (rtx, rtx, rtx, rtx);
#define GEN_CALL(A, B, C, D) gen_call ((A), (B), (C), (D))
extern rtx        gen_call                             (rtx, rtx, rtx, rtx);
#define GEN_CALL_VALUE(A, B, C, D, E) gen_call_value ((A), (B), (C), (D))
extern rtx        gen_call_value                       (rtx, rtx, rtx, rtx);
extern rtx        gen_untyped_call                     (rtx, rtx, rtx);
extern rtx        gen_movsicc                          (rtx, rtx, rtx, rtx);
static inline rtx gen_movdicc                          (rtx, rtx, rtx, rtx);
static inline rtx
gen_movdicc(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
static inline rtx gen_movsfcc                          (rtx, rtx, rtx, rtx);
static inline rtx
gen_movsfcc(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
static inline rtx gen_movdfcc                          (rtx, rtx, rtx, rtx);
static inline rtx
gen_movdfcc(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
extern rtx        gen_memory_barrier                   (void);
extern rtx        gen_sync_compare_and_swapqi          (rtx, rtx, rtx, rtx);
extern rtx        gen_sync_compare_and_swaphi          (rtx, rtx, rtx, rtx);
extern rtx        gen_sync_addsi                       (rtx, rtx);
static inline rtx gen_sync_adddi                       (rtx, rtx);
static inline rtx
gen_sync_adddi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_sync_addqi                       (rtx, rtx);
extern rtx        gen_sync_subqi                       (rtx, rtx);
extern rtx        gen_sync_iorqi                       (rtx, rtx);
extern rtx        gen_sync_xorqi                       (rtx, rtx);
extern rtx        gen_sync_andqi                       (rtx, rtx);
extern rtx        gen_sync_addhi                       (rtx, rtx);
extern rtx        gen_sync_subhi                       (rtx, rtx);
extern rtx        gen_sync_iorhi                       (rtx, rtx);
extern rtx        gen_sync_xorhi                       (rtx, rtx);
extern rtx        gen_sync_andhi                       (rtx, rtx);
extern rtx        gen_sync_old_addqi                   (rtx, rtx, rtx);
extern rtx        gen_sync_old_subqi                   (rtx, rtx, rtx);
extern rtx        gen_sync_old_iorqi                   (rtx, rtx, rtx);
extern rtx        gen_sync_old_xorqi                   (rtx, rtx, rtx);
extern rtx        gen_sync_old_andqi                   (rtx, rtx, rtx);
extern rtx        gen_sync_old_addhi                   (rtx, rtx, rtx);
extern rtx        gen_sync_old_subhi                   (rtx, rtx, rtx);
extern rtx        gen_sync_old_iorhi                   (rtx, rtx, rtx);
extern rtx        gen_sync_old_xorhi                   (rtx, rtx, rtx);
extern rtx        gen_sync_old_andhi                   (rtx, rtx, rtx);
extern rtx        gen_sync_new_addqi                   (rtx, rtx, rtx);
extern rtx        gen_sync_new_subqi                   (rtx, rtx, rtx);
extern rtx        gen_sync_new_iorqi                   (rtx, rtx, rtx);
extern rtx        gen_sync_new_xorqi                   (rtx, rtx, rtx);
extern rtx        gen_sync_new_andqi                   (rtx, rtx, rtx);
extern rtx        gen_sync_new_addhi                   (rtx, rtx, rtx);
extern rtx        gen_sync_new_subhi                   (rtx, rtx, rtx);
extern rtx        gen_sync_new_iorhi                   (rtx, rtx, rtx);
extern rtx        gen_sync_new_xorhi                   (rtx, rtx, rtx);
extern rtx        gen_sync_new_andhi                   (rtx, rtx, rtx);
extern rtx        gen_sync_nandqi                      (rtx, rtx);
extern rtx        gen_sync_nandhi                      (rtx, rtx);
extern rtx        gen_sync_old_nandqi                  (rtx, rtx, rtx);
extern rtx        gen_sync_old_nandhi                  (rtx, rtx, rtx);
extern rtx        gen_sync_new_nandqi                  (rtx, rtx, rtx);
extern rtx        gen_sync_new_nandhi                  (rtx, rtx, rtx);
extern rtx        gen_sync_subsi                       (rtx, rtx);
static inline rtx gen_sync_subdi                       (rtx, rtx);
static inline rtx
gen_sync_subdi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_sync_old_addsi                   (rtx, rtx, rtx);
static inline rtx gen_sync_old_adddi                   (rtx, rtx, rtx);
static inline rtx
gen_sync_old_adddi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_sync_old_subsi                   (rtx, rtx, rtx);
static inline rtx gen_sync_old_subdi                   (rtx, rtx, rtx);
static inline rtx
gen_sync_old_subdi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_sync_new_addsi                   (rtx, rtx, rtx);
static inline rtx gen_sync_new_adddi                   (rtx, rtx, rtx);
static inline rtx
gen_sync_new_adddi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_sync_new_subsi                   (rtx, rtx, rtx);
static inline rtx gen_sync_new_subdi                   (rtx, rtx, rtx);
static inline rtx
gen_sync_new_subdi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_sync_lock_test_and_setsi         (rtx, rtx, rtx);
static inline rtx gen_sync_lock_test_and_setdi         (rtx, rtx, rtx);
static inline rtx
gen_sync_lock_test_and_setdi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_sync_lock_test_and_setqi         (rtx, rtx, rtx);
extern rtx        gen_sync_lock_test_and_sethi         (rtx, rtx, rtx);
static inline rtx gen_movv2sfcc                        (rtx, rtx, rtx, rtx);
static inline rtx
gen_movv2sfcc(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
static inline rtx gen_vec_initv2sf                     (rtx, rtx);
static inline rtx
gen_vec_initv2sf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_vec_setv2sf                      (rtx, rtx, rtx);
static inline rtx
gen_vec_setv2sf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_mips_cvt_ps_s                    (rtx, rtx, rtx);
static inline rtx
gen_mips_cvt_ps_s(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_mips_cvt_s_pl                    (rtx, rtx);
static inline rtx
gen_mips_cvt_s_pl(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_mips_cvt_s_pu                    (rtx, rtx);
static inline rtx
gen_mips_cvt_s_pu(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_mips_abs_ps                      (rtx, rtx);
static inline rtx
gen_mips_abs_ps(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_scc_ps                           (rtx, rtx);
extern rtx        gen_single_cc                        (rtx, rtx);
static inline rtx gen_vcondv2sf                        (rtx, rtx, rtx, rtx, rtx, rtx);
static inline rtx
gen_vcondv2sf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d), rtx ARG_UNUSED (e), rtx ARG_UNUSED (f))
{
  return 0;
}
static inline rtx gen_sminv2sf3                        (rtx, rtx, rtx);
static inline rtx
gen_sminv2sf3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_smaxv2sf3                        (rtx, rtx, rtx);
static inline rtx
gen_smaxv2sf3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_mips_lbux                        (rtx, rtx, rtx);
extern rtx        gen_mips_lhx                         (rtx, rtx, rtx);
extern rtx        gen_mips_lwx                         (rtx, rtx, rtx);
extern rtx        gen_mips_madd                        (rtx, rtx, rtx, rtx);
extern rtx        gen_mips_maddu                       (rtx, rtx, rtx, rtx);
extern rtx        gen_mips_msub                        (rtx, rtx, rtx, rtx);
extern rtx        gen_mips_msubu                       (rtx, rtx, rtx, rtx);
static inline rtx gen_movv2si                          (rtx, rtx);
static inline rtx
gen_movv2si(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_movv4hi                          (rtx, rtx);
static inline rtx
gen_movv4hi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_movv8qi                          (rtx, rtx);
static inline rtx
gen_movv8qi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_vec_initv2si                     (rtx, rtx);
static inline rtx
gen_vec_initv2si(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_vec_initv4hi                     (rtx, rtx);
static inline rtx
gen_vec_initv4hi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_vec_initv8qi                     (rtx, rtx);
static inline rtx
gen_vec_initv8qi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}

#endif /* GCC_INSN_FLAGS_H */
