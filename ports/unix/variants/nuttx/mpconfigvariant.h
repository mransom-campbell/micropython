/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2019 Damien P. George
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#define _DIRENT_HAVE_D_INO (0)

//#define MICROPY_STREAMS_NON_BLOCK (0)

#define MICROPY_PY_SYS_PLATFORM "nuttx"

//#define MICROPY_DEBUG_VERBOSE (1)
#define MICROPY_USE_INTERNAL_PRINTF (0)
//#define MICROPY_DE

#define MICROPY_NLR_SETJMP (1)
#define MICROPY_EMIT_X64 (0)
#define MICROPY_EMIT_THUMB (0)
#define MICROPY_EMIT_ARM (0)

//#define MICROPY_USE_READLINE (1)

#define MICROPY_PY_BUILTINS_HELP                (1)
#define MICROPY_PY_BUILTINS_HELP_MODULES        (1)

#define MICROPY_FLOAT_IMPL          (MICROPY_FLOAT_IMPL_NONE)

// define these to avoid warning from -Wundef
// NuttX compiles with extra warnings compared to Micropython

#define MICROPY_ROM_TEXT_COMPRESSION 0
#define MICROPY_PY_OS_DUPTERM 0
#define MICROPY_PY_LWIP_SLIP 0
#define MICROPY_PY_BLUETOOTH 0
//#define MICROPY_PY_THREAD 0
//#define MICROPY_PY_SOCKET 0
#define MICROPY_PY_SYS_SETTRACE 0
#define MICROPY_PY_USSL 0
#define MICROPY_PY_UOS_VFS 0
#define MICROPY_PY_FFI 0
#define MICROPY_PY_JNI 0
//#define MICROPY_PY_TERMIOS 1
#define MICROPY_VFS_POSIX 0
#define MICROPY_ENABLE_DYNRUNTIME 0
#define _FILE_OFFSET_BITS 0

// issues
//#define MICROPY_PY_UHASHLIB         (0)

#define MICROPY_GCREGS_SETJMP 0
#define GENERIC_ASM_API 0
#define MICROPY_VFS_FAT 0
#define MICROPY_PY_USSL_FINALISER 0