#ifndef GCC_TM_H
#define GCC_TM_H
#define TARGET_CPU_DEFAULT ((MASK_SPLIT_ADDRESSES)|MASK_EXPLICIT_RELOCS)
#ifndef TARGET_ENDIAN_DEFAULT
# define TARGET_ENDIAN_DEFAULT 0
#endif
#ifndef MIPS_ISA_DEFAULT
# define MIPS_ISA_DEFAULT 33
#endif
#ifndef MIPS_ABI_DEFAULT
# define MIPS_ABI_DEFAULT ABI_32
#endif
#ifndef _BUILD_MCHP_
# define _BUILD_MCHP_ 1
#endif
#ifndef _BUILD_C32_
# define _BUILD_C32_ 1
#endif
#ifdef IN_GCC
# include "options.h"
# include "config/elfos.h"
# include "config/newlib-stdint.h"
# include "config/mips/mips.h"
# include "config/mips/elf.h"
# include "config/mips/sde.h"
# include "config/mips/sdemtk.h"
# include "config/pic32/mchp.h"
# include "config/tm-dwarf2.h"
# include "defaults.h"
#endif
#if defined IN_GCC && !defined GENERATOR_FILE && !defined USED_FOR_TARGET
# include "insn-constants.h"
# include "insn-flags.h"
#endif
#endif /* GCC_TM_H */
