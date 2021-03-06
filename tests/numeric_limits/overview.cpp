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

#include <limits>

#include <bsl/numeric_limits.hpp>
#include <bsl/ut.hpp>

// clang-format off

/// <!-- description -->
///   @brief Main function for this unit test. If a call to bsl::ut_check() fails
///     the application will fast fail. If all calls to bsl::ut_check() pass, this
///     function will successfully return with bsl::exit_success.
///
/// <!-- inputs/outputs -->
///   @return Always returns bsl::exit_success.
///
[[nodiscard]] auto
main() noexcept -> bsl::exit_code
{
    static_assert(bsl::numeric_limits<void *>::is_specialized == std::numeric_limits<void *>::is_specialized);
    static_assert(bsl::numeric_limits<bool>::is_specialized == std::numeric_limits<bool>::is_specialized);
    static_assert(bsl::numeric_limits<bsl::char_type>::is_specialized == std::numeric_limits<bsl::char_type>::is_specialized);
    static_assert(bsl::numeric_limits<bsl::int8>::is_specialized == std::numeric_limits<bsl::int8>::is_specialized);
    static_assert(bsl::numeric_limits<bsl::uint8>::is_specialized == std::numeric_limits<bsl::uint8>::is_specialized);
    static_assert(bsl::numeric_limits<bsl::int16>::is_specialized == std::numeric_limits<bsl::int16>::is_specialized);
    static_assert(bsl::numeric_limits<bsl::uint16>::is_specialized == std::numeric_limits<bsl::uint16>::is_specialized);
    static_assert(bsl::numeric_limits<bsl::int32>::is_specialized == std::numeric_limits<bsl::int32>::is_specialized);
    static_assert(bsl::numeric_limits<bsl::uint32>::is_specialized == std::numeric_limits<bsl::uint32>::is_specialized);
    static_assert(bsl::numeric_limits<bsl::int64>::is_specialized == std::numeric_limits<bsl::int64>::is_specialized);
    static_assert(bsl::numeric_limits<bsl::uint64>::is_specialized == std::numeric_limits<bsl::uint64>::is_specialized);

    static_assert(bsl::numeric_limits<void *>::is_exact == std::numeric_limits<void *>::is_exact);
    static_assert(bsl::numeric_limits<bool>::is_exact == std::numeric_limits<bool>::is_exact);
    static_assert(bsl::numeric_limits<bsl::char_type>::is_exact == std::numeric_limits<bsl::char_type>::is_exact);
    static_assert(bsl::numeric_limits<bsl::int8>::is_exact == std::numeric_limits<bsl::int8>::is_exact);
    static_assert(bsl::numeric_limits<bsl::uint8>::is_exact == std::numeric_limits<bsl::uint8>::is_exact);
    static_assert(bsl::numeric_limits<bsl::int16>::is_exact == std::numeric_limits<bsl::int16>::is_exact);
    static_assert(bsl::numeric_limits<bsl::uint16>::is_exact == std::numeric_limits<bsl::uint16>::is_exact);
    static_assert(bsl::numeric_limits<bsl::int32>::is_exact == std::numeric_limits<bsl::int32>::is_exact);
    static_assert(bsl::numeric_limits<bsl::uint32>::is_exact == std::numeric_limits<bsl::uint32>::is_exact);
    static_assert(bsl::numeric_limits<bsl::int64>::is_exact == std::numeric_limits<bsl::int64>::is_exact);
    static_assert(bsl::numeric_limits<bsl::uint64>::is_exact == std::numeric_limits<bsl::uint64>::is_exact);

    static_assert(bsl::numeric_limits<void *>::has_infinity == std::numeric_limits<void *>::has_infinity);
    static_assert(bsl::numeric_limits<bool>::has_infinity == std::numeric_limits<bool>::has_infinity);
    static_assert(bsl::numeric_limits<bsl::char_type>::has_infinity == std::numeric_limits<bsl::char_type>::has_infinity);
    static_assert(bsl::numeric_limits<bsl::int8>::has_infinity == std::numeric_limits<bsl::int8>::has_infinity);
    static_assert(bsl::numeric_limits<bsl::uint8>::has_infinity == std::numeric_limits<bsl::uint8>::has_infinity);
    static_assert(bsl::numeric_limits<bsl::int16>::has_infinity == std::numeric_limits<bsl::int16>::has_infinity);
    static_assert(bsl::numeric_limits<bsl::uint16>::has_infinity == std::numeric_limits<bsl::uint16>::has_infinity);
    static_assert(bsl::numeric_limits<bsl::int32>::has_infinity == std::numeric_limits<bsl::int32>::has_infinity);
    static_assert(bsl::numeric_limits<bsl::uint32>::has_infinity == std::numeric_limits<bsl::uint32>::has_infinity);
    static_assert(bsl::numeric_limits<bsl::int64>::has_infinity == std::numeric_limits<bsl::int64>::has_infinity);
    static_assert(bsl::numeric_limits<bsl::uint64>::has_infinity == std::numeric_limits<bsl::uint64>::has_infinity);

    static_assert(bsl::numeric_limits<void *>::has_quiet_NaN == std::numeric_limits<void *>::has_quiet_NaN);
    static_assert(bsl::numeric_limits<bool>::has_quiet_NaN == std::numeric_limits<bool>::has_quiet_NaN);
    static_assert(bsl::numeric_limits<bsl::char_type>::has_quiet_NaN == std::numeric_limits<bsl::char_type>::has_quiet_NaN);
    static_assert(bsl::numeric_limits<bsl::int8>::has_quiet_NaN == std::numeric_limits<bsl::int8>::has_quiet_NaN);
    static_assert(bsl::numeric_limits<bsl::uint8>::has_quiet_NaN == std::numeric_limits<bsl::uint8>::has_quiet_NaN);
    static_assert(bsl::numeric_limits<bsl::int16>::has_quiet_NaN == std::numeric_limits<bsl::int16>::has_quiet_NaN);
    static_assert(bsl::numeric_limits<bsl::uint16>::has_quiet_NaN == std::numeric_limits<bsl::uint16>::has_quiet_NaN);
    static_assert(bsl::numeric_limits<bsl::int32>::has_quiet_NaN == std::numeric_limits<bsl::int32>::has_quiet_NaN);
    static_assert(bsl::numeric_limits<bsl::uint32>::has_quiet_NaN == std::numeric_limits<bsl::uint32>::has_quiet_NaN);
    static_assert(bsl::numeric_limits<bsl::int64>::has_quiet_NaN == std::numeric_limits<bsl::int64>::has_quiet_NaN);
    static_assert(bsl::numeric_limits<bsl::uint64>::has_quiet_NaN == std::numeric_limits<bsl::uint64>::has_quiet_NaN);

    static_assert(bsl::numeric_limits<void *>::has_signaling_NaN == std::numeric_limits<void *>::has_signaling_NaN);
    static_assert(bsl::numeric_limits<bool>::has_signaling_NaN == std::numeric_limits<bool>::has_signaling_NaN);
    static_assert(bsl::numeric_limits<bsl::char_type>::has_signaling_NaN == std::numeric_limits<bsl::char_type>::has_signaling_NaN);
    static_assert(bsl::numeric_limits<bsl::int8>::has_signaling_NaN == std::numeric_limits<bsl::int8>::has_signaling_NaN);
    static_assert(bsl::numeric_limits<bsl::uint8>::has_signaling_NaN == std::numeric_limits<bsl::uint8>::has_signaling_NaN);
    static_assert(bsl::numeric_limits<bsl::int16>::has_signaling_NaN == std::numeric_limits<bsl::int16>::has_signaling_NaN);
    static_assert(bsl::numeric_limits<bsl::uint16>::has_signaling_NaN == std::numeric_limits<bsl::uint16>::has_signaling_NaN);
    static_assert(bsl::numeric_limits<bsl::int32>::has_signaling_NaN == std::numeric_limits<bsl::int32>::has_signaling_NaN);
    static_assert(bsl::numeric_limits<bsl::uint32>::has_signaling_NaN == std::numeric_limits<bsl::uint32>::has_signaling_NaN);
    static_assert(bsl::numeric_limits<bsl::int64>::has_signaling_NaN == std::numeric_limits<bsl::int64>::has_signaling_NaN);
    static_assert(bsl::numeric_limits<bsl::uint64>::has_signaling_NaN == std::numeric_limits<bsl::uint64>::has_signaling_NaN);

    static_assert(static_cast<bsl::int32>(bsl::numeric_limits<void *>::has_denorm) == static_cast<bsl::int32>(std::numeric_limits<void *>::has_denorm));
    static_assert(static_cast<bsl::int32>(bsl::numeric_limits<bool>::has_denorm) == static_cast<bsl::int32>(std::numeric_limits<bool>::has_denorm));
    static_assert(static_cast<bsl::int32>(bsl::numeric_limits<bsl::char_type>::has_denorm) == static_cast<bsl::int32>(std::numeric_limits<bsl::char_type>::has_denorm));
    static_assert(static_cast<bsl::int32>(bsl::numeric_limits<bsl::int8>::has_denorm) == static_cast<bsl::int32>(std::numeric_limits<bsl::int8>::has_denorm));
    static_assert(static_cast<bsl::int32>(bsl::numeric_limits<bsl::uint8>::has_denorm) == static_cast<bsl::int32>(std::numeric_limits<bsl::uint8>::has_denorm));
    static_assert(static_cast<bsl::int32>(bsl::numeric_limits<bsl::int16>::has_denorm) == static_cast<bsl::int32>(std::numeric_limits<bsl::int16>::has_denorm));
    static_assert(static_cast<bsl::int32>(bsl::numeric_limits<bsl::uint16>::has_denorm) == static_cast<bsl::int32>(std::numeric_limits<bsl::uint16>::has_denorm));
    static_assert(static_cast<bsl::int32>(bsl::numeric_limits<bsl::int32>::has_denorm) == static_cast<bsl::int32>(std::numeric_limits<bsl::int32>::has_denorm));
    static_assert(static_cast<bsl::int32>(bsl::numeric_limits<bsl::uint32>::has_denorm) == static_cast<bsl::int32>(std::numeric_limits<bsl::uint32>::has_denorm));
    static_assert(static_cast<bsl::int32>(bsl::numeric_limits<bsl::int64>::has_denorm) == static_cast<bsl::int32>(std::numeric_limits<bsl::int64>::has_denorm));
    static_assert(static_cast<bsl::int32>(bsl::numeric_limits<bsl::uint64>::has_denorm) == static_cast<bsl::int32>(std::numeric_limits<bsl::uint64>::has_denorm));

    static_assert(bsl::numeric_limits<void *>::has_denorm_loss == std::numeric_limits<void *>::has_denorm_loss);
    static_assert(bsl::numeric_limits<bool>::has_denorm_loss == std::numeric_limits<bool>::has_denorm_loss);
    static_assert(bsl::numeric_limits<bsl::char_type>::has_denorm_loss == std::numeric_limits<bsl::char_type>::has_denorm_loss);
    static_assert(bsl::numeric_limits<bsl::int8>::has_denorm_loss == std::numeric_limits<bsl::int8>::has_denorm_loss);
    static_assert(bsl::numeric_limits<bsl::uint8>::has_denorm_loss == std::numeric_limits<bsl::uint8>::has_denorm_loss);
    static_assert(bsl::numeric_limits<bsl::int16>::has_denorm_loss == std::numeric_limits<bsl::int16>::has_denorm_loss);
    static_assert(bsl::numeric_limits<bsl::uint16>::has_denorm_loss == std::numeric_limits<bsl::uint16>::has_denorm_loss);
    static_assert(bsl::numeric_limits<bsl::int32>::has_denorm_loss == std::numeric_limits<bsl::int32>::has_denorm_loss);
    static_assert(bsl::numeric_limits<bsl::uint32>::has_denorm_loss == std::numeric_limits<bsl::uint32>::has_denorm_loss);
    static_assert(bsl::numeric_limits<bsl::int64>::has_denorm_loss == std::numeric_limits<bsl::int64>::has_denorm_loss);
    static_assert(bsl::numeric_limits<bsl::uint64>::has_denorm_loss == std::numeric_limits<bsl::uint64>::has_denorm_loss);

    static_assert(static_cast<bsl::int32>(bsl::numeric_limits<void *>::round_style) == static_cast<bsl::int32>(std::numeric_limits<void *>::round_style));
    static_assert(static_cast<bsl::int32>(bsl::numeric_limits<bool>::round_style) == static_cast<bsl::int32>(std::numeric_limits<bool>::round_style));
    static_assert(static_cast<bsl::int32>(bsl::numeric_limits<bsl::char_type>::round_style) == static_cast<bsl::int32>(std::numeric_limits<bsl::char_type>::round_style));
    static_assert(static_cast<bsl::int32>(bsl::numeric_limits<bsl::int8>::round_style) == static_cast<bsl::int32>(std::numeric_limits<bsl::int8>::round_style));
    static_assert(static_cast<bsl::int32>(bsl::numeric_limits<bsl::uint8>::round_style) == static_cast<bsl::int32>(std::numeric_limits<bsl::uint8>::round_style));
    static_assert(static_cast<bsl::int32>(bsl::numeric_limits<bsl::int16>::round_style) == static_cast<bsl::int32>(std::numeric_limits<bsl::int16>::round_style));
    static_assert(static_cast<bsl::int32>(bsl::numeric_limits<bsl::uint16>::round_style) == static_cast<bsl::int32>(std::numeric_limits<bsl::uint16>::round_style));
    static_assert(static_cast<bsl::int32>(bsl::numeric_limits<bsl::int32>::round_style) == static_cast<bsl::int32>(std::numeric_limits<bsl::int32>::round_style));
    static_assert(static_cast<bsl::int32>(bsl::numeric_limits<bsl::uint32>::round_style) == static_cast<bsl::int32>(std::numeric_limits<bsl::uint32>::round_style));
    static_assert(static_cast<bsl::int32>(bsl::numeric_limits<bsl::int64>::round_style) == static_cast<bsl::int32>(std::numeric_limits<bsl::int64>::round_style));
    static_assert(static_cast<bsl::int32>(bsl::numeric_limits<bsl::uint64>::round_style) == static_cast<bsl::int32>(std::numeric_limits<bsl::uint64>::round_style));

    static_assert(bsl::numeric_limits<void *>::is_iec559 == std::numeric_limits<void *>::is_iec559);
    static_assert(bsl::numeric_limits<bool>::is_iec559 == std::numeric_limits<bool>::is_iec559);
    static_assert(bsl::numeric_limits<bsl::char_type>::is_iec559 == std::numeric_limits<bsl::char_type>::is_iec559);
    static_assert(bsl::numeric_limits<bsl::int8>::is_iec559 == std::numeric_limits<bsl::int8>::is_iec559);
    static_assert(bsl::numeric_limits<bsl::uint8>::is_iec559 == std::numeric_limits<bsl::uint8>::is_iec559);
    static_assert(bsl::numeric_limits<bsl::int16>::is_iec559 == std::numeric_limits<bsl::int16>::is_iec559);
    static_assert(bsl::numeric_limits<bsl::uint16>::is_iec559 == std::numeric_limits<bsl::uint16>::is_iec559);
    static_assert(bsl::numeric_limits<bsl::int32>::is_iec559 == std::numeric_limits<bsl::int32>::is_iec559);
    static_assert(bsl::numeric_limits<bsl::uint32>::is_iec559 == std::numeric_limits<bsl::uint32>::is_iec559);
    static_assert(bsl::numeric_limits<bsl::int64>::is_iec559 == std::numeric_limits<bsl::int64>::is_iec559);
    static_assert(bsl::numeric_limits<bsl::uint64>::is_iec559 == std::numeric_limits<bsl::uint64>::is_iec559);

    static_assert(bsl::numeric_limits<void *>::is_bounded == std::numeric_limits<void *>::is_bounded);
    static_assert(bsl::numeric_limits<bool>::is_bounded == std::numeric_limits<bool>::is_bounded);
    static_assert(bsl::numeric_limits<bsl::char_type>::is_bounded == std::numeric_limits<bsl::char_type>::is_bounded);
    static_assert(bsl::numeric_limits<bsl::int8>::is_bounded == std::numeric_limits<bsl::int8>::is_bounded);
    static_assert(bsl::numeric_limits<bsl::uint8>::is_bounded == std::numeric_limits<bsl::uint8>::is_bounded);
    static_assert(bsl::numeric_limits<bsl::int16>::is_bounded == std::numeric_limits<bsl::int16>::is_bounded);
    static_assert(bsl::numeric_limits<bsl::uint16>::is_bounded == std::numeric_limits<bsl::uint16>::is_bounded);
    static_assert(bsl::numeric_limits<bsl::int32>::is_bounded == std::numeric_limits<bsl::int32>::is_bounded);
    static_assert(bsl::numeric_limits<bsl::uint32>::is_bounded == std::numeric_limits<bsl::uint32>::is_bounded);
    static_assert(bsl::numeric_limits<bsl::int64>::is_bounded == std::numeric_limits<bsl::int64>::is_bounded);
    static_assert(bsl::numeric_limits<bsl::uint64>::is_bounded == std::numeric_limits<bsl::uint64>::is_bounded);

    static_assert(bsl::numeric_limits<void *>::is_modulo == std::numeric_limits<void *>::is_modulo);
    static_assert(bsl::numeric_limits<bool>::is_modulo == std::numeric_limits<bool>::is_modulo);
    static_assert(bsl::numeric_limits<bsl::char_type>::is_modulo == std::numeric_limits<bsl::char_type>::is_modulo);
    static_assert(bsl::numeric_limits<bsl::int8>::is_modulo == std::numeric_limits<bsl::int8>::is_modulo);
    static_assert(bsl::numeric_limits<bsl::uint8>::is_modulo == std::numeric_limits<bsl::uint8>::is_modulo);
    static_assert(bsl::numeric_limits<bsl::int16>::is_modulo == std::numeric_limits<bsl::int16>::is_modulo);
    static_assert(bsl::numeric_limits<bsl::uint16>::is_modulo == std::numeric_limits<bsl::uint16>::is_modulo);
    static_assert(bsl::numeric_limits<bsl::int32>::is_modulo == std::numeric_limits<bsl::int32>::is_modulo);
    static_assert(bsl::numeric_limits<bsl::uint32>::is_modulo == std::numeric_limits<bsl::uint32>::is_modulo);
    static_assert(bsl::numeric_limits<bsl::int64>::is_modulo == std::numeric_limits<bsl::int64>::is_modulo);
    static_assert(bsl::numeric_limits<bsl::uint64>::is_modulo == std::numeric_limits<bsl::uint64>::is_modulo);

    static_assert(bsl::numeric_limits<void *>::digits == std::numeric_limits<void *>::digits);
    static_assert(bsl::numeric_limits<bool>::digits == std::numeric_limits<bool>::digits);
    static_assert(bsl::numeric_limits<bsl::char_type>::digits == std::numeric_limits<bsl::char_type>::digits);
    static_assert(bsl::numeric_limits<bsl::int8>::digits == std::numeric_limits<bsl::int8>::digits);
    static_assert(bsl::numeric_limits<bsl::uint8>::digits == std::numeric_limits<bsl::uint8>::digits);
    static_assert(bsl::numeric_limits<bsl::int16>::digits == std::numeric_limits<bsl::int16>::digits);
    static_assert(bsl::numeric_limits<bsl::uint16>::digits == std::numeric_limits<bsl::uint16>::digits);
    static_assert(bsl::numeric_limits<bsl::int32>::digits == std::numeric_limits<bsl::int32>::digits);
    static_assert(bsl::numeric_limits<bsl::uint32>::digits == std::numeric_limits<bsl::uint32>::digits);
    static_assert(bsl::numeric_limits<bsl::int64>::digits == std::numeric_limits<bsl::int64>::digits);
    static_assert(bsl::numeric_limits<bsl::uint64>::digits == std::numeric_limits<bsl::uint64>::digits);

    static_assert(bsl::numeric_limits<void *>::digits10 == std::numeric_limits<void *>::digits10);
    static_assert(bsl::numeric_limits<bool>::digits10 == std::numeric_limits<bool>::digits10);
    // static_assert(bsl::numeric_limits<bsl::char_type>::digits10 == std::numeric_limits<bsl::char_type>::digits10);
    // static_assert(bsl::numeric_limits<bsl::int8>::digits10 == std::numeric_limits<bsl::int8>::digits10);
    // static_assert(bsl::numeric_limits<bsl::uint8>::digits10 == std::numeric_limits<bsl::uint8>::digits10);
    // static_assert(bsl::numeric_limits<bsl::int16>::digits10 == std::numeric_limits<bsl::int16>::digits10);
    // static_assert(bsl::numeric_limits<bsl::uint16>::digits10 == std::numeric_limits<bsl::uint16>::digits10);
    // static_assert(bsl::numeric_limits<bsl::int32>::digits10 == std::numeric_limits<bsl::int32>::digits10);
    // static_assert(bsl::numeric_limits<bsl::uint32>::digits10 == std::numeric_limits<bsl::uint32>::digits10);
    // static_assert(bsl::numeric_limits<bsl::int64>::digits10 == std::numeric_limits<bsl::int64>::digits10);
    // static_assert(bsl::numeric_limits<bsl::uint64>::digits10 == std::numeric_limits<bsl::uint64>::digits10);

    static_assert(bsl::numeric_limits<void *>::max_digits10 == std::numeric_limits<void *>::max_digits10);
    static_assert(bsl::numeric_limits<bool>::max_digits10 == std::numeric_limits<bool>::max_digits10);
    static_assert(bsl::numeric_limits<bsl::char_type>::max_digits10 == std::numeric_limits<bsl::char_type>::max_digits10);
    static_assert(bsl::numeric_limits<bsl::int8>::max_digits10 == std::numeric_limits<bsl::int8>::max_digits10);
    static_assert(bsl::numeric_limits<bsl::uint8>::max_digits10 == std::numeric_limits<bsl::uint8>::max_digits10);
    static_assert(bsl::numeric_limits<bsl::int16>::max_digits10 == std::numeric_limits<bsl::int16>::max_digits10);
    static_assert(bsl::numeric_limits<bsl::uint16>::max_digits10 == std::numeric_limits<bsl::uint16>::max_digits10);
    static_assert(bsl::numeric_limits<bsl::int32>::max_digits10 == std::numeric_limits<bsl::int32>::max_digits10);
    static_assert(bsl::numeric_limits<bsl::uint32>::max_digits10 == std::numeric_limits<bsl::uint32>::max_digits10);
    static_assert(bsl::numeric_limits<bsl::int64>::max_digits10 == std::numeric_limits<bsl::int64>::max_digits10);
    static_assert(bsl::numeric_limits<bsl::uint64>::max_digits10 == std::numeric_limits<bsl::uint64>::max_digits10);

    static_assert(bsl::numeric_limits<void *>::radix == std::numeric_limits<void *>::radix);
    static_assert(bsl::numeric_limits<bool>::radix == std::numeric_limits<bool>::radix);
    static_assert(bsl::numeric_limits<bsl::char_type>::radix == std::numeric_limits<bsl::char_type>::radix);
    static_assert(bsl::numeric_limits<bsl::int8>::radix == std::numeric_limits<bsl::int8>::radix);
    static_assert(bsl::numeric_limits<bsl::uint8>::radix == std::numeric_limits<bsl::uint8>::radix);
    static_assert(bsl::numeric_limits<bsl::int16>::radix == std::numeric_limits<bsl::int16>::radix);
    static_assert(bsl::numeric_limits<bsl::uint16>::radix == std::numeric_limits<bsl::uint16>::radix);
    static_assert(bsl::numeric_limits<bsl::int32>::radix == std::numeric_limits<bsl::int32>::radix);
    static_assert(bsl::numeric_limits<bsl::uint32>::radix == std::numeric_limits<bsl::uint32>::radix);
    static_assert(bsl::numeric_limits<bsl::int64>::radix == std::numeric_limits<bsl::int64>::radix);
    static_assert(bsl::numeric_limits<bsl::uint64>::radix == std::numeric_limits<bsl::uint64>::radix);

    static_assert(bsl::numeric_limits<void *>::min_exponent == std::numeric_limits<void *>::min_exponent);
    static_assert(bsl::numeric_limits<bool>::min_exponent == std::numeric_limits<bool>::min_exponent);
    static_assert(bsl::numeric_limits<bsl::char_type>::min_exponent == std::numeric_limits<bsl::char_type>::min_exponent);
    static_assert(bsl::numeric_limits<bsl::int8>::min_exponent == std::numeric_limits<bsl::int8>::min_exponent);
    static_assert(bsl::numeric_limits<bsl::uint8>::min_exponent == std::numeric_limits<bsl::uint8>::min_exponent);
    static_assert(bsl::numeric_limits<bsl::int16>::min_exponent == std::numeric_limits<bsl::int16>::min_exponent);
    static_assert(bsl::numeric_limits<bsl::uint16>::min_exponent == std::numeric_limits<bsl::uint16>::min_exponent);
    static_assert(bsl::numeric_limits<bsl::int32>::min_exponent == std::numeric_limits<bsl::int32>::min_exponent);
    static_assert(bsl::numeric_limits<bsl::uint32>::min_exponent == std::numeric_limits<bsl::uint32>::min_exponent);
    static_assert(bsl::numeric_limits<bsl::int64>::min_exponent == std::numeric_limits<bsl::int64>::min_exponent);
    static_assert(bsl::numeric_limits<bsl::uint64>::min_exponent == std::numeric_limits<bsl::uint64>::min_exponent);

    static_assert(bsl::numeric_limits<void *>::min_exponent10 == std::numeric_limits<void *>::min_exponent10);
    static_assert(bsl::numeric_limits<bool>::min_exponent10 == std::numeric_limits<bool>::min_exponent10);
    static_assert(bsl::numeric_limits<bsl::char_type>::min_exponent10 == std::numeric_limits<bsl::char_type>::min_exponent10);
    static_assert(bsl::numeric_limits<bsl::int8>::min_exponent10 == std::numeric_limits<bsl::int8>::min_exponent10);
    static_assert(bsl::numeric_limits<bsl::uint8>::min_exponent10 == std::numeric_limits<bsl::uint8>::min_exponent10);
    static_assert(bsl::numeric_limits<bsl::int16>::min_exponent10 == std::numeric_limits<bsl::int16>::min_exponent10);
    static_assert(bsl::numeric_limits<bsl::uint16>::min_exponent10 == std::numeric_limits<bsl::uint16>::min_exponent10);
    static_assert(bsl::numeric_limits<bsl::int32>::min_exponent10 == std::numeric_limits<bsl::int32>::min_exponent10);
    static_assert(bsl::numeric_limits<bsl::uint32>::min_exponent10 == std::numeric_limits<bsl::uint32>::min_exponent10);
    static_assert(bsl::numeric_limits<bsl::int64>::min_exponent10 == std::numeric_limits<bsl::int64>::min_exponent10);
    static_assert(bsl::numeric_limits<bsl::uint64>::min_exponent10 == std::numeric_limits<bsl::uint64>::min_exponent10);

    static_assert(bsl::numeric_limits<void *>::max_exponent == std::numeric_limits<void *>::max_exponent);
    static_assert(bsl::numeric_limits<bool>::max_exponent == std::numeric_limits<bool>::max_exponent);
    static_assert(bsl::numeric_limits<bsl::char_type>::max_exponent == std::numeric_limits<bsl::char_type>::max_exponent);
    static_assert(bsl::numeric_limits<bsl::int8>::max_exponent == std::numeric_limits<bsl::int8>::max_exponent);
    static_assert(bsl::numeric_limits<bsl::uint8>::max_exponent == std::numeric_limits<bsl::uint8>::max_exponent);
    static_assert(bsl::numeric_limits<bsl::int16>::max_exponent == std::numeric_limits<bsl::int16>::max_exponent);
    static_assert(bsl::numeric_limits<bsl::uint16>::max_exponent == std::numeric_limits<bsl::uint16>::max_exponent);
    static_assert(bsl::numeric_limits<bsl::int32>::max_exponent == std::numeric_limits<bsl::int32>::max_exponent);
    static_assert(bsl::numeric_limits<bsl::uint32>::max_exponent == std::numeric_limits<bsl::uint32>::max_exponent);
    static_assert(bsl::numeric_limits<bsl::int64>::max_exponent == std::numeric_limits<bsl::int64>::max_exponent);
    static_assert(bsl::numeric_limits<bsl::uint64>::max_exponent == std::numeric_limits<bsl::uint64>::max_exponent);

    static_assert(bsl::numeric_limits<void *>::max_exponent10 == std::numeric_limits<void *>::max_exponent10);
    static_assert(bsl::numeric_limits<bool>::max_exponent10 == std::numeric_limits<bool>::max_exponent10);
    static_assert(bsl::numeric_limits<bsl::char_type>::max_exponent10 == std::numeric_limits<bsl::char_type>::max_exponent10);
    static_assert(bsl::numeric_limits<bsl::int8>::max_exponent10 == std::numeric_limits<bsl::int8>::max_exponent10);
    static_assert(bsl::numeric_limits<bsl::uint8>::max_exponent10 == std::numeric_limits<bsl::uint8>::max_exponent10);
    static_assert(bsl::numeric_limits<bsl::int16>::max_exponent10 == std::numeric_limits<bsl::int16>::max_exponent10);
    static_assert(bsl::numeric_limits<bsl::uint16>::max_exponent10 == std::numeric_limits<bsl::uint16>::max_exponent10);
    static_assert(bsl::numeric_limits<bsl::int32>::max_exponent10 == std::numeric_limits<bsl::int32>::max_exponent10);
    static_assert(bsl::numeric_limits<bsl::uint32>::max_exponent10 == std::numeric_limits<bsl::uint32>::max_exponent10);
    static_assert(bsl::numeric_limits<bsl::int64>::max_exponent10 == std::numeric_limits<bsl::int64>::max_exponent10);
    static_assert(bsl::numeric_limits<bsl::uint64>::max_exponent10 == std::numeric_limits<bsl::uint64>::max_exponent10);

    static_assert(!bsl::numeric_limits<void *>::traps);
    static_assert(!bsl::numeric_limits<bool>::traps);
    static_assert(!bsl::numeric_limits<bsl::char_type>::traps);
    static_assert(!bsl::numeric_limits<bsl::int8>::traps);
    static_assert(!bsl::numeric_limits<bsl::uint8>::traps);
    static_assert(!bsl::numeric_limits<bsl::int16>::traps);
    static_assert(!bsl::numeric_limits<bsl::uint16>::traps);
    static_assert(!bsl::numeric_limits<bsl::int32>::traps);
    static_assert(!bsl::numeric_limits<bsl::uint32>::traps);
    static_assert(!bsl::numeric_limits<bsl::int64>::traps);
    static_assert(!bsl::numeric_limits<bsl::uint64>::traps);

    static_assert(bsl::numeric_limits<void *>::tinyness_before == std::numeric_limits<void *>::tinyness_before);
    static_assert(bsl::numeric_limits<bool>::tinyness_before == std::numeric_limits<bool>::tinyness_before);
    static_assert(bsl::numeric_limits<bsl::char_type>::tinyness_before == std::numeric_limits<bsl::char_type>::tinyness_before);
    static_assert(bsl::numeric_limits<bsl::int8>::tinyness_before == std::numeric_limits<bsl::int8>::tinyness_before);
    static_assert(bsl::numeric_limits<bsl::uint8>::tinyness_before == std::numeric_limits<bsl::uint8>::tinyness_before);
    static_assert(bsl::numeric_limits<bsl::int16>::tinyness_before == std::numeric_limits<bsl::int16>::tinyness_before);
    static_assert(bsl::numeric_limits<bsl::uint16>::tinyness_before == std::numeric_limits<bsl::uint16>::tinyness_before);
    static_assert(bsl::numeric_limits<bsl::int32>::tinyness_before == std::numeric_limits<bsl::int32>::tinyness_before);
    static_assert(bsl::numeric_limits<bsl::uint32>::tinyness_before == std::numeric_limits<bsl::uint32>::tinyness_before);
    static_assert(bsl::numeric_limits<bsl::int64>::tinyness_before == std::numeric_limits<bsl::int64>::tinyness_before);
    static_assert(bsl::numeric_limits<bsl::uint64>::tinyness_before == std::numeric_limits<bsl::uint64>::tinyness_before);

    static_assert(bsl::numeric_limits<void *>::min() == std::numeric_limits<void *>::min());
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bool>::min()) == static_cast<bsl::intmax>(std::numeric_limits<bool>::min()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::char_type>::min()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::char_type>::min()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::int8>::min()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::int8>::min()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::uint8>::min()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::uint8>::min()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::int16>::min()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::int16>::min()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::uint16>::min()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::uint16>::min()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::int32>::min()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::int32>::min()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::uint32>::min()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::uint32>::min()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::int64>::min()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::int64>::min()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::uint64>::min()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::uint64>::min()));

    static_assert(bsl::numeric_limits<void *>::lowest() == std::numeric_limits<void *>::lowest());
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bool>::lowest()) == static_cast<bsl::intmax>(std::numeric_limits<bool>::lowest()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::char_type>::lowest()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::char_type>::lowest()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::int8>::lowest()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::int8>::lowest()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::uint8>::lowest()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::uint8>::lowest()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::int16>::lowest()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::int16>::lowest()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::uint16>::lowest()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::uint16>::lowest()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::int32>::lowest()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::int32>::lowest()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::uint32>::lowest()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::uint32>::lowest()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::int64>::lowest()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::int64>::lowest()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::uint64>::lowest()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::uint64>::lowest()));

    static_assert(bsl::numeric_limits<void *>::max() == std::numeric_limits<void *>::max());
    static_assert(static_cast<bsl::uintmax>(bsl::numeric_limits<bool>::max()) == static_cast<bsl::uintmax>(std::numeric_limits<bool>::max()));
    static_assert(static_cast<bsl::uintmax>(bsl::numeric_limits<bsl::char_type>::max()) == static_cast<bsl::uintmax>(std::numeric_limits<bsl::char_type>::max()));
    static_assert(static_cast<bsl::uintmax>(bsl::numeric_limits<bsl::int8>::max()) == static_cast<bsl::uintmax>(std::numeric_limits<bsl::int8>::max()));
    static_assert(static_cast<bsl::uintmax>(bsl::numeric_limits<bsl::uint8>::max()) == static_cast<bsl::uintmax>(std::numeric_limits<bsl::uint8>::max()));
    static_assert(static_cast<bsl::uintmax>(bsl::numeric_limits<bsl::int16>::max()) == static_cast<bsl::uintmax>(std::numeric_limits<bsl::int16>::max()));
    static_assert(static_cast<bsl::uintmax>(bsl::numeric_limits<bsl::uint16>::max()) == static_cast<bsl::uintmax>(std::numeric_limits<bsl::uint16>::max()));
    static_assert(static_cast<bsl::uintmax>(bsl::numeric_limits<bsl::int32>::max()) == static_cast<bsl::uintmax>(std::numeric_limits<bsl::int32>::max()));
    static_assert(static_cast<bsl::uintmax>(bsl::numeric_limits<bsl::uint32>::max()) == static_cast<bsl::uintmax>(std::numeric_limits<bsl::uint32>::max()));
    static_assert(static_cast<bsl::uintmax>(bsl::numeric_limits<bsl::int64>::max()) == static_cast<bsl::uintmax>(std::numeric_limits<bsl::int64>::max()));
    static_assert(static_cast<bsl::uintmax>(bsl::numeric_limits<bsl::uint64>::max()) == static_cast<bsl::uintmax>(std::numeric_limits<bsl::uint64>::max()));

    static_assert(bsl::numeric_limits<void *>::epsilon() == std::numeric_limits<void *>::epsilon());
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bool>::epsilon()) == static_cast<bsl::intmax>(std::numeric_limits<bool>::epsilon()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::char_type>::epsilon()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::char_type>::epsilon()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::int8>::epsilon()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::int8>::epsilon()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::uint8>::epsilon()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::uint8>::epsilon()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::int16>::epsilon()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::int16>::epsilon()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::uint16>::epsilon()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::uint16>::epsilon()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::int32>::epsilon()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::int32>::epsilon()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::uint32>::epsilon()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::uint32>::epsilon()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::int64>::epsilon()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::int64>::epsilon()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::uint64>::epsilon()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::uint64>::epsilon()));

    static_assert(bsl::numeric_limits<void *>::round_error() == std::numeric_limits<void *>::round_error());
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bool>::round_error()) == static_cast<bsl::intmax>(std::numeric_limits<bool>::round_error()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::char_type>::round_error()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::char_type>::round_error()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::int8>::round_error()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::int8>::round_error()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::uint8>::round_error()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::uint8>::round_error()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::int16>::round_error()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::int16>::round_error()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::uint16>::round_error()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::uint16>::round_error()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::int32>::round_error()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::int32>::round_error()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::uint32>::round_error()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::uint32>::round_error()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::int64>::round_error()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::int64>::round_error()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::uint64>::round_error()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::uint64>::round_error()));

    static_assert(bsl::numeric_limits<void *>::infinity() == std::numeric_limits<void *>::infinity());
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bool>::infinity()) == static_cast<bsl::intmax>(std::numeric_limits<bool>::infinity()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::char_type>::infinity()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::char_type>::infinity()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::int8>::infinity()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::int8>::infinity()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::uint8>::infinity()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::uint8>::infinity()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::int16>::infinity()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::int16>::infinity()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::uint16>::infinity()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::uint16>::infinity()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::int32>::infinity()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::int32>::infinity()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::uint32>::infinity()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::uint32>::infinity()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::int64>::infinity()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::int64>::infinity()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::uint64>::infinity()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::uint64>::infinity()));

    static_assert(bsl::numeric_limits<void *>::quiet_NaN() == std::numeric_limits<void *>::quiet_NaN());
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bool>::quiet_NaN()) == static_cast<bsl::intmax>(std::numeric_limits<bool>::quiet_NaN()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::char_type>::quiet_NaN()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::char_type>::quiet_NaN()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::int8>::quiet_NaN()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::int8>::quiet_NaN()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::uint8>::quiet_NaN()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::uint8>::quiet_NaN()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::int16>::quiet_NaN()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::int16>::quiet_NaN()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::uint16>::quiet_NaN()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::uint16>::quiet_NaN()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::int32>::quiet_NaN()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::int32>::quiet_NaN()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::uint32>::quiet_NaN()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::uint32>::quiet_NaN()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::int64>::quiet_NaN()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::int64>::quiet_NaN()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::uint64>::quiet_NaN()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::uint64>::quiet_NaN()));

    static_assert(bsl::numeric_limits<void *>::signaling_NaN() == std::numeric_limits<void *>::signaling_NaN());
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bool>::signaling_NaN()) == static_cast<bsl::intmax>(std::numeric_limits<bool>::signaling_NaN()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::char_type>::signaling_NaN()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::char_type>::signaling_NaN()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::int8>::signaling_NaN()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::int8>::signaling_NaN()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::uint8>::signaling_NaN()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::uint8>::signaling_NaN()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::int16>::signaling_NaN()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::int16>::signaling_NaN()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::uint16>::signaling_NaN()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::uint16>::signaling_NaN()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::int32>::signaling_NaN()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::int32>::signaling_NaN()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::uint32>::signaling_NaN()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::uint32>::signaling_NaN()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::int64>::signaling_NaN()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::int64>::signaling_NaN()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::uint64>::signaling_NaN()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::uint64>::signaling_NaN()));

    static_assert(bsl::numeric_limits<void *>::denorm_min() == std::numeric_limits<void *>::denorm_min());
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bool>::denorm_min()) == static_cast<bsl::intmax>(std::numeric_limits<bool>::denorm_min()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::char_type>::denorm_min()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::char_type>::denorm_min()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::int8>::denorm_min()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::int8>::denorm_min()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::uint8>::denorm_min()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::uint8>::denorm_min()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::int16>::denorm_min()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::int16>::denorm_min()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::uint16>::denorm_min()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::uint16>::denorm_min()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::int32>::denorm_min()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::int32>::denorm_min()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::uint32>::denorm_min()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::uint32>::denorm_min()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::int64>::denorm_min()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::int64>::denorm_min()));
    static_assert(static_cast<bsl::intmax>(bsl::numeric_limits<bsl::uint64>::denorm_min()) == static_cast<bsl::intmax>(std::numeric_limits<bsl::uint64>::denorm_min()));

    return bsl::ut_success();
}

// clang-format on
