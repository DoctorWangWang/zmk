# Copyright (c) 2020-2021 The ZMK Contributors
# SPDX-License-Identifier: MIT

add_subdirectory_ifdef(CONFIG_ZMK_BATTERY battery)
add_subdirectory_ifdef(CONFIG_EC11 ec11)
add_subdirectory_ifdef(CONFIG_PMW33XX pmw33xx)
add_subdirectory_ifdef(CONFIG_PINNACLE cirque_trackpad)

# new impl
add_subdirectory_ifdef(CONFIG_PMW3360 pixart/pmw3360)
add_subdirectory_ifdef(CONFIG_PAW3395 pixart/paw3395)
add_subdirectory_ifdef(CONFIG_PMW3610 pixart/pmw3610)
