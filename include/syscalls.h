
/* MACHINE GENERATED: DO NOT MODIFY */
#if !defined(SYSCALL_GENERATE) && !defined(LIBCALL_GENERATE)

#ifndef SYSCALL_DEFS_H
#define SYSCALL_DEFS_H

#define SYSCALL_get_api_level_ID_IN 0x60000138UL
#define SYSCALL_halt_ID_IN 0x6000023cUL
#define SYSCALL_nvm_write_ID_IN 0x6000037fUL
#define SYSCALL_nvm_erase_ID_IN 0x60012128UL
#define SYSCALL_cx_aes_set_key_hw_ID_IN 0x6000b2c8UL
#define SYSCALL_cx_aes_reset_hw_ID_IN 0x6000b342UL
#define SYSCALL_cx_aes_block_hw_ID_IN 0x6000b40eUL
#define SYSCALL_cx_des_set_key_hw_ID_IN 0x6000af81UL
#define SYSCALL_cx_des_reset_hw_ID_IN 0x6000b0e5UL
#define SYSCALL_cx_des_block_hw_ID_IN 0x6000b190UL
#define SYSCALL_cx_bn_lock_ID_IN 0x600112f1UL
#define SYSCALL_cx_bn_unlock_ID_IN 0x6000b617UL
#define SYSCALL_cx_bn_is_locked_ID_IN 0x6000b752UL
#define SYSCALL_cx_bn_alloc_ID_IN 0x6001133cUL
#define SYSCALL_cx_bn_alloc_init_ID_IN 0x600114cdUL
#define SYSCALL_cx_bn_destroy_ID_IN 0x6000bc61UL
#define SYSCALL_cx_bn_nbytes_ID_IN 0x60010d2bUL
#define SYSCALL_cx_bn_init_ID_IN 0x60011525UL
#define SYSCALL_cx_bn_rand_ID_IN 0x6000eae4UL
#define SYSCALL_cx_bn_copy_ID_IN 0x6000c019UL
#define SYSCALL_cx_bn_set_u32_ID_IN 0x6000c196UL
#define SYSCALL_cx_bn_get_u32_ID_IN 0x6000eb4aUL
#define SYSCALL_cx_bn_export_ID_IN 0x6000c35aUL
#define SYSCALL_cx_bn_cmp_ID_IN 0x6000c41dUL
#define SYSCALL_cx_bn_cmp_u32_ID_IN 0x6000c5d3UL
#define SYSCALL_cx_bn_is_odd_ID_IN 0x600118b6UL
#define SYSCALL_cx_bn_xor_ID_IN 0x6000c8fcUL
#define SYSCALL_cx_bn_or_ID_IN 0x6000c9e7UL
#define SYSCALL_cx_bn_and_ID_IN 0x6000cadfUL
#define SYSCALL_cx_bn_tst_bit_ID_IN 0x6000cb40UL
#define SYSCALL_cx_bn_set_bit_ID_IN 0x6000ccf7UL
#define SYSCALL_cx_bn_clr_bit_ID_IN 0x6000cdb0UL
#define SYSCALL_cx_bn_shr_ID_IN 0x6000ce34UL
#define SYSCALL_cx_bn_shl_ID_IN 0x60011c54UL
#define SYSCALL_cx_bn_cnt_bits_ID_IN 0x6000ec20UL
#define SYSCALL_cx_bn_add_ID_IN 0x60011914UL
#define SYSCALL_cx_bn_sub_ID_IN 0x60011ac0UL
#define SYSCALL_cx_bn_mul_ID_IN 0x6000d29fUL
#define SYSCALL_cx_bn_mod_add_ID_IN 0x6000d302UL
#define SYSCALL_cx_bn_mod_sub_ID_IN 0x6000d475UL
#define SYSCALL_cx_bn_mod_mul_ID_IN 0x6000d59dUL
#define SYSCALL_cx_bn_reduce_ID_IN 0x6000d60eUL
#define SYSCALL_cx_bn_mod_sqrt_ID_IN 0x60011d6dUL
#define SYSCALL_cx_bn_mod_pow_bn_ID_IN 0x6000d7beUL
#define SYSCALL_cx_bn_mod_pow_ID_IN 0x6000ed91UL
#define SYSCALL_cx_bn_mod_pow2_ID_IN 0x6000eea8UL
#define SYSCALL_cx_bn_mod_invert_nprime_ID_IN 0x6000daeeUL
#define SYSCALL_cx_bn_mod_u32_invert_ID_IN 0x600116f7UL
#define SYSCALL_cx_mont_alloc_ID_IN 0x6000dc26UL
#define SYSCALL_cx_mont_init_ID_IN 0x6000dd51UL
#define SYSCALL_cx_mont_init2_ID_IN 0x6000de19UL
#define SYSCALL_cx_mont_to_montgomery_ID_IN 0x6000df46UL
#define SYSCALL_cx_mont_from_montgomery_ID_IN 0x6000e098UL
#define SYSCALL_cx_mont_mul_ID_IN 0x6000e14eUL
#define SYSCALL_cx_mont_pow_ID_IN 0x6000e2dcUL
#define SYSCALL_cx_mont_pow_bn_ID_IN 0x6000e30cUL
#define SYSCALL_cx_mont_invert_nprime_ID_IN 0x6000e4b2UL
#define SYSCALL_cx_bn_is_prime_ID_IN 0x6000ef6bUL
#define SYSCALL_cx_bn_next_prime_ID_IN 0x6000f070UL
#define SYSCALL_cx_bn_rng_ID_IN 0x6001dd7cUL
#define SYSCALL_cx_ecdomain_size_ID_IN 0x60012e04UL
#define SYSCALL_cx_ecdomain_parameters_length_ID_IN 0x60012fb4UL
#define SYSCALL_cx_ecdomain_parameter_ID_IN 0x6001306fUL
#define SYSCALL_cx_ecdomain_parameter_bn_ID_IN 0x60013192UL
#define SYSCALL_cx_ecdomain_generator_ID_IN 0x600132e4UL
#define SYSCALL_cx_ecdomain_generator_bn_ID_IN 0x600133c1UL
#define SYSCALL_cx_ecpoint_alloc_ID_IN 0x6000f1d6UL
#define SYSCALL_cx_ecpoint_destroy_ID_IN 0x6000f2ceUL
#define SYSCALL_cx_ecpoint_init_ID_IN 0x6000f369UL
#define SYSCALL_cx_ecpoint_init_bn_ID_IN 0x6000f4adUL
#define SYSCALL_cx_ecpoint_export_ID_IN 0x6000f5b9UL
#define SYSCALL_cx_ecpoint_export_bn_ID_IN 0x6000f6ecUL
#define SYSCALL_cx_ecpoint_compress_ID_IN 0x60012ce7UL
#define SYSCALL_cx_ecpoint_decompress_ID_IN 0x60012d42UL
#define SYSCALL_cx_ecpoint_add_ID_IN 0x60010e02UL
#define SYSCALL_cx_ecpoint_neg_ID_IN 0x60010f17UL
#define SYSCALL_cx_ecpoint_scalarmul_ID_IN 0x6001103cUL
#define SYSCALL_cx_ecpoint_scalarmul_bn_ID_IN 0x600111f0UL
#define SYSCALL_cx_ecpoint_rnd_scalarmul_ID_IN 0x6001274dUL
#define SYSCALL_cx_ecpoint_rnd_scalarmul_bn_ID_IN 0x60012889UL

#ifdef HAVE_FIXED_SCALAR_LENGTH
#define SYSCALL_cx_ecpoint_rnd_fixed_scalarmul_ID_IN 0x6001293cUL
#endif // HAVE_FIXED_SCALAR_LENGTH

#define SYSCALL_cx_ecpoint_double_scalarmul_ID_IN 0x600148a8UL
#define SYSCALL_cx_ecpoint_double_scalarmul_bn_ID_IN 0x60014a9dUL
#define SYSCALL_cx_ecpoint_cmp_ID_IN 0x6000fbc5UL
#define SYSCALL_cx_ecpoint_is_on_curve_ID_IN 0x6000fcc5UL
#define SYSCALL_cx_ecpoint_is_at_infinity_ID_IN 0x60014babUL

#ifdef HAVE_X25519
#define SYSCALL_cx_ecpoint_x25519_ID_IN 0x60001b3dUL
#endif // HAVE_X25519

#ifdef HAVE_X448
#define SYSCALL_cx_ecpoint_x448_ID_IN 0x6000609bUL
#endif // HAVE_X448

#define SYSCALL_cx_crc32_hw_ID_IN 0x60010271UL

#define SYSCALL_cx_get_random_bytes_ID_IN 0x60010775
#define SYSCALL_cx_trng_get_random_data_ID_IN 0x60010676UL

#define SYSCALL_os_perso_erase_all_ID_IN 0x60004bf5UL
#define SYSCALL_os_perso_set_seed_ID_IN 0x60004ebcUL
#define SYSCALL_os_perso_derive_and_set_seed_ID_IN 0x60004fbdUL
#define SYSCALL_os_perso_set_words_ID_IN 0x60005018UL
#define SYSCALL_os_perso_finalize_ID_IN 0x60005180UL
#define SYSCALL_os_perso_isonboarded_ID_IN 0x60009f4fUL
#define SYSCALL_os_perso_setonboardingstatus_ID_IN 0x60009400UL
#define SYSCALL_os_perso_derive_node_bip32_ID_IN 0x600053baUL
#define SYSCALL_os_perso_derive_node_with_seed_key_ID_IN 0x6000a6d8UL
#define SYSCALL_os_perso_derive_eip2333_ID_IN 0x6000a750UL

#if defined(HAVE_SEED_COOKIE)
#define SYSCALL_os_perso_seed_cookie_ID_IN 0x6000a8fcUL
#endif // HAVE_SEED_COOKIE

#define SYSCALL_os_endorsement_get_code_hash_ID_IN 0x6000550fUL
#define SYSCALL_os_endorsement_get_public_key_ID_IN 0x600056f3UL
#define SYSCALL_os_endorsement_get_public_key_certificate_ID_IN 0x6000574cUL
#define SYSCALL_os_endorsement_key1_get_app_secret_ID_IN 0x6000585cUL
#define SYSCALL_os_endorsement_key1_sign_data_ID_IN 0x600059d8UL
#define SYSCALL_os_endorsement_key2_derive_sign_data_ID_IN 0x60005a4aUL
#define SYSCALL_os_perso_set_pin_ID_IN 0x60004cdfUL
#define SYSCALL_os_perso_set_current_identity_pin_ID_IN 0x60004dfeUL
#define SYSCALL_os_global_pin_is_validated_ID_IN 0x6000a03cUL
#define SYSCALL_os_global_pin_check_ID_IN 0x6000a102UL
#define SYSCALL_os_global_pin_invalidate_ID_IN 0x60005dd0UL
#define SYSCALL_os_global_pin_retries_ID_IN 0x60005e59UL
#define SYSCALL_os_registry_count_ID_IN 0x60005f40UL
#define SYSCALL_os_registry_get_ID_IN 0x60012263UL
#define SYSCALL_os_ux_ID_IN 0x60006458UL
#define SYSCALL_os_ux_result_ID_IN 0x60006500UL
#define SYSCALL_os_lib_call_ID_IN 0x6000670dUL
#define SYSCALL_os_lib_end_ID_IN 0x6000688dUL
#define SYSCALL_os_flags_ID_IN 0x60006a6eUL
#define SYSCALL_os_version_ID_IN 0x60006bb8UL
#define SYSCALL_os_serial_ID_IN 0x60006cb3UL
#define SYSCALL_os_seph_features_ID_IN 0x60006ed6UL
#define SYSCALL_os_seph_version_ID_IN 0x60006facUL
#define SYSCALL_os_bootloader_version_ID_IN 0x600073adUL
#define SYSCALL_os_setting_get_ID_IN 0x600070c5UL
#define SYSCALL_os_setting_set_ID_IN 0x60007196UL
#define SYSCALL_os_get_memory_info_ID_IN 0x60007263UL
#define SYSCALL_os_registry_get_tag_ID_IN 0x60012370UL
#define SYSCALL_os_registry_get_current_app_tag_ID_IN 0x600074d4UL
#define SYSCALL_os_registry_delete_app_and_dependees_ID_IN 0x600124abUL
#define SYSCALL_os_registry_delete_all_apps_ID_IN 0x600125a8UL
#define SYSCALL_os_sched_exec_ID_IN 0x600126efUL
#define SYSCALL_os_sched_exit_ID_IN 0x60009abeUL
#define SYSCALL_os_sched_is_running_ID_IN 0x60009bdaUL
#define SYSCALL_os_sched_create_ID_IN 0x60011b18UL
#define SYSCALL_os_sched_kill_ID_IN 0x600078d8UL
#define SYSCALL_io_seph_send_ID_IN 0x60008381UL
#define SYSCALL_io_seph_is_status_sent_ID_IN 0x600084bbUL
#define SYSCALL_io_seph_recv_ID_IN 0x600085e4UL
#define SYSCALL_nvm_write_page_ID_IN 0x60010a40UL
#define SYSCALL_nvm_erase_page_ID_IN 0x600136e4UL
#define SYSCALL_try_context_get_ID_IN 0x600087b1UL
#define SYSCALL_try_context_set_ID_IN 0x60010b06UL
#define SYSCALL_os_sched_last_status_ID_IN 0x60009c8bUL
#define SYSCALL_os_sched_yield_ID_IN 0x60009dbeUL
#define SYSCALL_os_sched_switch_ID_IN 0x60009e1dUL
#define SYSCALL_os_sched_current_task_ID_IN 0x60008b51UL
#define SYSCALL_os_mpu_protect_ram_ID_IN 0x60008d42UL
#define SYSCALL_os_mpu_protect_flash_ID_IN 0x60008ef7UL
#define SYSCALL_os_allow_protected_flash_ID_IN 0x60008f9cUL
#define SYSCALL_os_deny_protected_flash_ID_IN 0x60009134UL
#define SYSCALL_os_allow_protected_ram_ID_IN 0x60009269UL
#define SYSCALL_os_deny_protected_ram_ID_IN 0x600093e9UL

#ifndef HAVE_BOLOS_NO_CUSTOMCA
#define SYSCALL_os_customca_verify_ID_IN 0x60009061UL
#endif // HAVE_BOLOS_NO_CUSTOMCA

#ifdef HAVE_AEM_PIN
#define SYSCALL_os_aem_set_pin_ID_IN 0x600139c5UL
#define SYSCALL_os_aem_unset_pin_ID_IN 0x60013a3bUL
#define SYSCALL_os_aem_is_pin_set_ID_IN 0x60013bf1UL
#define SYSCALL_os_aem_set_response_ID_IN 0x60013c79UL
#define SYSCALL_os_aem_activate_response_ID_IN 0x60013df8UL
#define SYSCALL_os_aem_deactivate_response_ID_IN 0x60013efcUL
#define SYSCALL_os_aem_is_response_active_ID_IN 0x60013f53UL
#define SYSCALL_os_aem_is_feature_active_ID_IN 0x6001403aUL
#define SYSCALL_os_aem_get_response_length_ID_IN 0x6001413aUL
#define SYSCALL_os_aem_get_response_format_ID_IN 0x6001420dUL
#define SYSCALL_os_aem_get_response_ID_IN 0x6001438cUL
#define SYSCALL_os_aem_check_pin_ID_IN 0x600144f9UL
#define SYSCALL_os_aem_invalidate_pin_ID_IN 0x60014539UL
#define SYSCALL_os_aem_get_ptc_ID_IN 0x6001468bUL
#define SYSCALL_os_aem_is_pin_validated_ID_IN 0x600147aaUL
#endif // HAVE_AEM_PIN

#if (defined(HAVE_BOLOS_NOTWIPED_ENDORSEMENT) &&                               \
     defined(HAVE_ENDORSEMENTS_DISPLAY))
#define SYSCALL_os_endorsement_get_metadata_ID_IN 0x600138faUL
#endif // (defined(HAVE_BOLOS_NOTWIPED_ENDORSEMENT) &&
       // defined(HAVE_ENDORSEMENTS_DISPLAY))

#if defined(HAVE_VAULT_RECOVERY_ALGO)
#define SYSCALL_os_perso_derive_and_prepare_seed_ID_IN 0x6001371bUL
#define SYSCALL_os_perso_derive_and_xor_seed_ID_IN 0x600149afUL
#define SYSCALL_os_perso_get_seed_algorithm_ID_IN 0x600152e1UL
#endif // HAVE_VAULT_RECOVERY_ALGO

#ifdef ST33
#define SYSCALL_screen_clear_ID_IN 0x600079f4UL
#define SYSCALL_screen_update_ID_IN 0x60007af3UL
#define SYSCALL_screen_set_keepout_ID_IN 0x60007bedUL
#ifdef HAVE_BRIGHTNESS_SYSCALL
#define SYSCALL_screen_set_brightness_ID_IN 0x60008cedUL
#endif // HAVE_BRIGHTNESS_SYSCALL
#define SYSCALL_bagl_hal_draw_bitmap_within_rect_ID_IN 0x60007ca0UL
#define SYSCALL_bagl_hal_draw_rect_ID_IN 0x60007da4UL
#define SYSCALL_os_ux_set_status_ID_IN 0x600134e9UL
#define SYSCALL_os_ux_get_status_ID_IN 0x60013593UL
#define SYSCALL_os_seph_serial_ID_IN 0x60006dd4UL
#define SYSCALL_io_button_read_ID_IN 0x60008f22UL
#endif // ST33

#ifdef BOLOS_DEBUG
#ifdef TARGET_NANOX
#define SYSCALL_trigger_gpio3_ID_IN 0x60008252UL
#endif // TARGET_NANOX
#endif // BOLOS_DEBUG

#ifdef HAVE_IO_I2C
#define SYSCALL_io_i2c_setmode_ID_IN 0x600095a2UL
#define SYSCALL_io_i2c_prepare_ID_IN 0x60009669UL
#define SYSCALL_io_i2c_xfer_ID_IN 0x60009713UL
#ifndef BOLOS_RELEASE
#ifdef BOLOS_DEBUG
#define SYSCALL_io_i2c_dumpstate_ID_IN 0x6000980fUL
#define SYSCALL_io_debug_ID_IN 0x6000a95cUL
#endif // BOLOS_DEBUG
#endif // BOLOS_RELEASE
#endif // HAVE_IO_I2C

#ifdef DEBUG_OS_STACK_CONSUMPTION
#define SYSCALL_os_stack_operations_ID_IN 0x600199f0UL
#endif // DEBUG_OS_STACK_CONSUMPTION

#ifdef BOLOS_DEBUG
#define SYSCALL_log_debug_ID_IN 0x60011e3eUL
#define SYSCALL_log_debug_nw_ID_IN 0x60011f5eUL
#define SYSCALL_log_debug_int_ID_IN 0x60008061UL
#define SYSCALL_log_debug_int_nw_ID_IN 0x60008178UL
#define SYSCALL_log_mem_ID_IN 0x6001208bUL
#endif // BOLOS_DEBUG

#define SYSCALL_PARAMETER_ARRAY_MAX_LEN 11

#endif // SYSCALL_DEFS_H
#endif // SYSCALL_GENERATE
