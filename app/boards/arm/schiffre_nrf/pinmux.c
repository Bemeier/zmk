/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#include <kernel.h>
#include <device.h>
#include <init.h>
#include <drivers/gpio.h>
#include <sys/sys_io.h>
#include <devicetree.h>

static int pinmux_schiffre_nrf_init(const struct device *port) {
    ARG_UNUSED(port);

#if (CONFIG_BOARD_SCHIFFRE_NRF)
#endif

    return 0;
}

SYS_INIT(pinmux_schiffre_nrf_init, APPLICATION, CONFIG_APPLICATION_INIT_PRIORITY);
