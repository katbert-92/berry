/********************************************************************
** Copyright (c) 2018-2020 Guan Wenliang
** This file is part of the Berry default interpreter.
** skiars@qq.com, https://github.com/Skiars/berry
** See Copyright Notice in the LICENSE file or at
** https://github.com/Skiars/berry/blob/master/LICENSE
********************************************************************/
#ifndef BE_TIMELIB_H
#define BE_TIMELIB_H

#ifdef __cplusplus
extern "C" {
#endif

#include "berry.h"

breal be_clock(void);
bint be_time(void);

#ifdef __cplusplus
}
#endif

#endif
