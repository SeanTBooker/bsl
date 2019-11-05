/// @copyright
/// Copyright (C) 2020 Assured Information Security, Inc.
///
/// @copyright
/// Permission is hereby granted, free of charge, to any person obtaining a copy
/// of this software and associated documentation files (the "Software"), to deal
/// in the Software without restriction, including without limitation the rights
/// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
/// copies of the Software, and to permit persons to whom the Software is
/// furnished to do so, subject to the following conditions:
///
/// @copyright
/// The above copyright notice and this permission notice shall be included in
/// all copies or substantial portions of the Software.
///
/// @copyright
/// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
/// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
/// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
/// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
/// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
/// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
/// SOFTWARE.

#include <bsl/cstr_type.hpp>
#include <bsl/exit_code.hpp>
#include <bsl/main.hpp>
#include <bsl/print.hpp>

#include "example_add_const_overview.hpp"
#include "example_add_lvalue_reference_overview.hpp"
#include "example_add_pointer_overview.hpp"
#include "example_add_rvalue_reference_overview.hpp"
#include "example_addressof_overview.hpp"
#include "example_aligned_storage_overview.hpp"
// #include "example_aligned_union_overview.hpp"
#include "example_alignment_of_overview.hpp"
#include "example_array_overview.hpp"
#include "array/example_array_at_if.hpp"
#include "array/example_array_back_if.hpp"
#include "array/example_array_back.hpp"
#include "array/example_array_begin.hpp"
#include "array/example_array_data.hpp"
#include "array/example_array_empty.hpp"
#include "array/example_array_end.hpp"
#include "array/example_array_equals.hpp"
#include "array/example_array_front_if.hpp"
#include "array/example_array_front.hpp"
#include "array/example_array_iter.hpp"
#include "array/example_array_max_size.hpp"
#include "array/example_array_not_equals.hpp"
#include "array/example_array_rbegin.hpp"
#include "array/example_array_rend.hpp"
#include "array/example_array_riter.hpp"
#include "array/example_array_size_bytes.hpp"
#include "array/example_array_size.hpp"
#include "example_as_const_overview.hpp"
#include "basic_errc_type/example_basic_errc_type_constructor_t.hpp"
#include "basic_errc_type/example_basic_errc_type_equals.hpp"
#include "basic_errc_type/example_basic_errc_type_failure.hpp"
#include "basic_errc_type/example_basic_errc_type_get.hpp"
#include "basic_errc_type/example_basic_errc_type_is_checked.hpp"
#include "basic_errc_type/example_basic_errc_type_is_unchecked.hpp"
#include "basic_errc_type/example_basic_errc_type_message.hpp"
#include "basic_errc_type/example_basic_errc_type_not_equals.hpp"
#include "basic_errc_type/example_basic_errc_type_success.hpp"
#include "example_basic_string_view_overview.hpp"
#include "basic_string_view/example_basic_string_view_at_if.hpp"
#include "basic_string_view/example_basic_string_view_back_if.hpp"
#include "basic_string_view/example_basic_string_view_begin.hpp"
#include "basic_string_view/example_basic_string_view_compare.hpp"
#include "basic_string_view/example_basic_string_view_data.hpp"
#include "basic_string_view/example_basic_string_view_default_constructor.hpp"
#include "basic_string_view/example_basic_string_view_empty.hpp"
#include "basic_string_view/example_basic_string_view_end.hpp"
#include "basic_string_view/example_basic_string_view_ends_with.hpp"
#include "basic_string_view/example_basic_string_view_equals.hpp"
#include "basic_string_view/example_basic_string_view_front_if.hpp"
#include "basic_string_view/example_basic_string_view_iter.hpp"
#include "basic_string_view/example_basic_string_view_length.hpp"
#include "basic_string_view/example_basic_string_view_max_size.hpp"
#include "basic_string_view/example_basic_string_view_not_equals.hpp"
#include "basic_string_view/example_basic_string_view_rbegin.hpp"
#include "basic_string_view/example_basic_string_view_remove_prefix.hpp"
#include "basic_string_view/example_basic_string_view_remove_suffix.hpp"
#include "basic_string_view/example_basic_string_view_rend.hpp"
#include "basic_string_view/example_basic_string_view_riter.hpp"
#include "basic_string_view/example_basic_string_view_s_constructor.hpp"
#include "basic_string_view/example_basic_string_view_size_bytes.hpp"
#include "basic_string_view/example_basic_string_view_size.hpp"
#include "basic_string_view/example_basic_string_view_starts_with.hpp"
#include "basic_string_view/example_basic_string_view_substr.hpp"
#include "example_bool_constant_overview.hpp"
#include "example_byte_overview.hpp"
#include "byte/example_byte_and_assign.hpp"
#include "byte/example_byte_and.hpp"
#include "byte/example_byte_by_value_constructor.hpp"
#include "byte/example_byte_complement.hpp"
#include "byte/example_byte_default_constructor.hpp"
#include "byte/example_byte_equal.hpp"
#include "byte/example_byte_lshift_assign.hpp"
#include "byte/example_byte_lshift.hpp"
#include "byte/example_byte_not_equal.hpp"
#include "byte/example_byte_or_assign.hpp"
#include "byte/example_byte_or.hpp"
#include "byte/example_byte_rshift_assign.hpp"
#include "byte/example_byte_rshift.hpp"
#include "byte/example_byte_to_integer.hpp"
#include "byte/example_byte_xor_assign.hpp"
#include "byte/example_byte_xor.hpp"
#include "example_char_traits_overview.hpp"
#include "char_traits/example_char_traits_compare.hpp"
#include "char_traits/example_char_traits_eof.hpp"
#include "char_traits/example_char_traits_eq_int_type.hpp"
#include "char_traits/example_char_traits_eq.hpp"
#include "char_traits/example_char_traits_find.hpp"
#include "char_traits/example_char_traits_length.hpp"
#include "char_traits/example_char_traits_lt.hpp"
#include "char_traits/example_char_traits_not_eof.hpp"
#include "char_traits/example_char_traits_to_char_type.hpp"
#include "char_traits/example_char_traits_to_int_type.hpp"
#include "example_color_overview.hpp"
#include "example_common_type_overview.hpp"
#include "example_conditional_overview.hpp"
#include "example_conjunction_overview.hpp"
#include "example_contiguous_iterator_overview.hpp"
#include "contiguous_iterator/example_contiguous_iterator_data.hpp"
#include "contiguous_iterator/example_contiguous_iterator_decrement.hpp"
#include "contiguous_iterator/example_contiguous_iterator_empty.hpp"
#include "contiguous_iterator/example_contiguous_iterator_equals.hpp"
#include "contiguous_iterator/example_contiguous_iterator_get_if.hpp"
#include "contiguous_iterator/example_contiguous_iterator_gt_equals.hpp"
#include "contiguous_iterator/example_contiguous_iterator_gt.hpp"
#include "contiguous_iterator/example_contiguous_iterator_increment.hpp"
#include "contiguous_iterator/example_contiguous_iterator_index.hpp"
#include "contiguous_iterator/example_contiguous_iterator_is_end.hpp"
#include "contiguous_iterator/example_contiguous_iterator_lt_equals.hpp"
#include "contiguous_iterator/example_contiguous_iterator_lt.hpp"
#include "contiguous_iterator/example_contiguous_iterator_not_equals.hpp"
#include "contiguous_iterator/example_contiguous_iterator_size.hpp"
#include "example_decay_overview.hpp"
#include "example_declval_overview.hpp"
#include "example_destroy_at_overview.hpp"
#include "example_detected_or_overview.hpp"
#include "example_detected_overview.hpp"
#include "example_discard_overview.hpp"
#include "example_disjunction_overview.hpp"
#include "example_enable_if_overview.hpp"
#include "example_basic_errc_type_overview.hpp"
#include "example_exchange_overview.hpp"
#include "example_extent_overview.hpp"
#include "example_false_type_overview.hpp"
#include "example_fill_overview.hpp"
#include "example_for_each_overview.hpp"
#include "example_forward_overview.hpp"
// #include "example_has_unique_object_representations_overview.hpp"
#include "example_has_virtual_destructor_overview.hpp"
#include "example_in_place_overview.hpp"
// #include "example_integer_sequence_overview.hpp"
// #include "integer_sequence/example_integer_sequence_max.hpp"
// #include "integer_sequence/example_integer_sequence_min.hpp"
// #include "integer_sequence/example_integer_sequence_size.hpp"
#include "example_integral_constant_overview.hpp"
#include "example_invoke_result_overview.hpp"
#include "example_invoke_overview.hpp"
#include "example_is_abstract_overview.hpp"
// #include "example_is_aggregate_overview.hpp"
#include "example_is_arithmetic_overview.hpp"
#include "example_is_array_overview.hpp"
#include "example_is_assignable_overview.hpp"
#include "example_is_base_of_overview.hpp"
#include "example_is_bool_overview.hpp"
#include "example_is_bounded_array_overview.hpp"
#include "example_is_class_overview.hpp"
#include "example_is_compound_overview.hpp"
#include "example_is_const_overview.hpp"
// #include "example_is_constant_evaluated_overview.hpp"
#include "example_is_constructible_overview.hpp"
#include "example_is_convertible_overview.hpp"
#include "example_is_copy_assignable_overview.hpp"
#include "example_is_copy_constructible_overview.hpp"
#include "example_is_copyable_overview.hpp"
#include "example_is_default_constructible_overview.hpp"
#include "example_is_destructible_overview.hpp"
#include "example_is_detected_overview.hpp"
#include "example_is_empty_overview.hpp"
#include "example_is_enum_overview.hpp"
#include "example_is_final_overview.hpp"
#include "example_is_function_overview.hpp"
#include "example_is_fundamental_overview.hpp"
#include "example_is_integral_overview.hpp"
#include "example_is_invocable_overview.hpp"
#include "example_is_invocable_r_overview.hpp"
#include "example_is_lvalue_reference_overview.hpp"
#include "example_is_member_function_pointer_overview.hpp"
#include "example_is_member_object_pointer_overview.hpp"
#include "example_is_member_pointer_overview.hpp"
#include "example_is_move_assignable_overview.hpp"
#include "example_is_move_constructible_overview.hpp"
#include "example_is_movable_overview.hpp"
#include "example_is_nothrow_assignable_overview.hpp"
#include "example_is_nothrow_constructible_overview.hpp"
#include "example_is_nothrow_convertible_overview.hpp"
#include "example_is_nothrow_copy_assignable_overview.hpp"
#include "example_is_nothrow_copy_constructible_overview.hpp"
#include "example_is_nothrow_copyable_overview.hpp"
#include "example_is_nothrow_default_constructible_overview.hpp"
#include "example_is_nothrow_destructible_overview.hpp"
#include "example_is_nothrow_invocable_overview.hpp"
#include "example_is_nothrow_invocable_r_overview.hpp"
#include "example_is_nothrow_move_assignable_overview.hpp"
#include "example_is_nothrow_move_constructible_overview.hpp"
#include "example_is_nothrow_movable_overview.hpp"
#include "example_is_nothrow_swappable_overview.hpp"
#include "example_is_nothrow_swappable_with_overview.hpp"
#include "example_is_null_pointer_overview.hpp"
#include "example_is_object_overview.hpp"
#include "example_is_pod_overview.hpp"
#include "example_is_pointer_overview.hpp"
#include "example_is_polymorphic_overview.hpp"
#include "example_is_reference_overview.hpp"
#include "example_is_reference_wrapper_overview.hpp"
#include "example_is_rvalue_reference_overview.hpp"
#include "example_is_same_overview.hpp"
#include "example_is_scalar_overview.hpp"
#include "example_is_signed_overview.hpp"
#include "example_is_standard_layout_overview.hpp"
#include "example_is_swappable_overview.hpp"
#include "example_is_swappable_with_overview.hpp"
#include "example_is_trivial_overview.hpp"
#include "example_is_trivially_assignable_overview.hpp"
#include "example_is_trivially_constructible_overview.hpp"
#include "example_is_trivially_copy_assignable_overview.hpp"
#include "example_is_trivially_copy_constructible_overview.hpp"
#include "example_is_trivially_copyable_overview.hpp"
#include "example_is_trivially_default_constructible_overview.hpp"
#include "example_is_trivially_destructible_overview.hpp"
#include "example_is_trivially_move_assignable_overview.hpp"
#include "example_is_trivially_move_constructible_overview.hpp"
#include "example_is_trivially_movable_overview.hpp"
#include "example_is_unbounded_array_overview.hpp"
#include "example_is_unsigned_overview.hpp"
#include "example_is_void_overview.hpp"
#include "example_make_signed_overview.hpp"
#include "example_make_unsigned_overview.hpp"
#include "example_max_align_t_overview.hpp"
#include "example_max_of_overview.hpp"
#include "example_min_of_overview.hpp"
#include "example_move_if_noexcept_overview.hpp"
#include "example_move_overview.hpp"
#include "example_negation_overview.hpp"
#include "example_numeric_limits_overview.hpp"
#include "example_rank_overview.hpp"
#include "example_reference_wrapper_overview.hpp"
#include "reference_wrapper/example_reference_wrapper_constructor.hpp"
#include "reference_wrapper/example_reference_wrapper_functor.hpp"
#include "reference_wrapper/example_reference_wrapper_get.hpp"
#include "example_remove_all_extents_overview.hpp"
#include "example_remove_const_overview.hpp"
#include "example_remove_cv_overview.hpp"
#include "example_remove_cvext_overview.hpp"
#include "example_remove_cvref_overview.hpp"
#include "example_remove_extent_overview.hpp"
#include "example_remove_pointer_overview.hpp"
#include "example_remove_reference_overview.hpp"
#include "example_result_overview.hpp"
#include "result/example_result_copy_assignment.hpp"
#include "result/example_result_copy_constructor.hpp"
#include "result/example_result_equals.hpp"
#include "result/example_result_errc_copy_constructor.hpp"
#include "result/example_result_errc_move_constructor.hpp"
#include "result/example_result_errc.hpp"
#include "result/example_result_failure.hpp"
#include "result/example_result_get_if.hpp"
#include "result/example_result_move_assignment.hpp"
#include "result/example_result_move_constructor.hpp"
#include "result/example_result_not_equals.hpp"
#include "result/example_result_success.hpp"
#include "result/example_result_t_copy_constructor.hpp"
#include "result/example_result_t_in_place_constructor.hpp"
#include "result/example_result_t_move_constructor.hpp"
#include "example_reverse_iterator_overview.hpp"
#include "reverse_iterator/example_reverse_iterator_data.hpp"
#include "reverse_iterator/example_reverse_iterator_decrement.hpp"
#include "reverse_iterator/example_reverse_iterator_empty.hpp"
#include "reverse_iterator/example_reverse_iterator_equals.hpp"
#include "reverse_iterator/example_reverse_iterator_get_if.hpp"
#include "reverse_iterator/example_reverse_iterator_gt_equals.hpp"
#include "reverse_iterator/example_reverse_iterator_gt.hpp"
#include "reverse_iterator/example_reverse_iterator_increment.hpp"
#include "reverse_iterator/example_reverse_iterator_index.hpp"
#include "reverse_iterator/example_reverse_iterator_is_end.hpp"
#include "reverse_iterator/example_reverse_iterator_lt_equals.hpp"
#include "reverse_iterator/example_reverse_iterator_lt.hpp"
#include "reverse_iterator/example_reverse_iterator_not_equals.hpp"
#include "reverse_iterator/example_reverse_iterator_size.hpp"
#include "example_source_location_overview.hpp"
#include "source_location/example_source_location_current.hpp"
#include "source_location/example_source_location_default_constructor.hpp"
#include "source_location/example_source_location_file_name.hpp"
#include "source_location/example_source_location_function_name.hpp"
#include "source_location/example_source_location_here.hpp"
#include "source_location/example_source_location_line.hpp"
#include "example_span_overview.hpp"
#include "span/example_span_at_if.hpp"
#include "span/example_span_back_if.hpp"
#include "span/example_span_begin.hpp"
#include "span/example_span_data.hpp"
#include "span/example_span_default_constructor.hpp"
#include "span/example_span_empty.hpp"
#include "span/example_span_end.hpp"
#include "span/example_span_equals.hpp"
#include "span/example_span_first.hpp"
#include "span/example_span_front_if.hpp"
#include "span/example_span_iter.hpp"
#include "span/example_span_last.hpp"
#include "span/example_span_max_size.hpp"
#include "span/example_span_not_equals.hpp"
#include "span/example_span_ptr_count_constructor.hpp"
#include "span/example_span_rbegin.hpp"
#include "span/example_span_rend.hpp"
#include "span/example_span_riter.hpp"
#include "span/example_span_size_bytes.hpp"
#include "span/example_span_size.hpp"
#include "span/example_span_subspan.hpp"
#include "example_swap_overview.hpp"
#include "example_true_type_overview.hpp"
#include "example_underlying_type_overview.hpp"
#include "example_void_t_overview.hpp"

namespace
{
    /// <!-- description -->
    ///   @brief Executes an example with some possible pre/post logic
    ///
    /// <!-- inputs/outputs -->
    ///   @param func the example function to call
    ///   @param name the name of the example
    ///
    template<typename FUNC>
    void
    example(FUNC &&func, bsl::cstr_type const name) noexcept
    {
        bsl::print("======================================================================\n");
        bsl::print("example: %s \n", name);
        bsl::print("----------------------------------------------------------------------\n");
        func();
        bsl::print("\n");
    }
}

/// <!-- description -->
///   @brief Provides the example's main function
///
/// <!-- inputs/outputs -->
///   @return 0 on success, non-0 on failure
///
bsl::exit_code
main() noexcept
{
    // clang-format off

    example(&bsl::example_add_const_overview, "example_add_const_overview");
    example(&bsl::example_add_lvalue_reference_overview, "example_add_lvalue_reference_overview");
    example(&bsl::example_add_pointer_overview, "example_add_pointer_overview");
    example(&bsl::example_add_rvalue_reference_overview, "example_add_rvalue_reference_overview");
    example(&bsl::example_addressof_overview, "example_addressof_overview");
    example(&bsl::example_aligned_storage_overview, "example_aligned_storage_overview");
    // example(&bsl::example_aligned_union_overview, "example_aligned_union_overview");
    example(&bsl::example_alignment_of_overview, "example_alignment_of_overview");
    example(&bsl::example_array_overview, "example_array_overview");
    example(&bsl::example_array_at_if, "example_array_at_if");
    example(&bsl::example_array_back_if, "example_array_back_if");
    example(&bsl::example_array_back, "example_array_back");
    example(&bsl::example_array_begin, "example_array_begin");
    example(&bsl::example_array_data, "example_array_data");
    example(&bsl::example_array_empty, "example_array_empty");
    example(&bsl::example_array_end, "example_array_end");
    example(&bsl::example_array_equals, "example_array_equals");
    example(&bsl::example_array_front_if, "example_array_front_if");
    example(&bsl::example_array_front, "example_array_front");
    example(&bsl::example_array_iter, "example_array_iter");
    example(&bsl::example_array_max_size, "example_array_max_size");
    example(&bsl::example_array_not_equals, "example_array_not_equals");
    example(&bsl::example_array_rbegin, "example_array_rbegin");
    example(&bsl::example_array_rend, "example_array_rend");
    example(&bsl::example_array_riter, "example_array_riter");
    example(&bsl::example_array_size_bytes, "example_array_size_bytes");
    example(&bsl::example_array_size, "example_array_size");
    example(&bsl::example_as_const_overview, "example_as_const_overview");
    example(&bsl::example_basic_errc_type_overview, "example_basic_errc_type_overview");
    example(&bsl::example_basic_errc_type_constructor_t, "example_basic_errc_type_constructor_t");
    example(&bsl::example_basic_errc_type_equals, "example_basic_errc_type_equals");
    example(&bsl::example_basic_errc_type_failure, "example_basic_errc_type_failure");
    example(&bsl::example_basic_errc_type_get, "example_basic_errc_type_get");
    example(&bsl::example_basic_errc_type_is_checked, "example_basic_errc_type_is_checked");
    example(&bsl::example_basic_errc_type_is_unchecked, "example_basic_errc_type_is_unchecked");
    example(&bsl::example_basic_errc_type_message, "example_basic_errc_type_message");
    example(&bsl::example_basic_errc_type_not_equals, "example_basic_errc_type_not_equals");
    example(&bsl::example_basic_errc_type_success, "example_basic_errc_type_success");
    example(&bsl::example_basic_string_view_overview, "example_basic_string_view_overview");
    example(&bsl::example_basic_string_view_at_if, "example_basic_string_view_at_if");
    example(&bsl::example_basic_string_view_back_if, "example_basic_string_view_back_if");
    example(&bsl::example_basic_string_view_begin, "example_basic_string_view_begin");
    example(&bsl::example_basic_string_view_compare, "example_basic_string_view_compare");
    example(&bsl::example_basic_string_view_data, "example_basic_string_view_data");
    example(&bsl::example_basic_string_view_default_constructor, "example_basic_string_view_default_constructor");
    example(&bsl::example_basic_string_view_empty, "example_basic_string_view_empty");
    example(&bsl::example_basic_string_view_end, "example_basic_string_view_end");
    example(&bsl::example_basic_string_view_ends_with, "example_basic_string_view_ends_with");
    example(&bsl::example_basic_string_view_equals, "example_basic_string_view_equals");
    example(&bsl::example_basic_string_view_front_if, "example_basic_string_view_front_if");
    example(&bsl::example_basic_string_view_iter, "example_basic_string_view_iter");
    example(&bsl::example_basic_string_view_length, "example_basic_string_view_length");
    example(&bsl::example_basic_string_view_max_size, "example_basic_string_view_max_size");
    example(&bsl::example_basic_string_view_not_equals, "example_basic_string_view_not_equals");
    example(&bsl::example_basic_string_view_rbegin, "example_basic_string_view_rbegin");
    example(&bsl::example_basic_string_view_remove_prefix, "example_basic_string_view_remove_prefix");
    example(&bsl::example_basic_string_view_remove_suffix, "example_basic_string_view_remove_suffix");
    example(&bsl::example_basic_string_view_rend, "example_basic_string_view_rend");
    example(&bsl::example_basic_string_view_riter, "example_basic_string_view_riter");
    example(&bsl::example_basic_string_view_s_constructor, "example_basic_string_view_s_constructor");
    example(&bsl::example_basic_string_view_size_bytes, "example_basic_string_view_size_bytes");
    example(&bsl::example_basic_string_view_size, "example_basic_string_view_size");
    example(&bsl::example_basic_string_view_starts_with, "example_basic_string_view_starts_with");
    example(&bsl::example_basic_string_view_substr, "example_basic_string_view_substr");
    example(&bsl::example_bool_constant_overview, "example_bool_constant_overview");
    example(&bsl::example_byte_overview, "example_byte_overview");
    example(&bsl::example_byte_and_assign, "example_byte_and_assign");
    example(&bsl::example_byte_and, "example_byte_and");
    example(&bsl::example_byte_by_value_constructor, "example_byte_by_value_constructor");
    example(&bsl::example_byte_complement, "example_byte_complement");
    example(&bsl::example_byte_default_constructor, "example_byte_default_constructor");
    example(&bsl::example_byte_equal, "example_byte_equal");
    example(&bsl::example_byte_lshift_assign, "example_byte_lshift_assign");
    example(&bsl::example_byte_lshift, "example_byte_lshift");
    example(&bsl::example_byte_not_equal, "example_byte_not_equal");
    example(&bsl::example_byte_or_assign, "example_byte_or_assign");
    example(&bsl::example_byte_or, "example_byte_or");
    example(&bsl::example_byte_rshift_assign, "example_byte_rshift_assign");
    example(&bsl::example_byte_rshift, "example_byte_rshift");
    example(&bsl::example_byte_to_integer, "example_byte_to_integer");
    example(&bsl::example_byte_xor_assign, "example_byte_xor_assign");
    example(&bsl::example_byte_xor, "example_byte_xor");
    example(&bsl::example_char_traits_overview, "example_char_traits_overview");
    example(&bsl::example_char_traits_compare, "example_char_traits_compare");
    example(&bsl::example_char_traits_eof, "example_char_traits_eof");
    example(&bsl::example_char_traits_eq_int_type, "example_char_traits_eq_int_type");
    example(&bsl::example_char_traits_eq, "example_char_traits_eq");
    example(&bsl::example_char_traits_find, "example_char_traits_find");
    example(&bsl::example_char_traits_length, "example_char_traits_length");
    example(&bsl::example_char_traits_lt, "example_char_traits_lt");
    example(&bsl::example_char_traits_not_eof, "example_char_traits_not_eof");
    example(&bsl::example_char_traits_to_char_type, "example_char_traits_to_char_type");
    example(&bsl::example_char_traits_to_int_type, "example_char_traits_to_int_type");
    example(&bsl::example_color_overview, "example_color_overview");
    example(&bsl::example_common_type_overview, "example_common_type_overview");
    example(&bsl::example_conditional_overview, "example_conditional_overview");
    example(&bsl::example_conjunction_overview, "example_conjunction_overview");
    example(&bsl::example_contiguous_iterator_overview, "example_contiguous_iterator_overview");
    example(&bsl::example_contiguous_iterator_data, "example_contiguous_iterator_data");
    example(&bsl::example_contiguous_iterator_decrement, "example_contiguous_iterator_decrement");
    example(&bsl::example_contiguous_iterator_empty, "example_contiguous_iterator_empty");
    example(&bsl::example_contiguous_iterator_equals, "example_contiguous_iterator_equals");
    example(&bsl::example_contiguous_iterator_get_if, "example_contiguous_iterator_get_if");
    example(&bsl::example_contiguous_iterator_gt_equals, "example_contiguous_iterator_gt_equals");
    example(&bsl::example_contiguous_iterator_gt, "example_contiguous_iterator_gt");
    example(&bsl::example_contiguous_iterator_increment, "example_contiguous_iterator_increment");
    example(&bsl::example_contiguous_iterator_index, "example_contiguous_iterator_index");
    example(&bsl::example_contiguous_iterator_is_end, "example_contiguous_iterator_is_end");
    example(&bsl::example_contiguous_iterator_lt_equals, "example_contiguous_iterator_lt_equals");
    example(&bsl::example_contiguous_iterator_lt, "example_contiguous_iterator_lt");
    example(&bsl::example_contiguous_iterator_not_equals, "example_contiguous_iterator_not_equals");
    example(&bsl::example_contiguous_iterator_size, "example_contiguous_iterator_size");
    example(&bsl::example_decay_overview, "example_decay_overview");
    example(&bsl::example_declval_overview, "example_declval_overview");
    example(&bsl::example_destroy_at_overview, "example_destroy_at_overview");
    example(&bsl::example_detected_or_overview, "example_detected_or_overview");
    example(&bsl::example_detected_overview, "example_detected_overview");
    example(&bsl::example_discard_overview, "example_discard_overview");
    example(&bsl::example_disjunction_overview, "example_disjunction_overview");
    example(&bsl::example_enable_if_overview, "example_enable_if_overview");
    example(&bsl::example_exchange_overview, "example_exchange_overview");
    example(&bsl::example_extent_overview, "example_extent_overview");
    example(&bsl::example_false_type_overview, "example_false_type_overview");
    example(&bsl::example_fill_overview, "example_fill_overview");
    example(&bsl::example_for_each_overview, "example_for_each_overview");
    example(&bsl::example_forward_overview, "example_forward_overview");
    // example(&bsl::example_has_unique_object_representations_overview, "example_has_unique_object_representations_overview");
    example(&bsl::example_has_virtual_destructor_overview, "example_has_virtual_destructor_overview");
    example(&bsl::example_in_place_overview, "example_in_place_overview");
    // // example(&bsl::example_integer_sequence_overview, "example_integer_sequence_overview");
    // // example(&bsl::example_integer_sequence_max, "example_integer_sequence_max");
    // // example(&bsl::example_integer_sequence_min, "example_integer_sequence_min");
    // // example(&bsl::example_integer_sequence_size, "example_integer_sequence_size");
    example(&bsl::example_integral_constant_overview, "example_integral_constant_overview");
    example(&bsl::example_invoke_result_overview, "example_invoke_result_overview");
    example(&bsl::example_invoke_overview, "example_invoke_overview");
    example(&bsl::example_is_abstract_overview, "example_is_abstract_overview");
    // example(&bsl::example_is_aggregate_overview, "example_is_aggregate_overview");
    example(&bsl::example_is_arithmetic_overview, "example_is_arithmetic_overview");
    example(&bsl::example_is_array_overview, "example_is_array_overview");
    example(&bsl::example_is_assignable_overview, "example_is_assignable_overview");
    example(&bsl::example_is_base_of_overview, "example_is_base_of_overview");
    example(&bsl::example_is_bool_overview, "example_is_bool_overview");
    example(&bsl::example_is_bounded_array_overview, "example_is_bounded_array_overview");
    example(&bsl::example_is_class_overview, "example_is_class_overview");
    example(&bsl::example_is_compound_overview, "example_is_compound_overview");
    example(&bsl::example_is_const_overview, "example_is_const_overview");
    // example(&bsl::example_is_constant_evaluated_overview, "example_is_constant_evaluated_overview");
    example(&bsl::example_is_constructible_overview, "example_is_constructible_overview");
    example(&bsl::example_is_convertible_overview, "example_is_convertible_overview");
    example(&bsl::example_is_copy_assignable_overview, "example_is_copy_assignable_overview");
    example(&bsl::example_is_copy_constructible_overview, "example_is_copy_constructible_overview");
    example(&bsl::example_is_copyable_overview, "example_is_copyable_overview");
    example(&bsl::example_is_default_constructible_overview, "example_is_default_constructible_overview");
    example(&bsl::example_is_destructible_overview, "example_is_destructible_overview");
    example(&bsl::example_is_detected_overview, "example_is_detected_overview");
    example(&bsl::example_is_empty_overview, "example_is_empty_overview");
    example(&bsl::example_is_enum_overview, "example_is_enum_overview");
    example(&bsl::example_is_final_overview, "example_is_final_overview");
    example(&bsl::example_is_function_overview, "example_is_function_overview");
    example(&bsl::example_is_fundamental_overview, "example_is_fundamental_overview");
    example(&bsl::example_is_integral_overview, "example_is_integral_overview");
    example(&bsl::example_is_invocable_overview, "example_is_invocable_overview");
    example(&bsl::example_is_invocable_r_overview, "example_is_invocable_r_overview");
    example(&bsl::example_is_lvalue_reference_overview, "example_is_lvalue_reference_overview");
    example(&bsl::example_is_member_function_pointer_overview, "example_is_member_function_pointer_overview");
    example(&bsl::example_is_member_object_pointer_overview, "example_is_member_object_pointer_overview");
    example(&bsl::example_is_member_pointer_overview, "example_is_member_pointer_overview");
    example(&bsl::example_is_move_assignable_overview, "example_is_move_assignable_overview");
    example(&bsl::example_is_move_constructible_overview, "example_is_move_constructible_overview");
    example(&bsl::example_is_movable_overview, "example_is_movable_overview");
    example(&bsl::example_is_nothrow_assignable_overview, "example_is_nothrow_assignable_overview");
    example(&bsl::example_is_nothrow_constructible_overview, "example_is_nothrow_constructible_overview");
    example(&bsl::example_is_nothrow_convertible_overview, "example_is_nothrow_convertible_overview");
    example(&bsl::example_is_nothrow_copy_assignable_overview, "example_is_nothrow_copy_assignable_overview");
    example(&bsl::example_is_nothrow_copy_constructible_overview, "example_is_nothrow_copy_constructible_overview");
    example(&bsl::example_is_nothrow_copyable_overview, "example_is_nothrow_copyable_overview");
    example(&bsl::example_is_nothrow_default_constructible_overview, "example_is_nothrow_default_constructible_overview");
    example(&bsl::example_is_nothrow_destructible_overview, "example_is_nothrow_destructible_overview");
    example(&bsl::example_is_nothrow_invocable_overview, "example_is_nothrow_invocable_overview");
    example(&bsl::example_is_nothrow_invocable_r_overview, "example_is_nothrow_invocable_r_overview");
    example(&bsl::example_is_nothrow_move_assignable_overview, "example_is_nothrow_move_assignable_overview");
    example(&bsl::example_is_nothrow_move_constructible_overview, "example_is_nothrow_move_constructible_overview");
    example(&bsl::example_is_nothrow_movable_overview, "example_is_nothrow_movable_overview");
    example(&bsl::example_is_nothrow_swappable_overview, "example_is_nothrow_swappable_overview");
    example(&bsl::example_is_nothrow_swappable_with_overview, "example_is_nothrow_swappable_with_overview");
    example(&bsl::example_is_null_pointer_overview, "example_is_null_pointer_overview");
    example(&bsl::example_is_object_overview, "example_is_object_overview");
    example(&bsl::example_is_pod_overview, "example_is_pod_overview");
    example(&bsl::example_is_pointer_overview, "example_is_pointer_overview");
    example(&bsl::example_is_polymorphic_overview, "example_is_polymorphic_overview");
    example(&bsl::example_is_reference_overview, "example_is_reference_overview");
    example(&bsl::example_is_reference_wrapper_overview, "example_is_reference_wrapper_overview");
    example(&bsl::example_is_rvalue_reference_overview, "example_is_rvalue_reference_overview");
    example(&bsl::example_is_same_overview, "example_is_same_overview");
    example(&bsl::example_is_scalar_overview, "example_is_scalar_overview");
    example(&bsl::example_is_signed_overview, "example_is_signed_overview");
    example(&bsl::example_is_standard_layout_overview, "example_is_standard_layout_overview");
    example(&bsl::example_is_swappable_overview, "example_is_swappable_overview");
    example(&bsl::example_is_swappable_with_overview, "example_is_swappable_with_overview");
    example(&bsl::example_is_trivial_overview, "example_is_trivial_overview");
    example(&bsl::example_is_trivially_assignable_overview, "example_is_trivially_assignable_overview");
    example(&bsl::example_is_trivially_constructible_overview, "example_is_trivially_constructible_overview");
    example(&bsl::example_is_trivially_copy_assignable_overview, "example_is_trivially_copy_assignable_overview");
    example(&bsl::example_is_trivially_copy_constructible_overview, "example_is_trivially_copy_constructible_overview");
    example(&bsl::example_is_trivially_copyable_overview, "example_is_trivially_copyable_overview");
    example(&bsl::example_is_trivially_default_constructible_overview, "example_is_trivially_default_constructible_overview");
    example(&bsl::example_is_trivially_destructible_overview, "example_is_trivially_destructible_overview");
    example(&bsl::example_is_trivially_move_assignable_overview, "example_is_trivially_move_assignable_overview");
    example(&bsl::example_is_trivially_move_constructible_overview, "example_is_trivially_move_constructible_overview");
    example(&bsl::example_is_trivially_movable_overview, "example_is_trivially_movable_overview");
    example(&bsl::example_is_unbounded_array_overview, "example_is_unbounded_array_overview");
    example(&bsl::example_is_unsigned_overview, "example_is_unsigned_overview");
    example(&bsl::example_is_void_overview, "example_is_void_overview");
    example(&bsl::example_make_signed_overview, "example_make_signed_overview");
    example(&bsl::example_make_unsigned_overview, "example_make_unsigned_overview");
    example(&bsl::example_max_align_t_overview, "example_max_align_t_overview");
    example(&bsl::example_max_of_overview, "example_max_of_overview");
    example(&bsl::example_min_of_overview, "example_min_of_overview");
    example(&bsl::example_move_if_noexcept_overview, "example_move_if_noexcept_overview");
    example(&bsl::example_move_overview, "example_move_overview");
    example(&bsl::example_negation_overview, "example_negation_overview");
    example(&bsl::example_numeric_limits_overview, "example_numeric_limits_overview");
    example(&bsl::example_rank_overview, "example_rank_overview");
    example(&bsl::example_reference_wrapper_overview, "example_reference_wrapper_overview");
    example(&bsl::example_reference_wrapper_constructor, "example_reference_wrapper_constructor");
    example(&bsl::example_reference_wrapper_functor, "example_reference_wrapper_functor");
    example(&bsl::example_reference_wrapper_get, "example_reference_wrapper_get");
    example(&bsl::example_remove_all_extents_overview, "example_remove_all_extents_overview");
    example(&bsl::example_remove_const_overview, "example_remove_const_overview");
    example(&bsl::example_remove_cv_overview, "example_remove_cv_overview");
    example(&bsl::example_remove_cvext_overview, "example_remove_cvext_overview");
    example(&bsl::example_remove_cvref_overview, "example_remove_cvref_overview");
    example(&bsl::example_remove_extent_overview, "example_remove_extent_overview");
    example(&bsl::example_remove_pointer_overview, "example_remove_pointer_overview");
    example(&bsl::example_remove_reference_overview, "example_remove_reference_overview");
    example(&bsl::example_result_overview, "example_result_overview");
    example(&bsl::example_result_copy_assignment, "example_result_copy_assignment");
    example(&bsl::example_result_copy_constructor, "example_result_copy_constructor");
    example(&bsl::example_result_equals, "example_result_equals");
    example(&bsl::example_result_errc_copy_constructor, "example_result_errc_copy_constructor");
    example(&bsl::example_result_errc_move_constructor, "example_result_errc_move_constructor");
    example(&bsl::example_result_errc, "example_result_errc");
    example(&bsl::example_result_failure, "example_result_failure");
    example(&bsl::example_result_get_if, "example_result_get_if");
    example(&bsl::example_result_move_assignment, "example_result_move_assignment");
    example(&bsl::example_result_move_constructor, "example_result_move_constructor");
    example(&bsl::example_result_not_equals, "example_result_not_equals");
    example(&bsl::example_result_success, "example_result_success");
    example(&bsl::example_result_t_copy_constructor, "example_result_t_copy_constructor");
    example(&bsl::example_result_t_in_place_constructor, "example_result_t_in_place_constructor");
    example(&bsl::example_result_t_move_constructor, "example_result_t_move_constructor");
    example(&bsl::example_reverse_iterator_overview, "example_reverse_iterator_overview");
    example(&bsl::example_reverse_iterator_data, "example_reverse_iterator_data");
    example(&bsl::example_reverse_iterator_decrement, "example_reverse_iterator_decrement");
    example(&bsl::example_reverse_iterator_empty, "example_reverse_iterator_empty");
    example(&bsl::example_reverse_iterator_equals, "example_reverse_iterator_equals");
    example(&bsl::example_reverse_iterator_get_if, "example_reverse_iterator_get_if");
    example(&bsl::example_reverse_iterator_gt_equals, "example_reverse_iterator_gt_equals");
    example(&bsl::example_reverse_iterator_gt, "example_reverse_iterator_gt");
    example(&bsl::example_reverse_iterator_increment, "example_reverse_iterator_increment");
    example(&bsl::example_reverse_iterator_index, "example_reverse_iterator_index");
    example(&bsl::example_reverse_iterator_is_end, "example_reverse_iterator_is_end");
    example(&bsl::example_reverse_iterator_lt_equals, "example_reverse_iterator_lt_equals");
    example(&bsl::example_reverse_iterator_lt, "example_reverse_iterator_lt");
    example(&bsl::example_reverse_iterator_not_equals, "example_reverse_iterator_not_equals");
    example(&bsl::example_reverse_iterator_size, "example_reverse_iterator_size");
    example(&bsl::example_source_location_overview, "example_source_location_overview");
    example(&bsl::example_source_location_current, "example_source_location_current");
    example(&bsl::example_source_location_default_constructor, "example_source_location_default_constructor");
    example(&bsl::example_source_location_file_name, "example_source_location_file_name");
    example(&bsl::example_source_location_function_name, "example_source_location_function_name");
    example(&bsl::example_source_location_here, "example_source_location_here");
    example(&bsl::example_source_location_line, "example_source_location_line");
    example(&bsl::example_span_overview, "example_span_overview");
    example(&bsl::example_span_at_if, "example_span_at_if");
    example(&bsl::example_span_back_if, "example_span_back_if");
    example(&bsl::example_span_begin, "example_span_begin");
    example(&bsl::example_span_data, "example_span_data");
    example(&bsl::example_span_default_constructor, "example_span_default_constructor");
    example(&bsl::example_span_empty, "example_span_empty");
    example(&bsl::example_span_end, "example_span_end");
    example(&bsl::example_span_equals, "example_span_equals");
    example(&bsl::example_span_first, "example_span_first");
    example(&bsl::example_span_front_if, "example_span_front_if");
    example(&bsl::example_span_iter, "example_span_iter");
    example(&bsl::example_span_last, "example_span_last");
    example(&bsl::example_span_max_size, "example_span_max_size");
    example(&bsl::example_span_not_equals, "example_span_not_equals");
    example(&bsl::example_span_ptr_count_constructor, "example_span_ptr_count_constructor");
    example(&bsl::example_span_rbegin, "example_span_rbegin");
    example(&bsl::example_span_rend, "example_span_rend");
    example(&bsl::example_span_riter, "example_span_riter");
    example(&bsl::example_span_size_bytes, "example_span_size_bytes");
    example(&bsl::example_span_size, "example_span_size");
    example(&bsl::example_span_subspan, "example_span_subspan");
    example(&bsl::example_swap_overview, "example_swap_overview");
    example(&bsl::example_true_type_overview, "example_true_type_overview");
    example(&bsl::example_underlying_type_overview, "example_underlying_type_overview");
    example(&bsl::example_void_t_overview, "example_void_t_overview");

    // clang-format on

    return bsl::exit_success;
}
