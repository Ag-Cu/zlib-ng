/* SPDX-License_Identifier: BSD-3-Clause
 * Copyright(c) ByteDance 2024
 */

#if defined(RISCV_CRC32)
#include "zbuild.h"
// #include "crc32_templete.h"
#include "crc32_generic.h"

#include <assert.h>
#include <stdint.h>

#include <riscv_bitmanip.h>

Z_INTERNAL uint32_t crc32_riscv64_zbc(uint32_t crc, const uint8_t *buf,
                                      size_t len) {
  return crc32_clmul(crc, buf, len);
}

#endif