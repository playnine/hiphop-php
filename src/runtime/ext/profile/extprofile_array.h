/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
   | Copyright (c) 1997-2010 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef __EXTPROFILE_ARRAY_H__
#define __EXTPROFILE_ARRAY_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/ext/ext_array.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

inline Variant x_array_change_key_case(CVarRef input, bool upper = false) {
  FUNCTION_INJECTION_BUILTIN(array_change_key_case);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_change_key_case(input, upper);
}

inline Variant x_array_chunk(CVarRef input, int size, bool preserve_keys = false) {
  FUNCTION_INJECTION_BUILTIN(array_chunk);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_chunk(input, size, preserve_keys);
}

inline Variant x_array_combine(CVarRef keys, CVarRef values) {
  FUNCTION_INJECTION_BUILTIN(array_combine);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_combine(keys, values);
}

inline Variant x_array_count_values(CVarRef input) {
  FUNCTION_INJECTION_BUILTIN(array_count_values);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_count_values(input);
}

inline Variant x_array_fill_keys(CVarRef keys, CVarRef value) {
  FUNCTION_INJECTION_BUILTIN(array_fill_keys);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_fill_keys(keys, value);
}

inline Variant x_array_fill(int start_index, int num, CVarRef value) {
  FUNCTION_INJECTION_BUILTIN(array_fill);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_fill(start_index, num, value);
}

inline Variant x_array_filter(CVarRef input, CVarRef callback = null_variant) {
  FUNCTION_INJECTION_BUILTIN(array_filter);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_filter(input, callback);
}

inline Variant x_array_flip(CVarRef trans) {
  FUNCTION_INJECTION_BUILTIN(array_flip);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_flip(trans);
}

inline bool x_array_key_exists(CVarRef key, CVarRef search) {
  FUNCTION_INJECTION_BUILTIN(array_key_exists);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_key_exists(key, search);
}

inline bool x_key_exists(CVarRef key, CVarRef search) {
  FUNCTION_INJECTION_BUILTIN(key_exists);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_key_exists(key, search);
}

inline Variant x_array_keys(CVarRef input, CVarRef search_value = not_given_variant, bool strict = false) {
  FUNCTION_INJECTION_BUILTIN(array_keys);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_keys(input, search_value, strict);
}

inline Variant x_array_map(int _argc, CVarRef callback, CVarRef arr1, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_map);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_map(_argc, callback, arr1, _argv);
}

inline Variant x_array_merge_recursive(int _argc, CVarRef array1, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_merge_recursive);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_merge_recursive(_argc, array1, _argv);
}

inline Variant x_array_merge(int _argc, CVarRef array1, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_merge);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_merge(_argc, array1, _argv);
}

inline Variant x_array_replace_recursive(int _argc, CVarRef array1, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_replace_recursive);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_replace_recursive(_argc, array1, _argv);
}

inline Variant x_array_replace(int _argc, CVarRef array1, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_replace);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_replace(_argc, array1, _argv);
}

inline bool x_array_multisort(int _argc, CVarRef ar1, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_multisort);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_multisort(_argc, ar1, _argv);
}

inline Variant x_array_pad(CVarRef input, int pad_size, CVarRef pad_value) {
  FUNCTION_INJECTION_BUILTIN(array_pad);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_pad(input, pad_size, pad_value);
}

inline Variant x_array_pop(CVarRef array) {
  FUNCTION_INJECTION_BUILTIN(array_pop);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_pop(array);
}

inline Variant x_array_product(CVarRef array) {
  FUNCTION_INJECTION_BUILTIN(array_product);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_product(array);
}

inline Variant x_array_push(int _argc, CVarRef array, CVarRef var, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_push);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_push(_argc, array, var, _argv);
}

inline Variant x_array_rand(CVarRef input, int num_req = 1) {
  FUNCTION_INJECTION_BUILTIN(array_rand);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_rand(input, num_req);
}

inline Variant x_array_reduce(CVarRef input, CVarRef callback, CVarRef initial = null_variant) {
  FUNCTION_INJECTION_BUILTIN(array_reduce);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_reduce(input, callback, initial);
}

inline Variant x_array_reverse(CVarRef array, bool preserve_keys = false) {
  FUNCTION_INJECTION_BUILTIN(array_reverse);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_reverse(array, preserve_keys);
}

inline Variant x_array_search(CVarRef needle, CVarRef haystack, bool strict = false) {
  FUNCTION_INJECTION_BUILTIN(array_search);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_search(needle, haystack, strict);
}

inline Variant x_array_shift(CVarRef array) {
  FUNCTION_INJECTION_BUILTIN(array_shift);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_shift(array);
}

inline Variant x_array_slice(CVarRef array, int offset, CVarRef length = null_variant, bool preserve_keys = false) {
  FUNCTION_INJECTION_BUILTIN(array_slice);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_slice(array, offset, length, preserve_keys);
}

inline Variant x_array_splice(CVarRef input, int offset, CVarRef length = null_variant, CVarRef replacement = null_variant) {
  FUNCTION_INJECTION_BUILTIN(array_splice);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_splice(input, offset, length, replacement);
}

inline Variant x_array_sum(CVarRef array) {
  FUNCTION_INJECTION_BUILTIN(array_sum);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_sum(array);
}

inline Variant x_array_unique(CVarRef array, int sort_flags = 2) {
  FUNCTION_INJECTION_BUILTIN(array_unique);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_unique(array, sort_flags);
}

inline int x_array_unshift(int _argc, CVarRef array, CVarRef var, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_unshift);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_unshift(_argc, array, var, _argv);
}

inline Variant x_array_values(CVarRef input) {
  FUNCTION_INJECTION_BUILTIN(array_values);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_values(input);
}

inline bool x_array_walk_recursive(CVarRef input, CVarRef funcname, CVarRef userdata = null_variant) {
  FUNCTION_INJECTION_BUILTIN(array_walk_recursive);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_walk_recursive(input, funcname, userdata);
}

inline bool x_array_walk(CVarRef input, CVarRef funcname, CVarRef userdata = null_variant) {
  FUNCTION_INJECTION_BUILTIN(array_walk);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_walk(input, funcname, userdata);
}

inline Array x_compact(int _argc, CVarRef varname, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(compact);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_compact(_argc, varname, _argv);
}

inline bool x_shuffle(CVarRef array) {
  FUNCTION_INJECTION_BUILTIN(shuffle);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_shuffle(array);
}

inline int x_count(CVarRef var, bool recursive = false) {
  FUNCTION_INJECTION_BUILTIN(count);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_count(var, recursive);
}

inline int x_sizeof(CVarRef var, bool recursive = false) {
  FUNCTION_INJECTION_BUILTIN(sizeof);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_sizeof(var, recursive);
}

inline Variant x_each(CVarRef array) {
  FUNCTION_INJECTION_BUILTIN(each);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_each(array);
}

inline Variant x_current(CVarRef array) {
  FUNCTION_INJECTION_BUILTIN(current);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_current(array);
}

inline Variant x_hphp_current_ref(CVarRef array) {
  FUNCTION_INJECTION_BUILTIN(hphp_current_ref);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_hphp_current_ref(array);
}

inline Variant x_next(CVarRef array) {
  FUNCTION_INJECTION_BUILTIN(next);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_next(array);
}

inline Variant x_pos(CVarRef array) {
  FUNCTION_INJECTION_BUILTIN(pos);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_pos(array);
}

inline Variant x_prev(CVarRef array) {
  FUNCTION_INJECTION_BUILTIN(prev);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_prev(array);
}

inline Variant x_reset(CVarRef array) {
  FUNCTION_INJECTION_BUILTIN(reset);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_reset(array);
}

inline Variant x_end(CVarRef array) {
  FUNCTION_INJECTION_BUILTIN(end);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_end(array);
}

inline Variant x_key(CVarRef array) {
  FUNCTION_INJECTION_BUILTIN(key);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_key(array);
}

inline Variant x_hphp_get_iterator(CVarRef iterable, bool isMutable) {
  FUNCTION_INJECTION_BUILTIN(hphp_get_iterator);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_hphp_get_iterator(iterable, isMutable);
}

inline bool x_in_array(CVarRef needle, CVarRef haystack, bool strict = false) {
  FUNCTION_INJECTION_BUILTIN(in_array);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_in_array(needle, haystack, strict);
}

inline Variant x_range(CVarRef low, CVarRef high, CVarRef step = 1) {
  FUNCTION_INJECTION_BUILTIN(range);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_range(low, high, step);
}

inline Variant x_array_diff(int _argc, CVarRef array1, CVarRef array2, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_diff);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_diff(_argc, array1, array2, _argv);
}

inline Variant x_array_udiff(int _argc, CVarRef array1, CVarRef array2, CVarRef data_compare_func, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_udiff);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_udiff(_argc, array1, array2, data_compare_func, _argv);
}

inline Variant x_array_diff_assoc(int _argc, CVarRef array1, CVarRef array2, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_diff_assoc);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_diff_assoc(_argc, array1, array2, _argv);
}

inline Variant x_array_diff_uassoc(int _argc, CVarRef array1, CVarRef array2, CVarRef key_compare_func, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_diff_uassoc);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_diff_uassoc(_argc, array1, array2, key_compare_func, _argv);
}

inline Variant x_array_udiff_assoc(int _argc, CVarRef array1, CVarRef array2, CVarRef data_compare_func, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_udiff_assoc);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_udiff_assoc(_argc, array1, array2, data_compare_func, _argv);
}

inline Variant x_array_udiff_uassoc(int _argc, CVarRef array1, CVarRef array2, CVarRef data_compare_func, CVarRef key_compare_func, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_udiff_uassoc);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_udiff_uassoc(_argc, array1, array2, data_compare_func, key_compare_func, _argv);
}

inline Variant x_array_diff_key(int _argc, CVarRef array1, CVarRef array2, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_diff_key);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_diff_key(_argc, array1, array2, _argv);
}

inline Variant x_array_diff_ukey(int _argc, CVarRef array1, CVarRef array2, CVarRef key_compare_func, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_diff_ukey);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_diff_ukey(_argc, array1, array2, key_compare_func, _argv);
}

inline Variant x_array_intersect(int _argc, CVarRef array1, CVarRef array2, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_intersect);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_intersect(_argc, array1, array2, _argv);
}

inline Variant x_array_uintersect(int _argc, CVarRef array1, CVarRef array2, CVarRef data_compare_func, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_uintersect);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_uintersect(_argc, array1, array2, data_compare_func, _argv);
}

inline Variant x_array_intersect_assoc(int _argc, CVarRef array1, CVarRef array2, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_intersect_assoc);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_intersect_assoc(_argc, array1, array2, _argv);
}

inline Variant x_array_intersect_uassoc(int _argc, CVarRef array1, CVarRef array2, CVarRef key_compare_func, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_intersect_uassoc);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_intersect_uassoc(_argc, array1, array2, key_compare_func, _argv);
}

inline Variant x_array_uintersect_assoc(int _argc, CVarRef array1, CVarRef array2, CVarRef data_compare_func, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_uintersect_assoc);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_uintersect_assoc(_argc, array1, array2, data_compare_func, _argv);
}

inline Variant x_array_uintersect_uassoc(int _argc, CVarRef array1, CVarRef array2, CVarRef data_compare_func, CVarRef key_compare_func, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_uintersect_uassoc);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_uintersect_uassoc(_argc, array1, array2, data_compare_func, key_compare_func, _argv);
}

inline Variant x_array_intersect_key(int _argc, CVarRef array1, CVarRef array2, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_intersect_key);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_intersect_key(_argc, array1, array2, _argv);
}

inline Variant x_array_intersect_ukey(int _argc, CVarRef array1, CVarRef array2, CVarRef key_compare_func, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(array_intersect_ukey);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_array_intersect_ukey(_argc, array1, array2, key_compare_func, _argv);
}

inline bool x_sort(CVarRef array, int sort_flags = 0, bool use_collator = false) {
  FUNCTION_INJECTION_BUILTIN(sort);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_sort(array, sort_flags, use_collator);
}

inline bool x_rsort(CVarRef array, int sort_flags = 0, bool use_collator = false) {
  FUNCTION_INJECTION_BUILTIN(rsort);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_rsort(array, sort_flags, use_collator);
}

inline bool x_asort(CVarRef array, int sort_flags = 0, bool use_collator = false) {
  FUNCTION_INJECTION_BUILTIN(asort);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_asort(array, sort_flags, use_collator);
}

inline bool x_arsort(CVarRef array, int sort_flags = 0, bool use_collator = false) {
  FUNCTION_INJECTION_BUILTIN(arsort);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_arsort(array, sort_flags, use_collator);
}

inline bool x_ksort(CVarRef array, int sort_flags = 0) {
  FUNCTION_INJECTION_BUILTIN(ksort);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_ksort(array, sort_flags);
}

inline bool x_krsort(CVarRef array, int sort_flags = 0) {
  FUNCTION_INJECTION_BUILTIN(krsort);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_krsort(array, sort_flags);
}

inline bool x_usort(CVarRef array, CVarRef cmp_function) {
  FUNCTION_INJECTION_BUILTIN(usort);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_usort(array, cmp_function);
}

inline bool x_uasort(CVarRef array, CVarRef cmp_function) {
  FUNCTION_INJECTION_BUILTIN(uasort);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_uasort(array, cmp_function);
}

inline bool x_uksort(CVarRef array, CVarRef cmp_function) {
  FUNCTION_INJECTION_BUILTIN(uksort);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_uksort(array, cmp_function);
}

inline Variant x_natsort(CVarRef array) {
  FUNCTION_INJECTION_BUILTIN(natsort);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_natsort(array);
}

inline Variant x_natcasesort(CVarRef array) {
  FUNCTION_INJECTION_BUILTIN(natcasesort);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_natcasesort(array);
}

inline String x_i18n_loc_get_default() {
  FUNCTION_INJECTION_BUILTIN(i18n_loc_get_default);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_i18n_loc_get_default();
}

inline bool x_i18n_loc_set_default(CStrRef locale) {
  FUNCTION_INJECTION_BUILTIN(i18n_loc_set_default);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_i18n_loc_set_default(locale);
}

inline bool x_i18n_loc_set_attribute(int64 attr, int64 val) {
  FUNCTION_INJECTION_BUILTIN(i18n_loc_set_attribute);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_i18n_loc_set_attribute(attr, val);
}

inline bool x_i18n_loc_set_strength(int64 strength) {
  FUNCTION_INJECTION_BUILTIN(i18n_loc_set_strength);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_i18n_loc_set_strength(strength);
}

inline Variant x_i18n_loc_get_error_code() {
  FUNCTION_INJECTION_BUILTIN(i18n_loc_get_error_code);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_i18n_loc_get_error_code();
}


///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXTPROFILE_ARRAY_H__
