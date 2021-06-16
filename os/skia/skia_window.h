// LAF OS Library
// Copyright (C) 2012-2016  David Capello
//
// This file is released under the terms of the MIT license.
// Read LICENSE.txt for more information.

#ifndef OS_SKIA_SKIA_WINDOW_INCLUDED
#define OS_SKIA_SKIA_WINDOW_INCLUDED
#pragma once

#if LAF_WINDOWS
  #include "os/skia/skia_window_win.h"
#elif LAF_MACOS
  #include "os/skia/skia_window_osx.h"
#else
  #include "os/skia/skia_window_x11.h"
#endif

#endif
