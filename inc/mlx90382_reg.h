/*
 * Copyright (c) 2006-2024, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2024-12-15     lgnq         the first version
 */

#ifndef MLX90382_REG_H_
#define MLX90382_REG_H_

#define MLX90382_CONFIG_REG                 0x100

#define MLX90382_SOFT_RESET                 0x004
#define MLX90382_TEMP                       0x03C
#define MLX90382_LIN_PHASE                  0x03E   //Angular value after linearization, resolution 360/216 deg; Writable only with LOCK_PHASE = 1; Before delay compensation
#define MLX90382_SPEED                      0x040
#define MLX90382_DRIFTC_PHASE               0x046   //Angular value after delay compensation and zero-point offset correction, resolution 360/0x10000 deg
#define MLX90382_SC_PHASE                   0x048   //Position value after signal conditioning
#define MLX90382_GC_I                       0x04A   //Gain compensated I component
#define MLX90382_GC_Q                       0x04E   //Gain compensated Q component

#define MLX90382_PHASE_OFS                  0x120   //Phase/Angle offset before signal conditioning, resolution 360/216 deg (signed 2th-complement)

#define MLX90382_ANA_VERSION                0x0EE
#define MLX90382_DIG_VERSION                0x0F0

#endif
