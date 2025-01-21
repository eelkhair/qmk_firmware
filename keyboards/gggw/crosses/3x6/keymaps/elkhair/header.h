// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include <action_layer.h>
#include QMK_KEYBOARD_H

#include "lib/achordion.h"
#include "lib/crosses.h"

enum my_keycodes {
    VIMS = SAFE_RANGE,
    LARR,
    FARR,
    EPIP,
    LVBC,
    RVBC,
    BARR,
    MSE_INC,
    MSE_DEC,
    DRAG_SCROLL,
};